#pragma once
#include "TxConsultaUsu.h"
#include "ModCli.h"
#include "ConsultaCentresForm.h"
namespace PetSalut {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de InfoCli
	/// </summary>
	public ref class InfoCli : public System::Windows::Forms::Form
	{
	public:
		InfoCli(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c?digo de constructor aqu?
			//

			try {

				TxConsultaUsu conU;
				conU.crear();
				conU.executar();

				TxConsultaUsu::Resultat res = conU.obteResultat();

				this->nameLabel->Text = res.nom;
				this->mailLabel->Text = res.correu;
				this->phoneLabel->Text = res.telefon;
				this->usernameLabel->Text = res.username;
				this->passwordLabel->Text = res.contrasenya;
				this->descripcio->Text = res.descripcio;

			}

			catch (Exception^ ex)
			{
				MessageBox::Show("Error: " + ex->Message);
			}

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est?n usando.
		/// </summary>
		~InfoCli()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label9;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ nameLabel;
	private: System::Windows::Forms::Label^ mailLabel;
	private: System::Windows::Forms::Label^ phoneLabel;

	private: System::Windows::Forms::Label^ usernameLabel;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::Label^ descripcio;
	private: System::Windows::Forms::Button^ mostraCentresButton;

	private: System::Windows::Forms::Button^ modificarButton;
	private: System::Windows::Forms::Button^ tornaButton;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Variable del dise?ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?todo necesario para admitir el Dise?ador. No se puede modificar
		/// el contenido de este m?todo con el editor de c?digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InfoCli::typeid));
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nameLabel = (gcnew System::Windows::Forms::Label());
			this->mailLabel = (gcnew System::Windows::Forms::Label());
			this->phoneLabel = (gcnew System::Windows::Forms::Label());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->descripcio = (gcnew System::Windows::Forms::Label());
			this->mostraCentresButton = (gcnew System::Windows::Forms::Button());
			this->modificarButton = (gcnew System::Windows::Forms::Button());
			this->tornaButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(747, 136);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(147, 32);
			this->label9->TabIndex = 46;
			this->label9->Text = L"Descripció";
			this->label9->Click += gcnew System::EventHandler(this, &InfoCli::label9_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(37, 253);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(233, 32);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Correu Electronic";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(366, 253);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(175, 32);
			this->label7->TabIndex = 41;
			this->label7->Text = L"Contrasenya";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(362, 136);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(179, 32);
			this->label6->TabIndex = 40;
			this->label6->Text = L"Nom d\'usuari";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(37, 376);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 32);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Telefon";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(37, 136);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(195, 32);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Nom Complert";
			this->label2->Click += gcnew System::EventHandler(this, &InfoCli::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(37, 30);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 39);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Informacio Usuari";
			this->label1->Click += gcnew System::EventHandler(this, &InfoCli::label1_Click);
			// 
			// nameLabel
			// 
			this->nameLabel->AutoSize = true;
			this->nameLabel->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->nameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->nameLabel->Location = System::Drawing::Point(38, 183);
			this->nameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->nameLabel->Name = L"nameLabel";
			this->nameLabel->Size = System::Drawing::Size(123, 25);
			this->nameLabel->TabIndex = 47;
			this->nameLabel->Text = L"Nombre aqui";
			// 
			// mailLabel
			// 
			this->mailLabel->AutoSize = true;
			this->mailLabel->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->mailLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mailLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->mailLabel->Location = System::Drawing::Point(38, 294);
			this->mailLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->mailLabel->Name = L"mailLabel";
			this->mailLabel->Size = System::Drawing::Size(117, 25);
			this->mailLabel->TabIndex = 48;
			this->mailLabel->Text = L"Correo Aqui";
			// 
			// phoneLabel
			// 
			this->phoneLabel->AutoSize = true;
			this->phoneLabel->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->phoneLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phoneLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->phoneLabel->Location = System::Drawing::Point(38, 422);
			this->phoneLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->phoneLabel->Name = L"phoneLabel";
			this->phoneLabel->Size = System::Drawing::Size(112, 25);
			this->phoneLabel->TabIndex = 49;
			this->phoneLabel->Text = L"phone Aqui";
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->usernameLabel->Location = System::Drawing::Point(363, 183);
			this->usernameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(144, 25);
			this->usernameLabel->TabIndex = 51;
			this->usernameLabel->Text = L"username Aqui";
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->passwordLabel->Location = System::Drawing::Point(367, 294);
			this->passwordLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(164, 25);
			this->passwordLabel->TabIndex = 52;
			this->passwordLabel->Text = L"contrasenya Aqui";
			// 
			// descripcio
			// 
			this->descripcio->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->descripcio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->descripcio->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->descripcio->Location = System::Drawing::Point(749, 183);
			this->descripcio->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->descripcio->Name = L"descripcio";
			this->descripcio->Size = System::Drawing::Size(709, 378);
			this->descripcio->TabIndex = 53;
			this->descripcio->Text = L"descripcio Aqui";
			// 
			// mostraCentresButton
			// 
			this->mostraCentresButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->mostraCentresButton->Location = System::Drawing::Point(922, 668);
			this->mostraCentresButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mostraCentresButton->Name = L"mostraCentresButton";
			this->mostraCentresButton->Size = System::Drawing::Size(279, 97);
			this->mostraCentresButton->TabIndex = 54;
			this->mostraCentresButton->Text = L"Mostrar Centres";
			this->mostraCentresButton->UseVisualStyleBackColor = true;
			this->mostraCentresButton->Click += gcnew System::EventHandler(this, &InfoCli::Mostra_Centres_Button);
			// 
			// modificarButton
			// 
			this->modificarButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->modificarButton->Location = System::Drawing::Point(1236, 668);
			this->modificarButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->modificarButton->Name = L"modificarButton";
			this->modificarButton->Size = System::Drawing::Size(279, 97);
			this->modificarButton->TabIndex = 55;
			this->modificarButton->Text = L"Modificar Informacio";
			this->modificarButton->UseVisualStyleBackColor = true;
			this->modificarButton->Click += gcnew System::EventHandler(this, &InfoCli::button1_Click);
			// 
			// tornaButton
			// 
			this->tornaButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->tornaButton->Location = System::Drawing::Point(45, 668);
			this->tornaButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tornaButton->Name = L"tornaButton";
			this->tornaButton->Size = System::Drawing::Size(287, 97);
			this->tornaButton->TabIndex = 56;
			this->tornaButton->Text = L"Tornar";
			this->tornaButton->UseVisualStyleBackColor = true;
			this->tornaButton->Click += gcnew System::EventHandler(this, &InfoCli::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-23, -26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1625, 867);
			this->pictureBox1->TabIndex = 59;
			this->pictureBox1->TabStop = false;
			// 
			// InfoCli
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1579, 814);
			this->Controls->Add(this->tornaButton);
			this->Controls->Add(this->modificarButton);
			this->Controls->Add(this->mostraCentresButton);
			this->Controls->Add(this->descripcio);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->usernameLabel);
			this->Controls->Add(this->phoneLabel);
			this->Controls->Add(this->mailLabel);
			this->Controls->Add(this->nameLabel);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"InfoCli";
			this->Text = L"InfoCli";
			this->Load += gcnew System::EventHandler(this, &InfoCli::InfoCli_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		PetSalut::ModCli^ modCli = gcnew PetSalut::ModCli();

		modCli->ShowDialog();

		this->Close(); 

	}
	private: System::Void InfoCli_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Mostra_Centres_Button(System::Object^ sender, System::EventArgs^ e) {
		PetSalut::ConsultaCentresForm^ consultaCentres = gcnew PetSalut::ConsultaCentresForm();

		this->Visible = false;

		consultaCentres->ShowDialog();

		this->Visible = true;
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}