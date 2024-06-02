#pragma once
#include "TxRegistraUsu.h"
#include "MenuProp.h"
#include "PasswordEncrypt.h"

namespace PetSalut {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RegU
	/// </summary>
	public ref class RegUsu : public System::Windows::Forms::Form
	{
	public:
		RegUsu(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		bool mostra1 = false;
		String^ tipusSelected = "Propietari";
	private: System::Windows::Forms::Label^ PassLong;
	private: System::Windows::Forms::Label^ DiffPasswd;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ descripcio;
	private: System::Windows::Forms::Label^ tipusLabel;
	private: System::Windows::Forms::RadioButton^ radioPropietariButton;
	private: System::Windows::Forms::RadioButton^ radioClinicaButton;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;


	public:

	public:
		bool mostra2 = false;


	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::TextBox^ name;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ mail;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::MaskedTextBox^ phone;
	private: System::Windows::Forms::MaskedTextBox^ date;
	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::TextBox^ passwd1;
	private: System::Windows::Forms::TextBox^ passwd2;
	private: System::Windows::Forms::Button^ valid_button;
	private: System::Windows::Forms::Button^ reg_button;
	private: System::Windows::Forms::Button^ show1;
	private: System::Windows::Forms::Button^ show2;

	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegUsu::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->mail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->phone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->date = (gcnew System::Windows::Forms::MaskedTextBox());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->passwd1 = (gcnew System::Windows::Forms::TextBox());
			this->passwd2 = (gcnew System::Windows::Forms::TextBox());
			this->valid_button = (gcnew System::Windows::Forms::Button());
			this->reg_button = (gcnew System::Windows::Forms::Button());
			this->show1 = (gcnew System::Windows::Forms::Button());
			this->show2 = (gcnew System::Windows::Forms::Button());
			this->PassLong = (gcnew System::Windows::Forms::Label());
			this->DiffPasswd = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->descripcio = (gcnew System::Windows::Forms::TextBox());
			this->tipusLabel = (gcnew System::Windows::Forms::Label());
			this->radioPropietariButton = (gcnew System::Windows::Forms::RadioButton());
			this->radioClinicaButton = (gcnew System::Windows::Forms::RadioButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(32, 27);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(402, 51);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Formulari de registre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(35, 216);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nom Complert";
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->name->Location = System::Drawing::Point(39, 252);
			this->name->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->name->MaxLength = 255;
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(368, 26);
			this->name->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(37, 315);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(170, 26);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Correu Electronic";
			this->label3->Click += gcnew System::EventHandler(this, &RegUsu::label3_Click);
			// 
			// mail
			// 
			this->mail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->mail->Location = System::Drawing::Point(42, 351);
			this->mail->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->mail->Name = L"mail";
			this->mail->Size = System::Drawing::Size(369, 26);
			this->mail->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(34, 411);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 26);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Telefon";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(34, 512);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(161, 26);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Data Naixement";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(631, 119);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 26);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Nom d\'usuari";
			this->label6->Click += gcnew System::EventHandler(this, &RegUsu::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(631, 216);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(128, 26);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Contrasenya";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(632, 315);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(220, 26);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Verifica la contrasenya";
			// 
			// phone
			// 
			this->phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->phone->Location = System::Drawing::Point(40, 441);
			this->phone->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->phone->Mask = L"+00 000 000 000";
			this->phone->Name = L"phone";
			this->phone->Size = System::Drawing::Size(368, 26);
			this->phone->TabIndex = 20;
			// 
			// date
			// 
			this->date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->date->Location = System::Drawing::Point(42, 542);
			this->date->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->date->Mask = L"00/00/0000";
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(366, 26);
			this->date->TabIndex = 21;
			this->date->ValidatingType = System::DateTime::typeid;
			// 
			// username
			// 
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->username->Location = System::Drawing::Point(636, 149);
			this->username->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(367, 26);
			this->username->TabIndex = 22;
			// 
			// passwd1
			// 
			this->passwd1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->passwd1->Location = System::Drawing::Point(636, 246);
			this->passwd1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->passwd1->Name = L"passwd1";
			this->passwd1->Size = System::Drawing::Size(367, 26);
			this->passwd1->TabIndex = 23;
			this->passwd1->UseSystemPasswordChar = true;
			// 
			// passwd2
			// 
			this->passwd2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->passwd2->Location = System::Drawing::Point(637, 345);
			this->passwd2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->passwd2->Name = L"passwd2";
			this->passwd2->Size = System::Drawing::Size(366, 26);
			this->passwd2->TabIndex = 24;
			this->passwd2->UseSystemPasswordChar = true;
			// 
			// valid_button
			// 
			this->valid_button->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->valid_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->valid_button->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->valid_button->Location = System::Drawing::Point(637, 527);
			this->valid_button->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->valid_button->Name = L"valid_button";
			this->valid_button->Size = System::Drawing::Size(228, 41);
			this->valid_button->TabIndex = 25;
			this->valid_button->Text = L"VALIDAR INFORMACIO";
			this->valid_button->UseVisualStyleBackColor = false;
			this->valid_button->Click += gcnew System::EventHandler(this, &RegUsu::valid_button_Click);
			// 
			// reg_button
			// 
			this->reg_button->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->reg_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reg_button->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reg_button->Location = System::Drawing::Point(876, 527);
			this->reg_button->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->reg_button->Name = L"reg_button";
			this->reg_button->Size = System::Drawing::Size(230, 41);
			this->reg_button->TabIndex = 26;
			this->reg_button->Text = L"REGISTRAR-SE";
			this->reg_button->UseVisualStyleBackColor = false;
			this->reg_button->Click += gcnew System::EventHandler(this, &RegUsu::reg_button_Click);
			// 
			// show1
			// 
			this->show1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->show1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->show1->Font = (gcnew System::Drawing::Font(L"Yu Gothic Light", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->show1->Location = System::Drawing::Point(1011, 246);
			this->show1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->show1->Name = L"show1";
			this->show1->Size = System::Drawing::Size(111, 26);
			this->show1->TabIndex = 27;
			this->show1->Text = L"Mostrar";
			this->show1->UseVisualStyleBackColor = false;
			this->show1->Click += gcnew System::EventHandler(this, &RegUsu::show1_Click);
			// 
			// show2
			// 
			this->show2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->show2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->show2->Font = (gcnew System::Drawing::Font(L"Yu Gothic Light", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->show2->Location = System::Drawing::Point(1011, 345);
			this->show2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->show2->Name = L"show2";
			this->show2->Size = System::Drawing::Size(111, 26);
			this->show2->TabIndex = 28;
			this->show2->Text = L"Mostrar";
			this->show2->UseVisualStyleBackColor = false;
			this->show2->Click += gcnew System::EventHandler(this, &RegUsu::show2_Click);
			// 
			// PassLong
			// 
			this->PassLong->AutoSize = true;
			this->PassLong->BackColor = System::Drawing::Color::Transparent;
			this->PassLong->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PassLong->ForeColor = System::Drawing::Color::Red;
			this->PassLong->Location = System::Drawing::Point(632, 276);
			this->PassLong->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PassLong->Name = L"PassLong";
			this->PassLong->Size = System::Drawing::Size(390, 22);
			this->PassLong->TabIndex = 29;
			this->PassLong->Text = L"La contrasenya ha de tenir 6 caracters o mes!";
			this->PassLong->Visible = false;
			// 
			// DiffPasswd
			// 
			this->DiffPasswd->AutoSize = true;
			this->DiffPasswd->BackColor = System::Drawing::Color::Transparent;
			this->DiffPasswd->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DiffPasswd->ForeColor = System::Drawing::Color::Red;
			this->DiffPasswd->Location = System::Drawing::Point(633, 375);
			this->DiffPasswd->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DiffPasswd->Name = L"DiffPasswd";
			this->DiffPasswd->Size = System::Drawing::Size(288, 22);
			this->DiffPasswd->TabIndex = 30;
			this->DiffPasswd->Text = L"La contrasenyes no coincideixen!";
			this->DiffPasswd->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(631, 411);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 26);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Descripcio";
			// 
			// descripcio
			// 
			this->descripcio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->descripcio->Location = System::Drawing::Point(637, 441);
			this->descripcio->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->descripcio->Name = L"descripcio";
			this->descripcio->Size = System::Drawing::Size(366, 26);
			this->descripcio->TabIndex = 32;
			// 
			// tipusLabel
			// 
			this->tipusLabel->AutoSize = true;
			this->tipusLabel->BackColor = System::Drawing::Color::Transparent;
			this->tipusLabel->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tipusLabel->Location = System::Drawing::Point(34, 119);
			this->tipusLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->tipusLabel->Name = L"tipusLabel";
			this->tipusLabel->Size = System::Drawing::Size(146, 26);
			this->tipusLabel->TabIndex = 33;
			this->tipusLabel->Text = L"Tipus d\'Usuari";
			// 
			// radioPropietariButton
			// 
			this->radioPropietariButton->AutoSize = true;
			this->radioPropietariButton->BackColor = System::Drawing::Color::Transparent;
			this->radioPropietariButton->Checked = true;
			this->radioPropietariButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioPropietariButton->Location = System::Drawing::Point(40, 163);
			this->radioPropietariButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioPropietariButton->Name = L"radioPropietariButton";
			this->radioPropietariButton->Size = System::Drawing::Size(106, 26);
			this->radioPropietariButton->TabIndex = 34;
			this->radioPropietariButton->TabStop = true;
			this->radioPropietariButton->Text = L"Propietari";
			this->radioPropietariButton->UseVisualStyleBackColor = false;
			// 
			// radioClinicaButton
			// 
			this->radioClinicaButton->AutoSize = true;
			this->radioClinicaButton->BackColor = System::Drawing::Color::Transparent;
			this->radioClinicaButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioClinicaButton->Location = System::Drawing::Point(194, 163);
			this->radioClinicaButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->radioClinicaButton->Name = L"radioClinicaButton";
			this->radioClinicaButton->Size = System::Drawing::Size(83, 26);
			this->radioClinicaButton->TabIndex = 35;
			this->radioClinicaButton->Text = L"Clinica";
			this->radioClinicaButton->UseVisualStyleBackColor = false;
			this->radioClinicaButton->CheckedChanged += gcnew System::EventHandler(this, &RegUsu::radioClinicaButton_CheckedChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(414, 252);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(15, 17);
			this->label10->TabIndex = 36;
			this->label10->Text = L"*";
			this->label10->Click += gcnew System::EventHandler(this, &RegUsu::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(419, 350);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(15, 17);
			this->label11->TabIndex = 37;
			this->label11->Text = L"*";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(419, 441);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(15, 17);
			this->label12->TabIndex = 38;
			this->label12->Text = L"*";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(419, 539);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(15, 17);
			this->label13->TabIndex = 39;
			this->label13->Text = L"*";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(1010, 149);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(15, 17);
			this->label14->TabIndex = 40;
			this->label14->Text = L"*";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(1129, 246);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(15, 17);
			this->label15->TabIndex = 41;
			this->label15->Text = L"*";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(1129, 345);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(15, 17);
			this->label16->TabIndex = 42;
			this->label16->Text = L"*";
			// 
			// RegUsu
			// 
			this->AccessibleName = L"";
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 653);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->radioClinicaButton);
			this->Controls->Add(this->radioPropietariButton);
			this->Controls->Add(this->tipusLabel);
			this->Controls->Add(this->descripcio);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->DiffPasswd);
			this->Controls->Add(this->PassLong);
			this->Controls->Add(this->show2);
			this->Controls->Add(this->show1);
			this->Controls->Add(this->reg_button);
			this->Controls->Add(this->valid_button);
			this->Controls->Add(this->passwd2);
			this->Controls->Add(this->passwd1);
			this->Controls->Add(this->username);
			this->Controls->Add(this->date);
			this->Controls->Add(this->phone);
			this->Controls->Add(this->mail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"RegUsu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PETSALUT";
			this->Load += gcnew System::EventHandler(this, &RegUsu::RegUsu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void valid_button_Click(System::Object^ sender, System::EventArgs^ e) {

		//Valida si el nombre de usuario esta disponible
		bool usernameValid = true;
		System::String^ usernameText = username->Text;
		//Tratar el username para validar

		System::String^ passwd1text = passwd1->Text;
		System::String^ passwd2text = passwd2->Text;

		if (usernameValid && (passwd1->Text == passwd2->Text)) {

			if (passwd1->Text->Length < 6) {

				PassLong->Visible = true;

			}
			else {

				DiffPasswd->Visible = false;
				PassLong->Visible = false;
				reg_button->Visible = true;

			}

		}
		else {

			DiffPasswd->Visible = true;

		}

	}

	private: System::Void reg_button_Click(System::Object^ sender, System::EventArgs^ e) {

		try {

			String^ usernameS = username->Text;
			String^ nomComplertS = name->Text;
			String^ contrasenyaS = PasswordEncrypt::Encrypt(passwd1->Text);
			String^ telefonS = phone->Text;
			String^ tipusS = tipusSelected;
			String^ correuElectronicS = mail->Text;
			String^ dataNaixementS = date->Text;
			String^ descripcioS = descripcio->Text;



			TxRegistraUsu regUsu;
			regUsu.crear(usernameS, contrasenyaS, nomComplertS, telefonS, tipusS, correuElectronicS, descripcioS, dataNaixementS);
			regUsu.executar();

			PetSalut::MenuProp^ menuProp = gcnew PetSalut::MenuProp();

			this->Visible = false;
			this->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error pantalla usuari: " + ex->Message);
		}

	}
	private: System::Void radioClinicaButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioClinicaButton->Checked) {
			this->label5->Visible = false;
			this->date->Visible = false;
			this->radioPropietariButton->Checked = false;
			this->tipusSelected = "Clinica";
		}
		else {
			this->label5->Visible = true;
			this->date->Visible = true;
			this->radioPropietariButton->Checked = true;
			this->tipusSelected = "Propietari";
		}
	}
private: System::Void show2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->passwd2->UseSystemPasswordChar = !this->passwd2->UseSystemPasswordChar;

}
private: System::Void show1_Click(System::Object^ sender, System::EventArgs^ e) {

	this->passwd1->UseSystemPasswordChar = !this->passwd1->UseSystemPasswordChar;

}
private: System::Void RegUsu_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}