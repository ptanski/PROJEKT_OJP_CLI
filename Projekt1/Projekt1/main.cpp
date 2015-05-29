#include <Windows.h>
#include <iostream>
#include <string>
#include "MyForm.h"

int main()
{
	// enable visual styles
	System::Windows::Forms::Application::EnableVisualStyles();

	// create instance of form1 (main window) and run it
	Projekt1::MyForm form1;
	System::Windows::Forms::Application::Run(%form1);

	return 0;
}