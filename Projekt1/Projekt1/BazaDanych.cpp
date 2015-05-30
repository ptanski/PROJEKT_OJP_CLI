#include "BazaDanych.h"
#include "Klasy.h"

#include <iostream>

#include "sqlite3.h"
#include <map>

namespace Projekt1
{
	typedef sqlite3 * dbHandle;
	const char * plikBD = "db.lite";


#define KOL_DEF(nazwa, typ) {nazwa, typ}
	const char * kolumnyRezerwacje[][2] = {
		KOL_DEF("id", "INTEGER PRIMARY KEY"),
		KOL_DEF("pokoj", "INTEGER"),
		KOL_DEF("imie", "TEXT"),
		KOL_DEF("nazwisko", "TEXT"),
		KOL_DEF("telefon", "TEXT"),
		KOL_DEF("email", "TEXT"),
		KOL_DEF("adres", "TEXT"),
		KOL_DEF("zyczenie", "TEXT"),
		KOL_DEF("poczatek", "INTEGER"),
		KOL_DEF("koniec", "INTEGER"),
		KOL_DEF(NULL, NULL)
	};
	const char * kolumnyPokoje[][2] = {
		KOL_DEF("id", "INTEGER PRIMARY KEY"),
		KOL_DEF("dorosli", "INTEGER"),
		KOL_DEF("dzieci", "INTEGER"),
		KOL_DEF("pietro", "INTEGER"),
		KOL_DEF("palacy", "INTEGER"),
		KOL_DEF("numer", "INTEGER"),
		KOL_DEF(NULL,NULL)
	};
#undef KOL_DEF
	static std::string CreateTableStatement(const char *nazwa, const char * kolumny[][2])
	{
		std::string stm;
		stm = "CREATE TABLE IF NOT EXISTS ";
		stm.append(nazwa);
		stm.append("(");

		for (int i = 0; kolumny[i][0] != NULL; ++i)
		{
			stm = stm + kolumny[i][0] + " " + kolumny[i][1] + ",";
		}
		stm.erase(stm.length() - 1);

		stm.append(")");

		return stm;
	}

	BazaDanych::BazaDanych()
	{
		dbHandle & bd = handle<dbHandle>();
		int result = sqlite3_open(plikBD, &bd);

		auto createPokoje = CreateTableStatement("pokoje", kolumnyPokoje);
		auto createRezerwacje = CreateTableStatement("rezerwacje", kolumnyRezerwacje);

		sqlite3_exec(bd, createPokoje.c_str(), NULL, NULL, NULL);
		sqlite3_exec(bd, createRezerwacje.c_str(), NULL, NULL, NULL);
	}

	BazaDanych::~BazaDanych()
	{
		sqlite3_close(handle<dbHandle>());
	}

	BazaDanych & BDInit()
	{
		static BazaDanych bd;
		return bd;
	}

	template<typename T>
	T & BazaDanych::handle()
	{
		static T handle;
		return handle;
	}

	int BazaDanych::NowyPokoj(int dorosli, int dzieci, int pietro, bool palacy, int numer) {
		BazaDanych & bd = BDInit();
		dbHandle & handle = bd.handle<dbHandle>();


		sqlite3_stmt * stmt;
		sqlite3_prepare(handle, "INSERT INTO pokoje(dorosli, dzieci, pietro, palacy, numer) VALUES (?, ?, ?, ?, ?)", -1, &stmt, NULL);

		if (stmt != NULL)
		{
			if (numer == -1)
			{
				sqlite3_stmt * stmt;
				sqlite3_prepare(handle, "SELECT MAX(numer) FROM pokoje", -1, &stmt, NULL);
				sqlite3_step(stmt);
				numer = sqlite3_column_int(stmt, 0)+1;
				sqlite3_finalize(stmt);
			}
			sqlite3_bind_int(stmt, 1, dorosli);
			sqlite3_bind_int(stmt, 2, dzieci);
			sqlite3_bind_int(stmt, 3, pietro);
			sqlite3_bind_int(stmt, 4, palacy?1:0);
			sqlite3_bind_int(stmt, 5, numer);

			sqlite3_step(stmt);
		}
		else
		{
			std::cerr << sqlite3_errstr(sqlite3_errcode(handle)) << std::endl;
		}

		sqlite3_finalize(stmt);
			


		return numer;
	}

	void BazaDanych::UsunPokoj(int numerPokoju) {
		BazaDanych & bd = BDInit();
		dbHandle & handle = bd.handle<dbHandle>();

		sqlite3_stmt * stmt;
		sqlite3_prepare(handle, "DELETE FROM pokoje WHERE numer = ?", -1, &stmt, NULL);
		sqlite3_bind_int(stmt, 1, numerPokoju);

		sqlite3_step(stmt);

		sqlite3_finalize(stmt);
	}


