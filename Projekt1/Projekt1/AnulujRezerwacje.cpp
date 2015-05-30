#include "AnulujRezerwacje.h"

#include "Klasy.h"
#include "BazaDanych.h"
#include "MyForm.h"

#include <sstream>

System::Void Projekt1::AnulujRezerwacje::anulujbtn_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < this->listaRezerwacji->SelectedItems->Count; ++i)
	{
		BazaDanych::AnulujRezerwacje(System::Convert::ToInt32(this->listaRezerwacji->SelectedItems[i]->SubItems[3]->Text));
	}

	MyForm ^ form = dynamic_cast<MyForm^>(this->Owner);
	form->odswiezPokoje();
	this->Close();
}

System::Void Projekt1::AnulujRezerwacje::zaladujRezerwacje() {
	auto rezerwacje = BazaDanych::Rezerwacje();
	for (auto & rezerwacja : rezerwacje)
	{
		std::stringstream ss;
		ss << rezerwacja.numerPokoju;
		auto nrPokoju = gcnew System::String(ss.str().c_str());

		ss.str("");
		ss << rezerwacja.poczatek;
		auto poczatek = gcnew System::String(ss.str().c_str());

		ss.str("");
		ss << rezerwacja.koniec;
		auto koniec = gcnew System::String(ss.str().c_str());

		ss.str("");
		ss << rezerwacja.id;
		auto id = gcnew System::String(ss.str().c_str());

		auto wpis = gcnew ListViewItem(nrPokoju);
		wpis->SubItems->Add(poczatek);
		wpis->SubItems->Add(koniec);
		wpis->SubItems->Add(id);

		this->listaRezerwacji->Items->Add(wpis);
	}
}
