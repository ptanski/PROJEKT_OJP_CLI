#include "UsunPokoj.h"
#include "MyForm.h"

#include "Klasy.h"
#include <sstream>

#include "BazaDanych.h"
#include <iostream>

System::Void Projekt1::UsunPokoj::usun_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < this->listaPokoi->SelectedItems->Count; ++i)
	{
		auto item = this->listaPokoi->SelectedItems[i];
		auto pokoj = System::Convert::ToInt32(item->SubItems[1]->Text);
		BazaDanych::UsunPokoj(pokoj);
	}

	MyForm ^ form = dynamic_cast<MyForm^>(this->Owner);
	form->odswiezPokoje();
	this->Close();
}

System::Void Projekt1::UsunPokoj::odswiezListePokoi()
{
	Pokoj kryterium;
	auto pokoje = BazaDanych::Pokoje(kryterium);

	this->listaPokoi->Items->Clear();
	for (auto & pokoj : pokoje)
	{
		std::stringstream ss;
		ss << "Pokoj nr " << pokoj.numer;

		String ^ numer = gcnew String(ss.str().c_str());
		auto item = gcnew ListViewItem(numer);

		ss.str("");
		ss << pokoj.numer;
		String ^ pietro = gcnew String(ss.str().c_str());
		item->SubItems->Add(pietro);

		this->listaPokoi->Items->Add(item);
	}

	
}