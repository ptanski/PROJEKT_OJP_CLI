#pragma once

namespace Projekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UsunPokoj
	/// </summary>
	public ref class UsunPokoj : public System::Windows::Forms::Form
	{
	public:
		UsunPokoj(void)
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
		~UsunPokoj()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listaPokoi;
	protected:
	private: System::Windows::Forms::ColumnHeader^  nrPokoju;
	private: System::Windows::Forms::Button^  usun;

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
			this->listaPokoi = (gcnew System::Windows::Forms::ListView());
			this->usun = (gcnew System::Windows::Forms::Button());
			this->nrPokoju = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listaPokoi
			// 
			this->listaPokoi->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->nrPokoju });
			this->listaPokoi->Location = System::Drawing::Point(13, 13);
			this->listaPokoi->Name = L"listaPokoi";
			this->listaPokoi->Size = System::Drawing::Size(394, 200);
			this->listaPokoi->TabIndex = 0;
			this->listaPokoi->UseCompatibleStateImageBehavior = false;
			this->listaPokoi->View = System::Windows::Forms::View::Tile;
			// 
			// usun
			// 
			this->usun->Location = System::Drawing::Point(13, 220);
			this->usun->Name = L"usun";
			this->usun->Size = System::Drawing::Size(394, 32);
			this->usun->TabIndex = 1;
			this->usun->Text = L"Usun wybrane pokoje";
			this->usun->UseVisualStyleBackColor = true;
			this->usun->Click += gcnew System::EventHandler(this, &UsunPokoj::usun_Click);
			// 
			// nrPokoju
			// 
			this->nrPokoju->Text = L"Numer pokoju";
			// 
			// UsunPokoj
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(419, 264);
			this->Controls->Add(this->usun);
			this->Controls->Add(this->listaPokoi);
			this->Name = L"UsunPokoj";
			this->Text = L"UsunPokoj";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void usun_Click(System::Object^  sender, System::EventArgs^  e);

	};
}
