#include "NowaRezerwacja.h"

System::Void Projekt1::NowaRezerwacja::anuluj_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Anulowano rezerwacjê");
}
System::Void Projekt1::NowaRezerwacja::zarezerwuj_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Dodano rezerwacjê!");
}