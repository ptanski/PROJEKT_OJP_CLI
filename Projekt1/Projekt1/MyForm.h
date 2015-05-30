#pragma once

namespace Projekt1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			odswiezPokoje();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:




	private: System::Windows::Forms::ToolStripMenuItem^  pokojeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zaproponujPok�jToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  edytujList�PokoiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dodajPok�jToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  usu�Pok�jToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  rezerwacjeToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  nowaRezerwacjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  anulujRezerwacj�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oProgramieToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	public: System::Windows::Forms::ListView^  listaPokoi;
	private:

	private:


	private: System::Windows::Forms::ColumnHeader^  nrPokoju;
	private: System::Windows::Forms::ColumnHeader^  zarezerwowany;
	private: System::Windows::Forms::ColumnHeader^  najblizszaRezerwacja;
	private: System::Windows::Forms::ToolStripMenuItem^  zaproponujPok�jToolStripMenuItem1;





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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->pokojeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zaproponujPok�jToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edytujList�PokoiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dodajPok�jToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usu�Pok�jToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rezerwacjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zaproponujPok�jToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nowaRezerwacjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->anulujRezerwacj�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->listaPokoi = (gcnew System::Windows::Forms::ListView());
			this->nrPokoju = (gcnew System::Windows::Forms::ColumnHeader());
			this->zarezerwowany = (gcnew System::Windows::Forms::ColumnHeader());
			this->najblizszaRezerwacja = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->pokojeToolStripMenuItem,
					this->rezerwacjeToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(921, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// pokojeToolStripMenuItem
			// 
			this->pokojeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->zaproponujPok�jToolStripMenuItem,
					this->edytujList�PokoiToolStripMenuItem
			});
			this->pokojeToolStripMenuItem->Name = L"pokojeToolStripMenuItem";
			this->pokojeToolStripMenuItem->Size = System::Drawing::Size(66, 24);
			this->pokojeToolStripMenuItem->Text = L"Pokoje";
			// 
			// zaproponujPok�jToolStripMenuItem
			// 
			this->zaproponujPok�jToolStripMenuItem->Name = L"zaproponujPok�jToolStripMenuItem";
			this->zaproponujPok�jToolStripMenuItem->Size = System::Drawing::Size(198, 24);
			this->zaproponujPok�jToolStripMenuItem->Text = L"Zaproponuj pok�j";
			this->zaproponujPok�jToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zaproponujPok�jToolStripMenuItem_Click);
			// 
			// edytujList�PokoiToolStripMenuItem
			// 
			this->edytujList�PokoiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->dodajPok�jToolStripMenuItem,
					this->usu�Pok�jToolStripMenuItem
			});
			this->edytujList�PokoiToolStripMenuItem->Name = L"edytujList�PokoiToolStripMenuItem";
			this->edytujList�PokoiToolStripMenuItem->Size = System::Drawing::Size(198, 24);
			this->edytujList�PokoiToolStripMenuItem->Text = L"Edytuj list� pokoi";
			// 
			// dodajPok�jToolStripMenuItem
			// 
			this->dodajPok�jToolStripMenuItem->Name = L"dodajPok�jToolStripMenuItem";
			this->dodajPok�jToolStripMenuItem->Size = System::Drawing::Size(161, 24);
			this->dodajPok�jToolStripMenuItem->Text = L"Dodaj pok�j";
			this->dodajPok�jToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::dodajPok�jToolStripMenuItem_Click);
			// 
			// usu�Pok�jToolStripMenuItem
			// 
			this->usu�Pok�jToolStripMenuItem->Name = L"usu�Pok�jToolStripMenuItem";
			this->usu�Pok�jToolStripMenuItem->Size = System::Drawing::Size(161, 24);
			this->usu�Pok�jToolStripMenuItem->Text = L"Usu� pok�j";
			this->usu�Pok�jToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::usu�Pok�jToolStripMenuItem_Click);
			// 
			// rezerwacjeToolStripMenuItem
			// 
			this->rezerwacjeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->zaproponujPok�jToolStripMenuItem1,
					this->nowaRezerwacjaToolStripMenuItem, this->anulujRezerwacj�ToolStripMenuItem
			});
			this->rezerwacjeToolStripMenuItem->Name = L"rezerwacjeToolStripMenuItem";
			this->rezerwacjeToolStripMenuItem->Size = System::Drawing::Size(96, 24);
			this->rezerwacjeToolStripMenuItem->Text = L"Rezerwacje";
			// 
			// zaproponujPok�jToolStripMenuItem1
			// 
			this->zaproponujPok�jToolStripMenuItem1->Name = L"zaproponujPok�jToolStripMenuItem1";
			this->zaproponujPok�jToolStripMenuItem1->Size = System::Drawing::Size(198, 24);
			this->zaproponujPok�jToolStripMenuItem1->Text = L"Zaproponuj pok�j";
			this->zaproponujPok�jToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::zaproponujPok�jToolStripMenuItem1_Click);
			// 
			// nowaRezerwacjaToolStripMenuItem
			// 
			this->nowaRezerwacjaToolStripMenuItem->Name = L"nowaRezerwacjaToolStripMenuItem";
			this->nowaRezerwacjaToolStripMenuItem->Size = System::Drawing::Size(198, 24);
			this->nowaRezerwacjaToolStripMenuItem->Text = L"Nowa rezerwacja";
			this->nowaRezerwacjaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::nowaRezerwacjaToolStripMenuItem_Click);
			// 
			// anulujRezerwacj�ToolStripMenuItem
			// 
			this->anulujRezerwacj�ToolStripMenuItem->Name = L"anulujRezerwacj�ToolStripMenuItem";
			this->anulujRezerwacj�ToolStripMenuItem->Size = System::Drawing::Size(198, 24);
			this->anulujRezerwacj�ToolStripMenuItem->Text = L"Anuluj rezerwacj�";
			this->anulujRezerwacj�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::anulujRezerwacj�ToolStripMenuItem_Click);
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->oProgramieToolStripMenuItem });
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			// 
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(163, 24);
			this->oProgramieToolStripMenuItem->Text = L"O programie";
			this->oProgramieToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::oProgramieToolStripMenuItem_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Location = System::Drawing::Point(0, 509);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(921, 24);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// listaPokoi
			// 
			this->listaPokoi->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->nrPokoju, this->zarezerwowany,
					this->najblizszaRezerwacja
			});
			this->listaPokoi->Location = System::Drawing::Point(12, 31);
			this->listaPokoi->Name = L"listaPokoi";
			this->listaPokoi->Size = System::Drawing::Size(897, 477);
			this->listaPokoi->TabIndex = 3;
			this->listaPokoi->UseCompatibleStateImageBehavior = false;
			this->listaPokoi->View = System::Windows::Forms::View::Tile;
			this->listaPokoi->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listView1_SelectedIndexChanged);
			this->listaPokoi->DoubleClick += gcnew System::EventHandler(this, &MyForm::listaPokoi_DoubleClick);
			// 
			// nrPokoju
			// 
			this->nrPokoju->Text = L"Numer pokoju";
			this->nrPokoju->Width = 121;
			// 
			// zarezerwowany
			// 
			this->zarezerwowany->Text = L"Zarezerwowany";
			this->zarezerwowany->Width = 124;
			// 
			// najblizszaRezerwacja
			// 
			this->najblizszaRezerwacja->Text = L"Najbli�sza rezerwacja";
			this->najblizszaRezerwacja->Width = 151;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(921, 533);
			this->Controls->Add(this->listaPokoi);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"Hotelarnia";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) ;

	private: System::Void zaproponujPok�jToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) ;
	private: System::Void oProgramieToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void nowaRezerwacjaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void anulujRezerwacj�ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void dodajPok�jToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void usu�Pok�jToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void zaproponujPok�jToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void listaPokoi_DoubleClick(System::Object^  sender, System::EventArgs^  e);

	public: System::Void odswiezPokoje();
};

}
