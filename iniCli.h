#pragma once
#include "TxIniciSessio.h"
#include "MenuCli.h"

namespace PetSalut {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for IniCli
	/// </summary>
	public ref class IniCli : public System::Windows::Forms::Form
	{
	public:
		IniCli(void)
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
		~IniCli()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ SubmitButton;
	private: System::Windows::Forms::Label^ UserLabel;
	private: System::Windows::Forms::Label^ PasswordLabel;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ PasswordTextBox;
	private: System::Windows::Forms::TextBox^ UsernameTextBox;
	private: System::Windows::Forms::Label^ ClinicaLoginTitle;


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
			this->SubmitButton = (gcnew System::Windows::Forms::Button());
			this->UserLabel = (gcnew System::Windows::Forms::Label());
			this->PasswordLabel = (gcnew System::Windows::Forms::Label());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->UsernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ClinicaLoginTitle = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// SubmitButton
			// 
			this->SubmitButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SubmitButton->Location = System::Drawing::Point(154, 284);
			this->SubmitButton->Margin = System::Windows::Forms::Padding(2);
			this->SubmitButton->Name = L"SubmitButton";
			this->SubmitButton->Size = System::Drawing::Size(176, 61);
			this->SubmitButton->TabIndex = 11;
			this->SubmitButton->Text = L"Iniciar Sessió";
			this->SubmitButton->UseVisualStyleBackColor = true;
			this->SubmitButton->Click += gcnew System::EventHandler(this, &IniCli::SubmitButton_Click);
			// 
			// UserLabel
			// 
			this->UserLabel->AutoSize = true;
			this->UserLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserLabel->Location = System::Drawing::Point(144, 101);
			this->UserLabel->Name = L"UserLabel";
			this->UserLabel->Size = System::Drawing::Size(212, 33);
			this->UserLabel->TabIndex = 10;
			this->UserLabel->Text = L"Nom d\'usuari";
			// 
			// PasswordLabel
			// 
			this->PasswordLabel->AutoSize = true;
			this->PasswordLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordLabel->Location = System::Drawing::Point(144, 192);
			this->PasswordLabel->Name = L"PasswordLabel";
			this->PasswordLabel->Size = System::Drawing::Size(203, 33);
			this->PasswordLabel->TabIndex = 9;
			this->PasswordLabel->Text = L"Contrasenya";
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->Location = System::Drawing::Point(86, 233);
			this->PasswordTextBox->Margin = System::Windows::Forms::Padding(2);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(308, 20);
			this->PasswordTextBox->TabIndex = 8;
			this->PasswordTextBox->TextChanged += gcnew System::EventHandler(this, &IniCli::PasswordTextBox_TextChanged);
			// 
			// UsernameTextBox
			// 
			this->UsernameTextBox->Location = System::Drawing::Point(88, 143);
			this->UsernameTextBox->Margin = System::Windows::Forms::Padding(2);
			this->UsernameTextBox->Name = L"UsernameTextBox";
			this->UsernameTextBox->Size = System::Drawing::Size(307, 20);
			this->UsernameTextBox->TabIndex = 7;
			this->UsernameTextBox->TextChanged += gcnew System::EventHandler(this, &IniCli::UsernameTextBox_TextChanged);
			// 
			// ClinicaLoginTitle
			// 
			this->ClinicaLoginTitle->AutoSize = true;
			this->ClinicaLoginTitle->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 28.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ClinicaLoginTitle->Location = System::Drawing::Point(79, 29);
			this->ClinicaLoginTitle->Name = L"ClinicaLoginTitle";
			this->ClinicaLoginTitle->Size = System::Drawing::Size(337, 54);
			this->ClinicaLoginTitle->TabIndex = 6;
			this->ClinicaLoginTitle->Text = L"Iniciar Sessió";
			// 
			// IniCli
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(492, 441);
			this->Controls->Add(this->SubmitButton);
			this->Controls->Add(this->UserLabel);
			this->Controls->Add(this->PasswordLabel);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->UsernameTextBox);
			this->Controls->Add(this->ClinicaLoginTitle);
			this->Name = L"IniCli";
			this->Text = L"IniCli";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SubmitButton_Click(System::Object^ sender, System::EventArgs^ e) {

		try {

			String^ username = UsernameTextBox->Text;
			String^ contrasenya = PasswordTextBox->Text;

			TxIniciSessio iniS;

			iniS.crear(username, contrasenya);
			iniS.executar();

			PetSalut::MenuCli^ menuCli = gcnew PetSalut::MenuCli();

			this->Visible = false;

			menuCli->Show();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message);
		}


	}
};
}
