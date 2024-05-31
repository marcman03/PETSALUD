#pragma once
#include "TxConsultaUsu.h"
#include "TxModUsu.h"
#include "Ordinador.h"

namespace PetSalut {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Resumen de ModCli
	/// </summary>
	public ref class ModCli : public System::Windows::Forms::Form
	{
	public:

		String^ iniUsername;
		String^ iniName;
		String^ iniMail;
		String^ iniPhone;
		String^ iniDate;
		String^ iniPasswd;
	private: System::Windows::Forms::Button^ mostrar_contraseña;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ phoneLabel;
	public:

	public:

	public:
		String^ iniDesc;

		ModCli(void)
		{

			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

			try {

				TxConsultaUsu conU;
				conU.crear();
				conU.executar();

				TxConsultaUsu::Resultat res = conU.obteResultat();

				this->nameBox->Text = res.nom;
				iniName = res.nom;

				this->mailBox->Text = res.correu;
				iniMail = res.correu;

				this->phoneLabel->Text = res.telefon;
				iniPhone = res.telefon;

				this->usernameLabel->Text = res.username;
				iniUsername = res.username;

				this->passwdBox->Text = res.contrasenya;
				iniPasswd = res.contrasenya;

				this->descBox->Text = res.descripcio;
				iniPasswd = res.descripcio;

			}

			catch (Exception^ ex)
			{
				MessageBox::Show("Error: " + ex->Message);
			}

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModCli()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ nameBox;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ mailBox;
	private: System::Windows::Forms::TextBox^ passwdBox;
	private: System::Windows::Forms::TextBox^ descBox;




	private: System::Windows::Forms::MaskedTextBox^ phone;



	private: System::Windows::Forms::Label^ usernameLabel;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ AplicarCambis;

	private: System::Windows::Forms::Button^ modTelf;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModCli::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->mailBox = (gcnew System::Windows::Forms::TextBox());
			this->passwdBox = (gcnew System::Windows::Forms::TextBox());
			this->descBox = (gcnew System::Windows::Forms::TextBox());
			this->phone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->AplicarCambis = (gcnew System::Windows::Forms::Button());
			this->modTelf = (gcnew System::Windows::Forms::Button());
			this->mostrar_contraseña = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->phoneLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(37, 30);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(323, 39);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Modificar Informacio";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(44, 108);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(195, 32);
			this->label2->TabIndex = 48;
			this->label2->Text = L"Nom Complert";
			// 
			// nameBox
			// 
			this->nameBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameBox->Location = System::Drawing::Point(44, 153);
			this->nameBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(311, 30);
			this->nameBox->TabIndex = 49;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(929, 108);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(147, 32);
			this->label9->TabIndex = 56;
			this->label9->Text = L"Descripcio";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(41, 354);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 32);
			this->label4->TabIndex = 52;
			this->label4->Text = L"Telefon";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(511, 108);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(179, 32);
			this->label6->TabIndex = 54;
			this->label6->Text = L"Nom d\'usuari";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(511, 231);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(175, 32);
			this->label7->TabIndex = 55;
			this->label7->Text = L"Contrasenya";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(44, 231);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(233, 32);
			this->label3->TabIndex = 51;
			this->label3->Text = L"Correu Electronic";
			// 
			// mailBox
			// 
			this->mailBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mailBox->Location = System::Drawing::Point(44, 276);
			this->mailBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->mailBox->Name = L"mailBox";
			this->mailBox->Size = System::Drawing::Size(311, 30);
			this->mailBox->TabIndex = 57;
			// 
			// passwdBox
			// 
			this->passwdBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwdBox->Location = System::Drawing::Point(506, 276);
			this->passwdBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->passwdBox->Name = L"passwdBox";
			this->passwdBox->Size = System::Drawing::Size(311, 30);
			this->passwdBox->TabIndex = 58;
			this->passwdBox->UseSystemPasswordChar = true;
			// 
			// descBox
			// 
			this->descBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->descBox->Location = System::Drawing::Point(926, 153);
			this->descBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->descBox->Multiline = true;
			this->descBox->Name = L"descBox";
			this->descBox->Size = System::Drawing::Size(491, 345);
			this->descBox->TabIndex = 59;
			// 
			// phone
			// 
			this->phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone->Location = System::Drawing::Point(49, 399);
			this->phone->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->phone->Mask = L"+00 000 000 000";
			this->phone->Name = L"phone";
			this->phone->Size = System::Drawing::Size(311, 30);
			this->phone->TabIndex = 60;
			this->phone->Visible = false;
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->usernameLabel->Location = System::Drawing::Point(512, 158);
			this->usernameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(102, 25);
			this->usernameLabel->TabIndex = 62;
			this->usernameLabel->Text = L"Username";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(49, 674);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(287, 97);
			this->button2->TabIndex = 65;
			this->button2->Text = L"Tornar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ModCli::button2_Click);
			// 
			// AplicarCambis
			// 
			this->AplicarCambis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AplicarCambis->Location = System::Drawing::Point(1259, 690);
			this->AplicarCambis->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AplicarCambis->Name = L"AplicarCambis";
			this->AplicarCambis->Size = System::Drawing::Size(289, 97);
			this->AplicarCambis->TabIndex = 66;
			this->AplicarCambis->Text = L"Aplicar Cambis";
			this->AplicarCambis->UseVisualStyleBackColor = true;
			this->AplicarCambis->Click += gcnew System::EventHandler(this, &ModCli::AplicarCambis_Click);
			// 
			// modTelf
			// 
			this->modTelf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modTelf->Location = System::Drawing::Point(367, 399);
			this->modTelf->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->modTelf->Name = L"modTelf";
			this->modTelf->Size = System::Drawing::Size(101, 31);
			this->modTelf->TabIndex = 67;
			this->modTelf->Text = L"Modificar";
			this->modTelf->UseVisualStyleBackColor = true;
			this->modTelf->Click += gcnew System::EventHandler(this, &ModCli::modTelf_Click);
			// 
			// mostrar_contraseña
			// 
			this->mostrar_contraseña->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mostrar_contraseña->Location = System::Drawing::Point(506, 312);
			this->mostrar_contraseña->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mostrar_contraseña->Name = L"mostrar_contraseña";
			this->mostrar_contraseña->Size = System::Drawing::Size(101, 31);
			this->mostrar_contraseña->TabIndex = 70;
			this->mostrar_contraseña->Text = L"Mostrar";
			this->mostrar_contraseña->UseVisualStyleBackColor = true;
			this->mostrar_contraseña->Click += gcnew System::EventHandler(this, &ModCli::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-15, -27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1625, 867);
			this->pictureBox1->TabIndex = 71;
			this->pictureBox1->TabStop = false;
			// 
			// phoneLabel
			// 
			this->phoneLabel->AutoSize = true;
			this->phoneLabel->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->phoneLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->phoneLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->phoneLabel->Location = System::Drawing::Point(46, 402);
			this->phoneLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->phoneLabel->Name = L"phoneLabel";
			this->phoneLabel->Size = System::Drawing::Size(64, 20);
			this->phoneLabel->TabIndex = 63;
			this->phoneLabel->Text = L"Telefon";
			// 
			// ModCli
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1579, 814);
			this->Controls->Add(this->mostrar_contraseña);
			this->Controls->Add(this->modTelf);
			this->Controls->Add(this->AplicarCambis);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->phoneLabel);
			this->Controls->Add(this->usernameLabel);
			this->Controls->Add(this->phone);
			this->Controls->Add(this->descBox);
			this->Controls->Add(this->passwdBox);
			this->Controls->Add(this->mailBox);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->nameBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"ModCli";
			this->Text = L"ModCli";
			this->Load += gcnew System::EventHandler(this, &ModCli::ModCli_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void modTelf_Click(System::Object^ sender, System::EventArgs^ e) {

		this->phoneLabel->Visible = !this->phoneLabel->Visible;
		this->phone->Visible = !this->phone->Visible;


	}
	private: System::Void AplicarCambis_Click(System::Object^ sender, System::EventArgs^ e) {

		try {

			if (iniPasswd != this->passwdBox->Text) iniPasswd = this->passwdBox->Text;
			if (iniName != this->nameBox->Text) iniName = this->nameBox->Text;
			if (iniMail != this->mailBox->Text) iniMail = this->mailBox->Text;
			if (iniDesc != this->descBox->Text) iniDesc = this->descBox->Text;

			if (!this->phoneLabel->Visible) iniPhone = this->phone->Text;

			TxModUsu modUsu;
			modUsu.crear(iniUsername, iniPasswd, iniName, iniPhone, iniDate, iniMail, iniDesc, "clinica");
			modUsu.executar();

			Ordinador^ ord = Ordinador::getInstance();
			ord->actualitza(iniUsername, iniName, iniPasswd, "clinica", iniMail, iniDesc, iniPhone);

			// Llamar a la función modificarClinica con los parámetros necesarios

			// Si la modificación se realiza correctamente, puedes mostrar un mensaje de éxito
			MessageBox::Show("La modificación se realizó con éxito.");

			this->Close();

		}

		catch (Exception^ ex) {
			// Capturar cualquier excepción lanzada por la función modificarPropietario
			// y mostrar un mensaje de error al usuario
			MessageBox::Show("Error al aplicar els canvis: " + ex->Message);
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

	}
	private: System::Void ModCli_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	this->passwdBox->UseSystemPasswordChar = !this->passwdBox->UseSystemPasswordChar;

}


};
}
