#include "NowaRezerwacja.h"
#include "MyForm.h"

#include "BazaDanych.h"
#include "Klasy.h"
#include <msclr/marshal_cppstd.h>
#include <sstream>

System::Void Projekt1::NowaRezerwacja::anuluj_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}

System::Void Projekt1::NowaRezerwacja::zarezerwuj_Click(System::Object^  sender, System::EventArgs^  e) {
	if (dozwolonaRezerwacja())
	{
		BazaDanych::NowaRezerwacja(
			System::Convert::ToInt32(this->numerPokoju->SelectedItem),
			this->poczatek->SelectionStart.Year * 1000 + this->poczatek->SelectionStart.DayOfYear,
			this->koniec->SelectionStart.Year * 1000 + this->koniec->SelectionStart.DayOfYear,
			msclr::interop::marshal_as<std::wstring>(this->imie->Text),
			msclr::interop::marshal_as<std::wstring>(this->nazwisko->Text),
			msclr::interop::marshal_as<std::wstring>(this->telefon->Text),
			msclr::interop::marshal_as<std::wstring>(this->email->Text),
			msclr::interop::marshal_as<std::wstring>(this->adres->Text),
			msclr::interop::marshal_as<std::wstring>(this->zyczenie->Text)
			);

		MyForm ^ form = dynamic_cast<MyForm^>(this->Owner);
		form->odswiezPokoje();
		this->Close();
	}
}

System::Void Projekt1::NowaRezerwacja::numerPokoju_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
{

}

bool Projekt1::NowaRezerwacja::dozwolonaRezerwacja()
{
	// sprawdzenie, czy zostal w ogole wybrany pokoj
	{
		if (this->numerPokoju->SelectedIndex < 0)
		{
			return false;
		}
	}
	// sprawdzenie, czy wybrany pokoj jest zajety
	{
		Pokoj kryterium;
		kryterium.numer = System::Convert::ToInt32(this->numerPokoju->SelectedItem);
		kryterium.poczatekRezerwacji = this->poczatek->SelectionStart.Year * 1000 + this->poczatek->SelectionStart.DayOfYear;
		kryterium.koniecRezerwacji = this->koniec->SelectionStart.Year * 1000 + this->koniec->SelectionStart.DayOfYear;
		auto wynik = BazaDanych::Pokoje(kryterium).at(0).zarezerwowany;
		if (wynik == true)
			return false;
	}
}

System::Void Projekt1::NowaRezerwacja::pobierzPokoje()
{
	Pokoj kryterium;
	auto pokoje = BazaDanych::Pokoje(kryterium);

	for (auto & pokoj : pokoje)
	{
		std::stringstream ss;
		ss << pokoj.numer;
		auto text = gcnew System::String(ss.str().c_str());
		this->numerPokoju->Items->Add(text);
	}
}