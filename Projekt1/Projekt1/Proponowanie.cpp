#include "Proponowanie.h"

#include "BazaDanych.h"
#include "Klasy.h"

#include <sstream>

System::Void Projekt1::Proponowanie::listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

}

System::Void Projekt1::Proponowanie::poczatek_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
	odswiezListePokoi();
}

System::Void Projekt1::Proponowanie::koniec_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
	odswiezListePokoi();
}

System::Void Projekt1::Proponowanie::iloscDoroslych_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	odswiezListePokoi();
}

System::Void Projekt1::Proponowanie::iloscDzieci_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	odswiezListePokoi();
}

System::Void Projekt1::Proponowanie::dlaPalacych_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	odswiezListePokoi();
}

System::Void Projekt1::Proponowanie::odswiezListePokoi()
{
	Pokoj kryterium;
	kryterium.dorosli = static_cast<int>(this->iloscDoroslych->Value);
	kryterium.dzieci = static_cast<int>(this->iloscDzieci->Value);
	kryterium.palacy = this->dlaPalacych->Checked;
	kryterium.poczatekRezerwacji = this->poczatek->SelectionStart.Year * 1000 + this->poczatek->SelectionStart.DayOfYear;
	kryterium.koniecRezerwacji = this->koniec->SelectionStart.Year * 1000 + this->koniec->SelectionStart.DayOfYear;
	kryterium.zarezerwowany = false;

	auto pokoje = BazaDanych::Pokoje(kryterium);

	this->listaPokoi->Items->Clear();
	for (auto & pokoj : pokoje)
	{
		std::stringstream ss;
		ss << "Pokoj nr " << pokoj.numer;

		String ^ numer = gcnew String(ss.str().c_str());
		auto item = gcnew ListViewItem(numer);

		ss.str("");
		ss << "Piêtro nr " << pokoj.pietro;
		String ^ pietro = gcnew String(ss.str().c_str());
		item->SubItems->Add(pietro);

		this->listaPokoi->Items->Add(item);
	}

	
}
