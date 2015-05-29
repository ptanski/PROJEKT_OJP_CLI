#pragma once

namespace Projekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NowaRezerwacja
	/// </summary>
	public ref class NowaRezerwacja : public System::Windows::Forms::Form
	{
	public:
		NowaRezerwacja(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NowaRezerwacja()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label4;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MonthCalendar^  koniec;
	private: System::Windows::Forms::MonthCalendar^  poczatek;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  iloscDzieci;
	private: System::Windows::Forms::NumericUpDown^  iloscDoroslych;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  imie;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  nazwisko;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  telefon;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  adres;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  zyczenie;
	private: System::Windows::Forms::Button^  anuluj;

	private: System::Windows::Forms::Button^  zarezerwuj;




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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->koniec = (gcnew System::Windows::Forms::MonthCalendar());
			this->poczatek = (gcnew System::Windows::Forms::MonthCalendar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->iloscDzieci = (gcnew System::Windows::Forms::NumericUpDown());
			this->iloscDoroslych = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->imie = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->nazwisko = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->telefon = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->adres = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->zyczenie = (gcnew System::Windows::Forms::TextBox());
			this->anuluj = (gcnew System::Windows::Forms::Button());
			this->zarezerwuj = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iloscDzieci))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iloscDoroslych))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(384, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 17);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Koniec";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(185, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 17);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Pocz¹tek";
			// 
			// koniec
			// 
			this->koniec->Location = System::Drawing::Point(384, 41);
			this->koniec->Name = L"koniec";
			this->koniec->TabIndex = 16;
			// 
			// poczatek
			// 
			this->poczatek->Location = System::Drawing::Point(185, 40);
			this->poczatek->MaxSelectionCount = 1;
			this->poczatek->Name = L"poczatek";
			this->poczatek->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Dzieci";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 17);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Doroœli";
			// 
			// iloscDzieci
			// 
			this->iloscDzieci->Location = System::Drawing::Point(65, 146);
			this->iloscDzieci->Name = L"iloscDzieci";
			this->iloscDzieci->Size = System::Drawing::Size(98, 22);
			this->iloscDzieci->TabIndex = 12;
			// 
			// iloscDoroslych
			// 
			this->iloscDoroslych->Location = System::Drawing::Point(65, 118);
			this->iloscDoroslych->Name = L"iloscDoroslych";
			this->iloscDoroslych->Size = System::Drawing::Size(98, 22);
			this->iloscDoroslych->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 261);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 17);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Wybrany pokój";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(122, 261);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 20;
			// 
			// imie
			// 
			this->imie->Location = System::Drawing::Point(122, 291);
			this->imie->Name = L"imie";
			this->imie->Size = System::Drawing::Size(121, 22);
			this->imie->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 291);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 17);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Imiê";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 319);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 17);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Nazwisko";
			// 
			// nazwisko
			// 
			this->nazwisko->Location = System::Drawing::Point(122, 319);
			this->nazwisko->Name = L"nazwisko";
			this->nazwisko->Size = System::Drawing::Size(121, 22);
			this->nazwisko->TabIndex = 23;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(13, 347);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 17);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Telefon kom.";
			// 
			// telefon
			// 
			this->telefon->Location = System::Drawing::Point(122, 347);
			this->telefon->Name = L"telefon";
			this->telefon->Size = System::Drawing::Size(121, 22);
			this->telefon->TabIndex = 25;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 375);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 17);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Adres e-mail";
			// 
			// email
			// 
			this->email->Location = System::Drawing::Point(122, 375);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(121, 22);
			this->email->TabIndex = 27;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(13, 403);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(79, 17);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Adres zam.";
			// 
			// adres
			// 
			this->adres->Location = System::Drawing::Point(122, 403);
			this->adres->Name = L"adres";
			this->adres->Size = System::Drawing::Size(255, 22);
			this->adres->TabIndex = 29;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(13, 431);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(106, 17);
			this->label11->TabIndex = 32;
			this->label11->Text = L"Specjalne ¿ycz.";
			// 
			// zyczenie
			// 
			this->zyczenie->Location = System::Drawing::Point(122, 431);
			this->zyczenie->Name = L"zyczenie";
			this->zyczenie->Size = System::Drawing::Size(255, 22);
			this->zyczenie->TabIndex = 31;
			// 
			// anuluj
			// 
			this->anuluj->Location = System::Drawing::Point(477, 369);
			this->anuluj->Name = L"anuluj";
			this->anuluj->Size = System::Drawing::Size(75, 23);
			this->anuluj->TabIndex = 33;
			this->anuluj->Text = L"Anuluj";
			this->anuluj->UseVisualStyleBackColor = true;
			this->anuluj->Click += gcnew System::EventHandler(this, &NowaRezerwacja::anuluj_Click);
			// 
			// zarezerwuj
			// 
			this->zarezerwuj->Location = System::Drawing::Point(453, 403);
			this->zarezerwuj->Name = L"zarezerwuj";
			this->zarezerwuj->Size = System::Drawing::Size(123, 53);
			this->zarezerwuj->TabIndex = 34;
			this->zarezerwuj->Text = L"Zarezerwuj";
			this->zarezerwuj->UseVisualStyleBackColor = true;
			this->zarezerwuj->Click += gcnew System::EventHandler(this, &NowaRezerwacja::zarezerwuj_Click);
			// 
			// NowaRezerwacja
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(590, 469);
			this->Controls->Add(this->zarezerwuj);
			this->Controls->Add(this->anuluj);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->zyczenie);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->adres);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->email);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->telefon);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->nazwisko);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->imie);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->koniec);
			this->Controls->Add(this->poczatek);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->iloscDzieci);
			this->Controls->Add(this->iloscDoroslych);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"NowaRezerwacja";
			this->Text = L"Nowa rezerwacja";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iloscDzieci))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iloscDoroslych))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void anuluj_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void zarezerwuj_Click(System::Object^  sender, System::EventArgs^  e);
};
}