	int BazaDanych::NowaRezerwacja(int numerPokoju, int poczatek, int koniec,
		std::wstring imie, std::wstring nazwisko, std::wstring telefon, std::wstring email, std::wstring adres,
		std::wstring specjalneZyczenie) {
		BazaDanych & bd = BDInit();
		dbHandle & handle = bd.handle<dbHandle>();

		sqlite3_stmt * stmt;
		sqlite3_prepare(handle, "INSERT INTO rezerwacje (pokoj, imie, nazwisko, telefon, email, adres, zyczenie, poczatek, koniec)"
								"VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)",
			-1, &stmt, NULL);
		sqlite3_bind_int(stmt, 1, numerPokoju);
		sqlite3_bind_text16(stmt, 2, imie.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text16(stmt, 3, nazwisko.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text16(stmt, 4, telefon.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text16(stmt, 5, email.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text16(stmt, 6, adres.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_text16(stmt, 7, specjalneZyczenie.c_str(), -1, SQLITE_STATIC);
		sqlite3_bind_int(stmt, 8, poczatek);
		sqlite3_bind_int(stmt, 9, koniec);

		sqlite3_step(stmt);
		sqlite3_finalize(stmt);

		return sqlite3_last_insert_rowid(handle);
	}


	bool BazaDanych::AnulujRezerwacje(int idRezerwacji) {
		BazaDanych & bd = BDInit();
		dbHandle & handle = bd.handle<dbHandle>();
		bool result = false;

		sqlite3_stmt * stmt;
		sqlite3_prepare(handle, "DELETE FROM rezerwacje WHERE id = ?", -1, &stmt, NULL);
		sqlite3_bind_int(stmt, 1, idRezerwacji);
		sqlite3_step(stmt);
		sqlite3_finalize(stmt);

		return result;
	}


	std::vector<Pokoj> BazaDanych::Pokoje(Pokoj kryteria) {
		BazaDanych & bd = BDInit();
		dbHandle & handle = bd.handle<dbHandle>();
		std::vector<Pokoj> result;

		sqlite3_stmt * stmt;
		sqlite3_prepare(handle, "SELECT numer, dorosli, dzieci, pietro, palacy FROM pokoje", -1, &stmt, NULL);

		while (sqlite3_step(stmt) == SQLITE_ROW)
		{
			int numer = sqlite3_column_int(stmt, 0);
			int dorosli = sqlite3_column_int(stmt, 1);
			int dzieci = sqlite3_column_int(stmt, 2);
			int pietro = sqlite3_column_int(stmt, 3);
			bool palacy = sqlite3_column_int(stmt, 4) == 1 ? true : false;
			bool zarezerwowany = false;

			// sprawdzenie zajetosci pokoju
			{
				sqlite3_stmt * stmt;
				sqlite3_prepare(handle, "SELECT COUNT(*) FROM rezerwacje WHERE pokoj = ? AND poczatek <= ? AND koniec > ?", -1, &stmt, NULL);
				sqlite3_bind_int(stmt, 1, numer);
				sqlite3_bind_int(stmt, 2, kryteria.poczatekRezerwacji);
				sqlite3_bind_int(stmt, 3, kryteria.koniecRezerwacji);

				sqlite3_step(stmt);

				if (sqlite3_column_int(stmt, 0))
					zarezerwowany = true;

				sqlite3_finalize(stmt);
			}

			if (kryteria.dorosli <= dorosli &&
				kryteria.dzieci <= dzieci &&
				(kryteria.palacy && palacy) == kryteria.palacy &&
				(kryteria.zarezerwowany || zarezerwowany) == kryteria.zarezerwowany &&
				((kryteria.numer > -1) ? (kryteria.numer == numer ) : true) )
			{

				result.emplace_back();
				result.back().numer = numer;
				result.back().dorosli = dorosli;
				result.back().dzieci = dzieci;
				result.back().pietro = pietro;
				result.back().palacy = palacy;
				result.back().zarezerwowany = zarezerwowany;

			}

		}
		sqlite3_finalize(stmt);

		return result;
	}

	std::vector<Rezerwacja> BazaDanych::Rezerwacje() {
		BazaDanych & bd = BDInit();
		dbHandle & handle = bd.handle<dbHandle>();
		std::vector<Rezerwacja> result;

		sqlite3_stmt * stmt;
		// TODO : mo¿na rozwin¹æ o pobieranie dodatkowych pól
		// w tym momencie niepotrzebne w aplikacji
		sqlite3_prepare(handle, "SELECT id, pokoj, poczatek, koniec FROM rezerwacje", -1, &stmt, NULL);

		while (sqlite3_step(stmt) == SQLITE_ROW)
		{
			int id = sqlite3_column_int(stmt, 0);
			int pokoj = sqlite3_column_int(stmt, 1);
			int poczatek = sqlite3_column_int(stmt, 2);
			int koniec = sqlite3_column_int(stmt, 3);

			result.emplace_back();
			result.back().id = id;
			result.back().numerPokoju = pokoj;
			result.back().poczatek = poczatek;
			result.back().koniec = koniec;
		}

		return result;
	}
}
