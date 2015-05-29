#include "MyForm.h"

System::Void Projekt1::MyForm::MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}

System::Void Projekt1::MyForm::listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}

System::Void Projekt1::MyForm::zaproponujPokójToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->zaproponujPokójToolStripMenuItem_Click(sender, e);
}
System::Void Projekt1::MyForm::zaproponujPokójToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("okno proponowania pokoju");
}

System::Void Projekt1::MyForm::nowaRezerwacjaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("okno nowej rezerwacji");
}

System::Void Projekt1::MyForm::anulujRezerwacjêToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("okno anulowania rezerwacji");
}

System::Void Projekt1::MyForm::dodajPokójToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("okno dodawania pokoi");
}

System::Void Projekt1::MyForm::usuñPokójToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("okno usuwania pokoi");
}


System::Void Projekt1::MyForm::oProgramieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Autor: P. Tañski", "O programie", MessageBoxButtons::OK);
}

System::Void Projekt1::MyForm::iloœæMiejscToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Zmiana sposobu grupowania na ilosc miejsc");
}

System::Void Projekt1::MyForm::piêtraToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Zmiana sposobu grupowania na pietra");
}

System::Void Projekt1::MyForm::wolneToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Zmiana sposobu grupowania na zajetosc");
}
