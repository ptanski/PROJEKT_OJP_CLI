#include <Windows.h>
#include <iostream>
#include "MyForm.h"

int main()
{
	std::cout << "wyjscie do konsoli" << std::endl;
	Projekt1::MyForm form1;
	System::Windows::Forms::Application::Run(%form1);
	return -1;
}