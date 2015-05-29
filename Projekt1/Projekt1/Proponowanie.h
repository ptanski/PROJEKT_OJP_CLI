#pragma once

namespace Projekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Proponowanie
	/// </summary>
	public ref class Proponowanie : public System::Windows::Forms::Form
	{
	public:
		Proponowanie(void)
		{
			InitializeComponent();

			odswiezListePokoi();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Proponowanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  dlaPalacych;
	protected:

	private: System::Windows::Forms::NumericUpDown^  iloscDoroslych;
	private: System::Windows::Forms::NumericUpDown^  iloscDzieci;
	protected:



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::MonthCalendar^  poczatek;
	private: System::Windows::Forms::MonthCalendar^  koniec;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ListView^  listaPokoi;
	private: System::Windows::Forms::ColumnHeader^  numerPokoju;
	private: System::Windows::Forms::ColumnHeader^  pietro;




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
			this->dlaPalacych = (gcnew System::Windows::Forms::CheckBox());
			this->iloscDoroslych = (gcnew System::Windows::Forms::NumericUpDown());
			this->iloscDzieci = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->poczatek = (gcnew System::Windows::Forms::MonthCalendar());
			this->koniec = (gcnew System::Windows::Forms::MonthCalendar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listaPokoi = (gcnew System::Windows::Forms::ListView());
			this->numerPokoju = (gcnew System::Windows::Forms::ColumnHeader());
			this->pietro = (gcnew System::Windows::Forms::ColumnHeader());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iloscDoroslych))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iloscDzieci))->BeginInit();
			this->SuspendLayout();
			// 
			// dlaPalacych
			// 
			this->dlaPalacych->AutoSize = true;
			this->dlaPalacych->Location = System::Drawing::Point(78, 96);
			this->dlaPalacych->Name = L"dlaPalacych";
			this->dlaPalacych->Size = System::Drawing::Size(72, 21);
			this->dlaPalacych->TabIndex = 0;
			this->dlaPalacych->Text = L"Pal¹cy";
			this->dlaPalacych->UseVisualStyleBackColor = true;
			this->dlaPalacych->CheckedChanged += gcnew System::EventHandler(this, &Proponowanie::dlaPalacych_CheckedChanged);
			// 
			// iloscDoroslych
			// 
			this->iloscDoroslych->Location = System::Drawing::Point(78, 123);
			this->iloscDoroslych->Name = L"iloscDoroslych";
			this->iloscDoroslych->Size = System::Drawing::Size(98, 22);
			this->iloscDoroslych->TabIndex = 1;
			this->iloscDoroslych->ValueChanged += gcnew System::EventHandler(this, &Proponowanie::iloscDoroslych_ValueChanged);
			// 
			// iloscDzieci
			// 
			this->iloscDzieci->Location = System::Drawing::Point(78, 151);
			this->iloscDzieci->Name = L"iloscDzieci";
			this->iloscDzieci->Size = System::Drawing::Size(98, 22);
			this->iloscDzieci->TabIndex = 2;
			this->iloscDzieci->ValueChanged += gcnew System::EventHandler(this, &Proponowanie::iloscDzieci_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Doroœli";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Dzieci";
			// 
			// poczatek
			// 
			this->poczatek->Location = System::Drawing::Point(203, 39);
			this->poczatek->MaxSelectionCount = 1;
			this->poczatek->Name = L"poczatek";
			this->poczatek->TabIndex = 6;
			this->poczatek->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Proponowanie::poczatek_DateChanged);
			// 
			// koniec
			// 
			this->koniec->Location = System::Drawing::Point(402, 40);
			this->koniec->Name = L"koniec";
			this->koniec->TabIndex = 7;
			this->koniec->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Proponowanie::koniec_DateChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(203, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Pocz¹tek";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(402, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Koniec";
			// 
			// listaPokoi
			// 
			this->listaPokoi->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->numerPokoju, this->pietro });
			this->listaPokoi->Location = System::Drawing::Point(12, 260);
			this->listaPokoi->Name = L"listaPokoi";
			this->listaPokoi->Size = System::Drawing::Size(588, 253);
			this->listaPokoi->TabIndex = 10;
			this->listaPokoi->UseCompatibleStateImageBehavior = false;
			this->listaPokoi->View = System::Windows::Forms::View::Tile;
			this->listaPokoi->SelectedIndexChanged += gcnew System::EventHandler(this, &Proponowanie::listView1_SelectedIndexChanged);
			// 
			// numerPokoju
			// 
			this->numerPokoju->Text = L"Numer pokoju";
			// 
			// pietro
			// 
			this->pietro->Text = L"Piêtro";
			// 
			// Proponowanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(612, 525);
			this->Controls->Add(this->listaPokoi);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->koniec);
			this->Controls->Add(this->poczatek);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->iloscDzieci);
			this->Controls->Add(this->iloscDoroslych);
			this->Controls->Add(this->dlaPalacych);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Proponowanie";
			this->Text = L"Proponowanie";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iloscDoroslych))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iloscDzieci))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void poczatek_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e);
private: System::Void koniec_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e);
private: System::Void iloscDoroslych_ValueChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void iloscDzieci_ValueChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void dlaPalacych_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void odswiezListePokoi();
};
}
