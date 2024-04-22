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
	private: System::Windows::Forms::Button^ submitButton;
	protected:
	private: System::Windows::Forms::Label^ userLabel;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::TextBox^ passwordTextBox;
	private: System::Windows::Forms::TextBox^ usernameTextBox;
	private: System::Windows::Forms::Label^ clinicaLoginTitle;

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
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->userLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->clinicaLoginTitle = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// submitButton
			// 
			this->submitButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitButton->Location = System::Drawing::Point(154, 284);
			this->submitButton->Margin = System::Windows::Forms::Padding(2);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(176, 61);
			this->submitButton->TabIndex = 11;
			this->submitButton->Text = L"Iniciar Sessió";
			this->submitButton->UseVisualStyleBackColor = true;
			this->submitButton->Click += gcnew System::EventHandler(this, &IniCli::submitButton_Click);
			// 
			// userLabel
			// 
			this->userLabel->AutoSize = true;
			this->userLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userLabel->Location = System::Drawing::Point(144, 101);
			this->userLabel->Name = L"userLabel";
			this->userLabel->Size = System::Drawing::Size(212, 33);
			this->userLabel->TabIndex = 10;
			this->userLabel->Text = L"Nom d\'usuari";
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordLabel->Location = System::Drawing::Point(144, 192);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(203, 33);
			this->passwordLabel->TabIndex = 9;
			this->passwordLabel->Text = L"Contrasenya";
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Location = System::Drawing::Point(86, 233);
			this->passwordTextBox->Margin = System::Windows::Forms::Padding(2);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(308, 20);
			this->passwordTextBox->TabIndex = 8;
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->Location = System::Drawing::Point(88, 143);
			this->usernameTextBox->Margin = System::Windows::Forms::Padding(2);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(307, 20);
			this->usernameTextBox->TabIndex = 7;
			// 
			// clinicaLoginTitle
			// 
			this->clinicaLoginTitle->AutoSize = true;
			this->clinicaLoginTitle->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 28.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->clinicaLoginTitle->Location = System::Drawing::Point(79, 29);
			this->clinicaLoginTitle->Name = L"clinicaLoginTitle";
			this->clinicaLoginTitle->Size = System::Drawing::Size(337, 54);
			this->clinicaLoginTitle->TabIndex = 6;
			this->clinicaLoginTitle->Text = L"Iniciar Sessió";
			// 
			// IniCli
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(490, 476);
			this->Controls->Add(this->submitButton);
			this->Controls->Add(this->userLabel);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->usernameTextBox);
			this->Controls->Add(this->clinicaLoginTitle);
			this->Name = L"IniCli";
			this->Text = L"IniCli";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void submitButton_Click(System::Object^ sender, System::EventArgs^ e) {

		try {

			String^ username = textBox1->Text;
			String^ contrasenya = textBox2->Text;

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
