#pragma once

#include <string>

namespace Projekt1
{
	struct Pokoj
	{
		int numer = -1;
		int dorosli = -1;
		int dzieci = -1;
		int pietro = -1;
		bool palacy = false;
		bool zarezerwowany = true;
		int poczatekRezerwacji = -1;
		int koniecRezerwacji = -1;
	};

	struct Rezerwacja
	{
		int id = -1;
		int numerPokoju = -1; 
		int dorosli = -1; 
		int dzieci = -1; 
		bool palacy = false;
		int poczatek = -1; 
		int koniec = -1;
		std::string imie; std::string nazwisko; std::string telefon; std::string email; std::string adres;
		std::string specjalneZyczenie;
	};

}
