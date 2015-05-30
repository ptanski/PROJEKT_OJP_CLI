#pragma once

#include <string>
#include <vector>

namespace Projekt1
{
	struct Pokoj;
	struct Rezerwacja;

	class BazaDanych
	{
		BazaDanych();
		friend BazaDanych & BDInit(void);

		// uchwyt BD o wskazanym typie
		template<typename T>
		T & handle();

	public:
		BazaDanych(const BazaDanych &) = delete;
		BazaDanych(BazaDanych &&) = delete;
		~BazaDanych();

		// dodaj nowy pokoj o numerze kolejnym lub podanym , zwroc numer pokoju
		static int NowyPokoj(int dorosli, int dzieci, int pietro, bool palacy, int numer = -1);
		// usun pokoj o podanym numerze pokoju
		static void UsunPokoj(int numerPokoju);

		// dodaj nowa rezerwacje, zwroc ID rezerwacji
		static int NowaRezerwacja(int numerPokoju, int poczatek, int koniec,
			std::wstring imie, std::wstring nazwisko, std::wstring telefon, std::wstring email, std::wstring adres,
			std::wstring specjalneZyczenie);

		// anuluj rezerwacje o podanym ID
		static bool AnulujRezerwacje(int idRezerwacji);

		// zwroc pokoje spelniajace wskazane kryteria (lub wszystkie jesli nie przekazano kryteriow)
		static std::vector<Pokoj> Pokoje(Pokoj kryteria);
		// zwroc wszystkie rezerwacje
		static std::vector<Rezerwacja> Rezerwacje();
	};
}