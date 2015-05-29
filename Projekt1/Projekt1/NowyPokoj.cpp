#include "NowyPokoj.h"
#include "BazaDanych.h"
#include "MyForm.h"

System::Void Projekt1::NowyPokoj::pokoj_Click(System::Object^  sender, System::EventArgs^  e) {
	BazaDanych::NowyPokoj(static_cast<int>(this->dorosli->Value), static_cast<int>(this->dzieci->Value), static_cast<int>(this->pietro->Value), this->palacy->Checked);
	MyForm ^ form = dynamic_cast<MyForm^>(this->Owner);
	form->odswiezPokoje();
	this->Close();
}

