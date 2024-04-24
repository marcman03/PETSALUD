#pragma once
#include "TxConsultaProp.h"
#include "TxModProp.h"

namespace PetSalut {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Resumen de ModProp
	/// </summary>
	public ref class ModProp : public System::Windows::Forms::Form
	{
	public:

		String^ iniUsername;
		String^ iniName;
		String^ iniMail;
		String^ iniPhone;
		String^ iniDate;
		String^ iniPasswd;
		String^ iniDesc;

		ModProp(void)
		{

			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//

			try {

				TxConsultaProp conP;
				conP.crear();
				conP.executar();

				TxConsultaProp::Resultat res = conP.obteResultat();

				this->nameBox->Text = res.nom;
				iniName = res.nom;

				this->mailBox->Text = res.correu;
				iniMail = res.correu;

				this->phoneLabel->Text = res.telefon;
				iniPhone = res.telefon;

				this->dateLabel->Text = res.data_naixament;
				iniDate = res.data_naixament;

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
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ModProp()
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
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ mailBox;
	private: System::Windows::Forms::TextBox^ passwdBox;
	private: System::Windows::Forms::TextBox^ descBox;




	private: System::Windows::Forms::MaskedTextBox^ phone;
	private: System::Windows::Forms::MaskedTextBox^ date;


	private: System::Windows::Forms::Label^ usernameLabel;
	private: System::Windows::Forms::Label^ phoneLabel;
	private: System::Windows::Forms::Label^ dateLabel;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ AplicarCambis;

	private: System::Windows::Forms::Button^ modTelf;
	private: System::Windows::Forms::Button^ modDate;



	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->mailBox = (gcnew System::Windows::Forms::TextBox());
			this->passwdBox = (gcnew System::Windows::Forms::TextBox());
			this->descBox = (gcnew System::Windows::Forms::TextBox());
			this->phone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->date = (gcnew System::Windows::Forms::MaskedTextBox());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->phoneLabel = (gcnew System::Windows::Forms::Label());
			this->dateLabel = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->AplicarCambis = (gcnew System::Windows::Forms::Button());
			this->modTelf = (gcnew System::Windows::Forms::Button());
			this->modDate = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(513, 51);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Modificar Informacio";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(31, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(231, 33);
			this->label2->TabIndex = 48;
			this->label2->Text = L"Nom Complert";
			// 
			// nameBox
			// 
			this->nameBox->Location = System::Drawing::Point(37, 124);
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(273, 20);
			this->nameBox->TabIndex = 49;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(711, 288);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(172, 33);
			this->label9->TabIndex = 56;
			this->label9->Text = L"Descripcio";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(31, 288);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 33);
			this->label4->TabIndex = 52;
			this->label4->Text = L"Telefon";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(31, 388);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(257, 33);
			this->label5->TabIndex = 53;
			this->label5->Text = L"Data Naixement";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(711, 88);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(212, 33);
			this->label6->TabIndex = 54;
			this->label6->Text = L"Nom d\'usuari";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(711, 188);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(203, 33);
			this->label7->TabIndex = 55;
			this->label7->Text = L"Contrasenya";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(31, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(279, 33);
			this->label3->TabIndex = 51;
			this->label3->Text = L"Correu Electronic";
			// 
			// mailBox
			// 
			this->mailBox->Location = System::Drawing::Point(37, 224);
			this->mailBox->Name = L"mailBox";
			this->mailBox->Size = System::Drawing::Size(273, 20);
			this->mailBox->TabIndex = 57;
			// 
			// passwdBox
			// 
			this->passwdBox->Location = System::Drawing::Point(717, 224);
			this->passwdBox->Name = L"passwdBox";
			this->passwdBox->Size = System::Drawing::Size(369, 20);
			this->passwdBox->TabIndex = 58;
			// 
			// descBox
			// 
			this->descBox->Location = System::Drawing::Point(717, 324);
			this->descBox->Multiline = true;
			this->descBox->Name = L"descBox";
			this->descBox->Size = System::Drawing::Size(369, 20);
			this->descBox->TabIndex = 59;
			// 
			// phone
			// 
			this->phone->Location = System::Drawing::Point(37, 324);
			this->phone->Mask = L"+00 000 000 000";
			this->phone->Name = L"phone";
			this->phone->Size = System::Drawing::Size(273, 20);
			this->phone->TabIndex = 60;
			this->phone->Visible = false;
			// 
			// date
			// 
			this->date->Location = System::Drawing::Point(37, 424);
			this->date->Mask = L"00/00/0000";
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(273, 20);
			this->date->TabIndex = 61;
			this->date->ValidatingType = System::DateTime::typeid;
			this->date->Visible = false;
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->usernameLabel->Location = System::Drawing::Point(712, 124);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(214, 30);
			this->usernameLabel->TabIndex = 62;
			this->usernameLabel->Text = L"username Aqui";
			// 
			// phoneLabel
			// 
			this->phoneLabel->AutoSize = true;
			this->phoneLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phoneLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->phoneLabel->Location = System::Drawing::Point(32, 324);
			this->phoneLabel->Name = L"phoneLabel";
			this->phoneLabel->Size = System::Drawing::Size(177, 30);
			this->phoneLabel->TabIndex = 63;
			this->phoneLabel->Text = L"telefon Aqui";
			// 
			// dateLabel
			// 
			this->dateLabel->AutoSize = true;
			this->dateLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dateLabel->Location = System::Drawing::Point(26, 424);
			this->dateLabel->Name = L"dateLabel";
			this->dateLabel->Size = System::Drawing::Size(284, 30);
			this->dateLabel->TabIndex = 64;
			this->dateLabel->Text = L"datanaixement Aqui";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(37, 548);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(215, 79);
			this->button2->TabIndex = 65;
			this->button2->Text = L"Tornar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// AplicarCambis
			// 
			this->AplicarCambis->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AplicarCambis->Location = System::Drawing::Point(717, 548);
			this->AplicarCambis->Margin = System::Windows::Forms::Padding(2);
			this->AplicarCambis->Name = L"AplicarCambis";
			this->AplicarCambis->Size = System::Drawing::Size(369, 79);
			this->AplicarCambis->TabIndex = 66;
			this->AplicarCambis->Text = L"Aplicar Cambis";
			this->AplicarCambis->UseVisualStyleBackColor = true;
			this->AplicarCambis->Click += gcnew System::EventHandler(this, &ModProp::AplicarCambis_Click);
			// 
			// modTelf
			// 
			this->modTelf->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modTelf->Location = System::Drawing::Point(315, 324);
			this->modTelf->Margin = System::Windows::Forms::Padding(2);
			this->modTelf->Name = L"modTelf";
			this->modTelf->Size = System::Drawing::Size(121, 20);
			this->modTelf->TabIndex = 67;
			this->modTelf->Text = L"Modificar";
			this->modTelf->UseVisualStyleBackColor = true;
			this->modTelf->Click += gcnew System::EventHandler(this, &ModProp::modTelf_Click);
			// 
			// modDate
			// 
			this->modDate->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modDate->Location = System::Drawing::Point(315, 432);
			this->modDate->Margin = System::Windows::Forms::Padding(2);
			this->modDate->Name = L"modDate";
			this->modDate->Size = System::Drawing::Size(121, 20);
			this->modDate->TabIndex = 68;
			this->modDate->Text = L"Modificar";
			this->modDate->UseVisualStyleBackColor = true;
			this->modDate->Click += gcnew System::EventHandler(this, &ModProp::modData_Click);
			// 
			// ModProp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1184, 661);
			this->Controls->Add(this->modDate);
			this->Controls->Add(this->modTelf);
			this->Controls->Add(this->AplicarCambis);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dateLabel);
			this->Controls->Add(this->phoneLabel);
			this->Controls->Add(this->usernameLabel);
			this->Controls->Add(this->date);
			this->Controls->Add(this->phone);
			this->Controls->Add(this->descBox);
			this->Controls->Add(this->passwdBox);
			this->Controls->Add(this->mailBox);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->nameBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ModProp";
			this->Text = L"ModProp";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void modTelf_Click(System::Object^ sender, System::EventArgs^ e) {

		this->phoneLabel->Visible = !this->phoneLabel->Visible;
		this->phone->Visible = !this->phone->Visible;
		

	}
	private: System::Void modData_Click(System::Object^ sender, System::EventArgs^ e) {
		
		this->dateLabel->Visible = !this->dateLabel->Visible;
		this->date->Visible = !this->date->Visible;

	}
	private: System::Void AplicarCambis_Click(System::Object^ sender, System::EventArgs^ e) {
		
		try {


			if (iniPasswd != this->passwdBox->Text) iniPasswd = this->passwdBox->Text;
			if (iniName != this->nameBox->Text) iniName = this->nameBox->Text;
			if (iniMail != this->mailBox->Text) iniMail = this->mailBox->Text;
			if (iniDesc != this->descBox->Text) iniDesc = this->descBox->Text;


			if (!this->dateLabel->Visible) iniDate = this->date->Text;
			if (!this->phoneLabel->Visible) iniPhone = this->phone->Text;

			TxModProp modProp;
			modProp.crear(iniUsername, iniPasswd, iniName, iniPhone, iniDate, iniMail, iniDesc);
			modProp.executar();
			// Llamar a la funci�n modificarPropietario con los par�metros necesarios

			// Si la modificaci�n se realiza correctamente, puedes mostrar un mensaje de �xito
			MessageBox::Show("La modificaci�n se realiz� con �xito.");
		}
		catch (Exception^ ex) {
			// Capturar cualquier excepci�n lanzada por la funci�n modificarPropietario
			// y mostrar un mensaje de error al usuario
			MessageBox::Show("Error al aplicar los cambios: " + ex->Message);
		}

	}
};
}