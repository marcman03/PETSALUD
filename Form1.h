#pragma once
#include "IniProp.h"
#include "iniCli.h"
#include "RegProp.h"
#include "RegCli.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// TEST GIT N� 1
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ iniCliButton;
	private: System::Windows::Forms::Button^ signUpButton;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->iniCliButton = (gcnew System::Windows::Forms::Button());
			this->signUpButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(405, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(332, 69);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PETSALUT";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(193, 222);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(273, 107);
			this->button1->TabIndex = 1;
			this->button1->Text = L"INICIAR SESSIÓ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(193, 379);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(273, 107);
			this->button2->TabIndex = 2;
			this->button2->Text = L"REGISTRAR-SE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// iniCliButton
			// 
			this->iniCliButton->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->iniCliButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iniCliButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iniCliButton->Location = System::Drawing::Point(665, 222);
			this->iniCliButton->Name = L"iniCliButton";
			this->iniCliButton->Size = System::Drawing::Size(273, 107);
			this->iniCliButton->TabIndex = 3;
			this->iniCliButton->Text = L"Iniciar Sessió Clínica";
			this->iniCliButton->UseVisualStyleBackColor = false;
			this->iniCliButton->Click += gcnew System::EventHandler(this, &Form1::iniCliButton_Click);
			// 
			// signUpButton
			// 
			this->signUpButton->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->signUpButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signUpButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signUpButton->Location = System::Drawing::Point(665, 379);
			this->signUpButton->Name = L"signUpButton";
			this->signUpButton->Size = System::Drawing::Size(273, 107);
			this->signUpButton->TabIndex = 4;
			this->signUpButton->Text = L"Registrase Clinica";
			this->signUpButton->UseVisualStyleBackColor = false;
			this->signUpButton->Click += gcnew System::EventHandler(this, &Form1::signUpButton_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1128, 661);
			this->Controls->Add(this->signUpButton);
			this->Controls->Add(this->iniCliButton);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"PETSALUT";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	PetSalut::IniProp^ iniProp = gcnew PetSalut::IniProp();

	this->Visible = false;

	iniProp->Show();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	PetSalut::RegProp^ regProp = gcnew PetSalut::RegProp();

	this->Visible = false;

	regProp->Show();

}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

}

private: System::Void iniCliButton_Click(System::Object^ sender, System::EventArgs^ e) {
	PetSalut::IniCli^ iniCli = gcnew PetSalut::IniCli();

	this->Visible = false;

	iniCli->Show();
}

private: System::Void signUpButton_Click(System::Object^ sender, System::EventArgs^ e) {
	PetSalut::RegCli^ regCli = gcnew PetSalut::RegCli();

	this->Visible = false;

	regCli->Show();
}

};
}