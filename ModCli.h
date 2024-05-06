#pragma once
#include  "TxConsultaUsu.h"
#include "TxModUsu.h"

namespace PetSalut {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ModCli
	/// </summary>
	public ref class ModCli : public System::Windows::Forms::Form
	{
	public:
		String^ iniUsername;
		String^ iniName;
		String^ iniMail;
		String^ iniPhone;
		String^ iniPasswd;
		String^ iniDesc;

		ModCli(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			try {

				TxConsultaUsu conC;
				conC.crear();
				conC.executar();

				TxConsultaUsu::Resultat res = conC.obteResultat();

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
		/// Clean up any resources being used.
		/// </summary>
		~ModCli()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ modTelf;
	private: System::Windows::Forms::Button^ AplicarCambis;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ phoneLabel;
	private: System::Windows::Forms::Label^ usernameLabel;

	private: System::Windows::Forms::MaskedTextBox^ phone;
	private: System::Windows::Forms::TextBox^ descBox;
	private: System::Windows::Forms::TextBox^ passwdBox;
	private: System::Windows::Forms::TextBox^ mailBox;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ nameBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	protected:





















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->modTelf = (gcnew System::Windows::Forms::Button());
			this->AplicarCambis = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->phoneLabel = (gcnew System::Windows::Forms::Label());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->phone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->descBox = (gcnew System::Windows::Forms::TextBox());
			this->passwdBox = (gcnew System::Windows::Forms::TextBox());
			this->mailBox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// modTelf
			// 
			this->modTelf->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modTelf->Location = System::Drawing::Point(299, 309);
			this->modTelf->Margin = System::Windows::Forms::Padding(2);
			this->modTelf->Name = L"modTelf";
			this->modTelf->Size = System::Drawing::Size(121, 20);
			this->modTelf->TabIndex = 88;
			this->modTelf->Text = L"Modificar";
			this->modTelf->UseVisualStyleBackColor = true;
			// 
			// AplicarCambis
			// 
			this->AplicarCambis->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AplicarCambis->Location = System::Drawing::Point(473, 533);
			this->AplicarCambis->Margin = System::Windows::Forms::Padding(2);
			this->AplicarCambis->Name = L"AplicarCambis";
			this->AplicarCambis->Size = System::Drawing::Size(369, 79);
			this->AplicarCambis->TabIndex = 87;
			this->AplicarCambis->Text = L"Aplicar Cambis";
			this->AplicarCambis->UseVisualStyleBackColor = true;
			this->AplicarCambis->Click += gcnew System::EventHandler(this, &ModCli::AplicarCambis_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(47, 533);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(215, 79);
			this->button2->TabIndex = 86;
			this->button2->Text = L"Tornar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// phoneLabel
			// 
			this->phoneLabel->AutoSize = true;
			this->phoneLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phoneLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->phoneLabel->Location = System::Drawing::Point(16, 309);
			this->phoneLabel->Name = L"phoneLabel";
			this->phoneLabel->Size = System::Drawing::Size(177, 30);
			this->phoneLabel->TabIndex = 84;
			this->phoneLabel->Text = L"telefon Aqui";
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->usernameLabel->Location = System::Drawing::Point(468, 109);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(214, 30);
			this->usernameLabel->TabIndex = 83;
			this->usernameLabel->Text = L"username Aqui";
			// 
			// phone
			// 
			this->phone->Location = System::Drawing::Point(21, 309);
			this->phone->Mask = L"+00 000 000 000";
			this->phone->Name = L"phone";
			this->phone->Size = System::Drawing::Size(273, 20);
			this->phone->TabIndex = 81;
			this->phone->Visible = false;
			// 
			// descBox
			// 
			this->descBox->Location = System::Drawing::Point(473, 309);
			this->descBox->Multiline = true;
			this->descBox->Name = L"descBox";
			this->descBox->Size = System::Drawing::Size(369, 20);
			this->descBox->TabIndex = 80;
			// 
			// passwdBox
			// 
			this->passwdBox->Location = System::Drawing::Point(473, 209);
			this->passwdBox->Name = L"passwdBox";
			this->passwdBox->Size = System::Drawing::Size(369, 20);
			this->passwdBox->TabIndex = 79;
			// 
			// mailBox
			// 
			this->mailBox->Location = System::Drawing::Point(21, 209);
			this->mailBox->Name = L"mailBox";
			this->mailBox->Size = System::Drawing::Size(273, 20);
			this->mailBox->TabIndex = 78;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(467, 273);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(172, 33);
			this->label9->TabIndex = 77;
			this->label9->Text = L"Descripcio";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(279, 33);
			this->label3->TabIndex = 72;
			this->label3->Text = L"Correu Electronic";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(467, 173);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(203, 33);
			this->label7->TabIndex = 76;
			this->label7->Text = L"Contrasenya";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(467, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(212, 33);
			this->label6->TabIndex = 75;
			this->label6->Text = L"Nom d\'usuari";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(15, 273);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 33);
			this->label4->TabIndex = 73;
			this->label4->Text = L"Telefon";
			// 
			// nameBox
			// 
			this->nameBox->Location = System::Drawing::Point(21, 109);
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(273, 20);
			this->nameBox->TabIndex = 71;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(231, 33);
			this->label2->TabIndex = 70;
			this->label2->Text = L"Nom Complert";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(513, 51);
			this->label1->TabIndex = 69;
			this->label1->Text = L"Modificar Informacio";
			// 
			// ModCli
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(874, 640);
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
			this->Name = L"ModCli";
			this->Text = L"ModCli";
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

			TxModUsu modCli;
			modCli.crear(iniUsername, iniPasswd, iniName, iniPhone,"", iniMail, iniDesc, "clinica");
			modCli.executar();
			// Llamar a la función modificarPropietario con los parámetros necesarios

			// Si la modificación se realiza correctamente, puedes mostrar un mensaje de éxito
			MessageBox::Show("La modificación se realizó con éxito.");
		}
		catch (Exception^ ex) {
			// Capturar cualquier excepci�n lanzada por la funci�n modificarPropietario
			// y mostrar un mensaje de error al usuario
			MessageBox::Show("Error al aplicar los cambios: " + ex->Message);
		}
	}
	};
}