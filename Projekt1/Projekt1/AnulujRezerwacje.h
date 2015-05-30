#pragma once

namespace Projekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AnulujRezerwacje
	/// </summary>
	public ref class AnulujRezerwacje : public System::Windows::Forms::Form
	{
	public:
		AnulujRezerwacje(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			zaladujRezerwacje();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AnulujRezerwacje()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listaRezerwacji;
	protected:
	private: System::Windows::Forms::ColumnHeader^  pokoj;
	private: System::Windows::Forms::ColumnHeader^  poczatek;
	private: System::Windows::Forms::ColumnHeader^  koniec;
	private: System::Windows::Forms::Button^  anulujbtn;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listaRezerwacji = (gcnew System::Windows::Forms::ListView());
			this->pokoj = (gcnew System::Windows::Forms::ColumnHeader());
			this->poczatek = (gcnew System::Windows::Forms::ColumnHeader());
			this->koniec = (gcnew System::Windows::Forms::ColumnHeader());
			this->anulujbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listaRezerwacji
			// 
			this->listaRezerwacji->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->pokoj, this->poczatek,
					this->koniec
			});
			this->listaRezerwacji->Location = System::Drawing::Point(13, 13);
			this->listaRezerwacji->Name = L"listaRezerwacji";
			this->listaRezerwacji->Size = System::Drawing::Size(479, 306);
			this->listaRezerwacji->TabIndex = 0;
			this->listaRezerwacji->UseCompatibleStateImageBehavior = false;
			this->listaRezerwacji->View = System::Windows::Forms::View::Details;
			// 
			// pokoj
			// 
			this->pokoj->Text = L"Nr pokoju";
			this->pokoj->Width = 82;
			// 
			// poczatek
			// 
			this->poczatek->Text = L"Pocz¹tek rez.";
			this->poczatek->Width = 175;
			// 
			// koniec
			// 
			this->koniec->Text = L"Koniec rez.";
			this->koniec->Width = 192;
			// 
			// anulujbtn
			// 
			this->anulujbtn->Location = System::Drawing::Point(13, 325);
			this->anulujbtn->Name = L"anulujbtn";
			this->anulujbtn->Size = System::Drawing::Size(479, 32);
			this->anulujbtn->TabIndex = 1;
			this->anulujbtn->Text = L"Anuluj wybrane rezerwacje";
			this->anulujbtn->UseVisualStyleBackColor = true;
			this->anulujbtn->Click += gcnew System::EventHandler(this, &AnulujRezerwacje::anulujbtn_Click);
			// 
			// AnulujRezerwacje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(505, 369);
			this->Controls->Add(this->anulujbtn);
			this->Controls->Add(this->listaRezerwacji);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"AnulujRezerwacje";
			this->Text = L"AnulujRezerwacje";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void anulujbtn_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void zaladujRezerwacje();
};
}
