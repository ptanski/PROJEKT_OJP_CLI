#include "Proponowanie.h"

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
}
