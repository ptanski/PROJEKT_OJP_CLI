#include "MyForm.h"
#include "Proponowanie.h"

System::Void Projekt1::MyForm::MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}

System::Void Projekt1::MyForm::listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}

System::Void Projekt1::MyForm::zaproponujPok�jToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->zaproponujPok�jToolStripMenuItem_Click(sender, e);
}
System::Void Projekt1::MyForm::zaproponujPok�jToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Proponowanie proponowanie;
	// showdialog - okno modalne
	proponowanie.ShowDialog();
}

System::Void Projekt1::MyForm::nowaRezerwacjaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("okno nowej rezerwacji");
}

System::Void Projekt1::MyForm::anulujRezerwacj�ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("okno anulowania rezerwacji");
}

System::Void Projekt1::MyForm::dodajPok�jToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("okno dodawania pokoi");
}

System::Void Projekt1::MyForm::usu�Pok�jToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("okno usuwania pokoi");
}


System::Void Projekt1::MyForm::oProgramieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Autor: P. Ta�ski", "O programie", MessageBoxButtons::OK);
}

System::Void Projekt1::MyForm::ilo��MiejscToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Zmiana sposobu grupowania na ilosc miejsc");
}

System::Void Projekt1::MyForm::pi�traToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Zmiana sposobu grupowania na pietra");
}

System::Void Projekt1::MyForm::wolneToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Zmiana sposobu grupowania na zajetosc");
}
