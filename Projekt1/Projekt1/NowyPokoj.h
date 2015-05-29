#pragma once

namespace Projekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NowyPokoj
	/// </summary>
	public ref class NowyPokoj : public System::Windows::Forms::Form
	{
	public:
		NowyPokoj(void)
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
		~NowyPokoj()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  pokoj;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  dorosli;
	private: System::Windows::Forms::NumericUpDown^  dzieci;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  pietro;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::CheckBox^  palacy;



	protected:

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
			this->pokoj = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dorosli = (gcnew System::Windows::Forms::NumericUpDown());
			this->dzieci = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pietro = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->palacy = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dorosli))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dzieci))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pietro))->BeginInit();
			this->SuspendLayout();
			// 
			// pokoj
			// 
			this->pokoj->Location = System::Drawing::Point(12, 124);
			this->pokoj->Name = L"pokoj";
			this->pokoj->Size = System::Drawing::Size(227, 34);
			this->pokoj->TabIndex = 0;
			this->pokoj->Text = L"Dodaj pokoj";
			this->pokoj->UseVisualStyleBackColor = true;
			this->pokoj->Click += gcnew System::EventHandler(this, &NowyPokoj::pokoj_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Iloœæ doros³ych";
			// 
			// dorosli
			// 
			this->dorosli->Location = System::Drawing::Point(119, 13);
			this->dorosli->Name = L"dorosli";
			this->dorosli->Size = System::Drawing::Size(120, 22);
			this->dorosli->TabIndex = 2;
			// 
			// dzieci
			// 
			this->dzieci->Location = System::Drawing::Point(119, 41);
			this->dzieci->Name = L"dzieci";
			this->dzieci->Size = System::Drawing::Size(120, 22);
			this->dzieci->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Iloœæ dzieci";
			// 
			// pietro
			// 
			this->pietro->Location = System::Drawing::Point(119, 69);
			this->pietro->Name = L"pietro";
			this->pietro->Size = System::Drawing::Size(120, 22);
			this->pietro->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Numer piêtra";
			// 
			// palacy
			// 
			this->palacy->AutoSize = true;
			this->palacy->Location = System::Drawing::Point(119, 97);
			this->palacy->Name = L"palacy";
			this->palacy->Size = System::Drawing::Size(72, 21);
			this->palacy->TabIndex = 9;
			this->palacy->Text = L"Pal¹cy";
			this->palacy->UseVisualStyleBackColor = true;
			// 
			// NowyPokoj
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(248, 166);
			this->Controls->Add(this->palacy);
			this->Controls->Add(this->pietro);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dzieci);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dorosli);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pokoj);
			this->Name = L"NowyPokoj";
			this->Text = L"NowyPokoj";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dorosli))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dzieci))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pietro))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void pokoj_Click(System::Object^  sender, System::EventArgs^  e);
};
}
