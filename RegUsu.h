#pragma once
#include <string>

namespace PetSalut {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RegUsu
	/// </summary>
	public ref class RegUsu : public System::Windows::Forms::Form
	{
	public:
		RegUsu(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		bool mostra1 = false;
	private: System::Windows::Forms::Label^ DiffPasswd;
	private: System::Windows::Forms::Label^ PassLong;

	public:

	public:
		bool mostra2 = false;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RegUsu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ NameBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ UsernameBox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ CorreuEBox;


	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MaskedTextBox^ TelfBox;
	private: System::Windows::Forms::TextBox^ Passwd1;
	private: System::Windows::Forms::TextBox^ Passwd2;





	private: System::Windows::Forms::Button^ Validar;
	private: System::Windows::Forms::Button^ Completar;
	private: System::Windows::Forms::Button^ Mostra1;



	private: System::Windows::Forms::Button^ Mostra2;


	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->NameBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->UsernameBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->CorreuEBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TelfBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Passwd1 = (gcnew System::Windows::Forms::TextBox());
			this->Passwd2 = (gcnew System::Windows::Forms::TextBox());
			this->Validar = (gcnew System::Windows::Forms::Button());
			this->Completar = (gcnew System::Windows::Forms::Button());
			this->Mostra1 = (gcnew System::Windows::Forms::Button());
			this->Mostra2 = (gcnew System::Windows::Forms::Button());
			this->DiffPasswd = (gcnew System::Windows::Forms::Label());
			this->PassLong = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(52, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(496, 49);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Formulari de registre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(52, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(258, 39);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nom Complert";
			// 
			// NameBox
			// 
			this->NameBox->Location = System::Drawing::Point(61, 142);
			this->NameBox->MaxLength = 50;
			this->NameBox->Name = L"NameBox";
			this->NameBox->Size = System::Drawing::Size(251, 20);
			this->NameBox->TabIndex = 3;
			this->NameBox->Text = L"\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(54, 213);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(240, 39);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Nom d\'usuari";
			// 
			// UsernameBox
			// 
			this->UsernameBox->Location = System::Drawing::Point(61, 255);
			this->UsernameBox->MaxLength = 50;
			this->UsernameBox->Name = L"UsernameBox";
			this->UsernameBox->Size = System::Drawing::Size(251, 20);
			this->UsernameBox->TabIndex = 5;
			this->UsernameBox->Text = L"\r\n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(52, 330);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(313, 39);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Correu Electronic";
			// 
			// CorreuEBox
			// 
			this->CorreuEBox->Location = System::Drawing::Point(59, 372);
			this->CorreuEBox->MaxLength = 50;
			this->CorreuEBox->Name = L"CorreuEBox";
			this->CorreuEBox->Size = System::Drawing::Size(251, 20);
			this->CorreuEBox->TabIndex = 7;
			this->CorreuEBox->Text = L"\r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(52, 448);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(141, 39);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Telefon";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(711, 99);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(228, 39);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Contrasenya";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(711, 212);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(428, 39);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Repeteix la Contrasenya";
			// 
			// TelfBox
			// 
			this->TelfBox->InsertKeyMode = System::Windows::Forms::InsertKeyMode::Overwrite;
			this->TelfBox->Location = System::Drawing::Point(59, 490);
			this->TelfBox->Mask = L"+00 000 000 000";
			this->TelfBox->Name = L"TelfBox";
			this->TelfBox->Size = System::Drawing::Size(249, 20);
			this->TelfBox->TabIndex = 16;
			// 
			// Passwd1
			// 
			this->Passwd1->Location = System::Drawing::Point(720, 141);
			this->Passwd1->MaxLength = 45;
			this->Passwd1->Name = L"Passwd1";
			this->Passwd1->Size = System::Drawing::Size(335, 20);
			this->Passwd1->TabIndex = 17;
			this->Passwd1->UseSystemPasswordChar = true;
			// 
			// Passwd2
			// 
			this->Passwd2->Location = System::Drawing::Point(720, 254);
			this->Passwd2->MaxLength = 45;
			this->Passwd2->Name = L"Passwd2";
			this->Passwd2->Size = System::Drawing::Size(335, 20);
			this->Passwd2->TabIndex = 18;
			this->Passwd2->UseSystemPasswordChar = true;
			// 
			// Validar
			// 
			this->Validar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Validar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Validar->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Validar->Location = System::Drawing::Point(718, 371);
			this->Validar->Name = L"Validar";
			this->Validar->Size = System::Drawing::Size(421, 65);
			this->Validar->TabIndex = 19;
			this->Validar->Text = L"VALIDAR LES DADES";
			this->Validar->UseVisualStyleBackColor = false;
			this->Validar->Click += gcnew System::EventHandler(this, &RegUsu::Validar_Click);
			// 
			// Completar
			// 
			this->Completar->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Completar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Completar->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Completar->Location = System::Drawing::Point(718, 444);
			this->Completar->Name = L"Completar";
			this->Completar->Size = System::Drawing::Size(421, 65);
			this->Completar->TabIndex = 20;
			this->Completar->Text = L"REGISTRAR-SE";
			this->Completar->UseVisualStyleBackColor = false;
			this->Completar->Visible = false;
			this->Completar->Click += gcnew System::EventHandler(this, &RegUsu::Completar_Click);
			// 
			// Mostra1
			// 
			this->Mostra1->Location = System::Drawing::Point(1061, 141);
			this->Mostra1->Name = L"Mostra1";
			this->Mostra1->Size = System::Drawing::Size(60, 20);
			this->Mostra1->TabIndex = 21;
			this->Mostra1->Text = L"Mostrar";
			this->Mostra1->UseVisualStyleBackColor = true;
			this->Mostra1->Click += gcnew System::EventHandler(this, &RegUsu::Mostra1_Click);
			// 
			// Mostra2
			// 
			this->Mostra2->Location = System::Drawing::Point(1061, 254);
			this->Mostra2->Name = L"Mostra2";
			this->Mostra2->Size = System::Drawing::Size(60, 20);
			this->Mostra2->TabIndex = 22;
			this->Mostra2->Text = L"Mostrar";
			this->Mostra2->UseVisualStyleBackColor = true;
			this->Mostra2->Click += gcnew System::EventHandler(this, &RegUsu::Mostra2_Click);
			// 
			// DiffPasswd
			// 
			this->DiffPasswd->AutoSize = true;
			this->DiffPasswd->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DiffPasswd->ForeColor = System::Drawing::Color::Red;
			this->DiffPasswd->Location = System::Drawing::Point(750, 330);
			this->DiffPasswd->Name = L"DiffPasswd";
			this->DiffPasswd->Size = System::Drawing::Size(350, 23);
			this->DiffPasswd->TabIndex = 23;
			this->DiffPasswd->Text = L"Les contrasenyes no coincideixen!";
			this->DiffPasswd->Visible = false;
			// 
			// PassLong
			// 
			this->PassLong->AutoSize = true;
			this->PassLong->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PassLong->ForeColor = System::Drawing::Color::Red;
			this->PassLong->Location = System::Drawing::Point(734, 332);
			this->PassLong->Name = L"PassLong";
			this->PassLong->Size = System::Drawing::Size(371, 19);
			this->PassLong->TabIndex = 24;
			this->PassLong->Text = L"La contrasenya ha de tenir 6 caracters o mes!";
			this->PassLong->Visible = false;
			// 
			// RegUsu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1184, 661);
			this->Controls->Add(this->PassLong);
			this->Controls->Add(this->DiffPasswd);
			this->Controls->Add(this->Completar);
			this->Controls->Add(this->Validar);
			this->Controls->Add(this->Mostra2);
			this->Controls->Add(this->Mostra1);
			this->Controls->Add(this->Passwd2);
			this->Controls->Add(this->Passwd1);
			this->Controls->Add(this->TelfBox);
			this->Controls->Add(this->CorreuEBox);
			this->Controls->Add(this->UsernameBox);
			this->Controls->Add(this->NameBox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RegUsu";
			this->Text = L"Registrar Propietari";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Validar_Click(System::Object^ sender, System::EventArgs^ e) {

		//Valida si el nombre de usuario esta disponible
		bool usernameValid = true;
		System::String^ username = UsernameBox->Text;
		//Tratar el username para validar

		System::String^ passwd1 = Passwd1->Text;
		System::String^ passwd2 = Passwd2->Text;

		if (usernameValid && (Passwd1->Text == Passwd2->Text)) {
		
			if (Passwd1->Text->Length < 6) {
			
				PassLong->Visible = true;

			}
			else {
			
				DiffPasswd->Visible = false;
				PassLong->Visible = false;
				Completar->Visible = true;
			
			}
		
		}
		else {
		
			DiffPasswd->Visible = true;
		
		}

	}
	private: System::Void Completar_Click(System::Object^ sender, System::EventArgs^ e) {

		//Registrar info de los campos en la base de datos
		System::String^ nom = NameBox->Text;
		System::String^ username = UsernameBox->Text;
		System::String^ correuE = CorreuEBox->Text;
		System::String^ telefon = Passwd1->Text;

	}
	private: System::Void Mostra1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (mostra1) {

			Mostra1->Text = "Mostrar";
			Passwd1->UseSystemPasswordChar = true;

		}
		else {

			Mostra1->Text = "Ocultar";
			Passwd1->UseSystemPasswordChar = false;

		}

		mostra1 = !mostra1;

	}
	private: System::Void Mostra2_Click(System::Object^ sender, System::EventArgs^ e) {

		if (mostra2) {

			Mostra2->Text = "Mostrar";
			Passwd2->UseSystemPasswordChar = true;

		}
		else {

			Mostra2->Text = "Ocultar";
			Passwd2->UseSystemPasswordChar = false;

		}

		mostra1 = !mostra2;

	}
	};
}