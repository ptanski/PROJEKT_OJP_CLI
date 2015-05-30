#include "MyForm.h"

#include "Proponowanie.h"

#include "NowaRezerwacja.h"
#include "AnulujRezerwacje.h"

#include "NowyPokoj.h"
#include "UsunPokoj.h"

#include "BazaDanych.h"

System::Void Projekt1::MyForm::MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}

System::Void Projekt1::MyForm::listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}

System::Void Projekt1::MyForm::zaproponujPokójToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->zaproponujPokójToolStripMenuItem_Click(sender, e);
}
System::Void Projekt1::MyForm::zaproponujPokójToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Proponowanie proponowanie;
	// showdialog - okno modalne
	proponowanie.ShowDialog(this);
}

System::Void Projekt1::MyForm::nowaRezerwacjaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	NowaRezerwacja nowaRezerwacja;

	nowaRezerwacja.ShowDialog(this);
}

System::Void Projekt1::MyForm::anulujRezerwacjêToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	AnulujRezerwacje anulujRezerwacje;

	anulujRezerwacje.ShowDialog(this);
}

System::Void Projekt1::MyForm::dodajPokójToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	NowyPokoj nowyPokoj;

	nowyPokoj.ShowDialog(this);
}

System::Void Projekt1::MyForm::usuñPokójToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	UsunPokoj usunPokoj;

	usunPokoj.ShowDialog(this);
}


System::Void Projekt1::MyForm::oProgramieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Autor: P. Tañski", "O programie", MessageBoxButtons::OK);
}

System::Void Projekt1::MyForm::listaPokoi_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
	NowaRezerwacja nowaRezerwacja;
	// podac parametr jakim jest wybrany pokój
	nowaRezerwacja.ShowDialog(this);

}

#include <sstream>
#include "Klasy.h"
System::Void Projekt1::MyForm::odswiezPokoje()
{
	Pokoj kryterium;
	kryterium.poczatekRezerwacji = System::DateTime::Today.Year * 1000 + System::DateTime::Today.DayOfYear;
	kryterium.koniecRezerwacji = System::DateTime::Today.Year * 1000 + System::DateTime::Today.DayOfYear;

	auto pokoje = BazaDanych::Pokoje(kryterium);

	this->listaPokoi->Items->Clear();
	for (auto & pokoj : pokoje)
	{
		std::stringstream ss;
		ss << "Pokoj nr " << pokoj.numer;

		auto numer = gcnew String(ss.str().c_str());
		auto item = gcnew ListViewItem(numer);
		item->SubItems->Add(pokoj.zarezerwowany ? "Zarezerwowany" : "Wolny");
		item->UseItemStyleForSubItems = false;
		item->SubItems[item->SubItems->Count-1]->ForeColor = pokoj.zarezerwowany ? System::Drawing::Color::Red : System::Drawing::Color::Green;

		this->listaPokoi->Items->Add(item);
	}
}