#pragma once
#include "InfoCli.h"
#include "ModCli.h"

namespace PetSalut {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuCli
	/// </summary>
	public ref class MenuCli : public System::Windows::Forms::Form
	{
	public:
		MenuCli(void)
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
		~MenuCli()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LabelTancaSessio;
	private: System::Windows::Forms::Button^ AceptaButton;
	protected:

	private: System::Windows::Forms::Button^ CancelaButton;



	private: System::Windows::Forms::Button^ EliminarButton;
	private: System::Windows::Forms::Button^ TancarButton;
	private: System::Windows::Forms::Button^ ModificarButton;
	private: System::Windows::Forms::Button^ ConsultaButton;
	private: System::Windows::Forms::Label^ menuCliTitle;
	private: System::Windows::Forms::Panel^ TancaSessioBox;


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
			this->LabelTancaSessio = (gcnew System::Windows::Forms::Label());
			this->AceptaButton = (gcnew System::Windows::Forms::Button());
			this->CancelaButton = (gcnew System::Windows::Forms::Button());
			this->menuCliTitle = (gcnew System::Windows::Forms::Label());
			this->EliminarButton = (gcnew System::Windows::Forms::Button());
			this->TancarButton = (gcnew System::Windows::Forms::Button());
			this->ModificarButton = (gcnew System::Windows::Forms::Button());
			this->ConsultaButton = (gcnew System::Windows::Forms::Button());
			this->TancaSessioBox = (gcnew System::Windows::Forms::Panel());
			this->TancaSessioBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// LabelTancaSessio
			// 
			this->LabelTancaSessio->BackColor = System::Drawing::SystemColors::Control;
			this->LabelTancaSessio->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelTancaSessio->Location = System::Drawing::Point(40, 25);
			this->LabelTancaSessio->Name = L"LabelTancaSessio";
			this->LabelTancaSessio->Size = System::Drawing::Size(495, 110);
			this->LabelTancaSessio->TabIndex = 17;
			this->LabelTancaSessio->Text = L"Estas segur de que vols tancar la sessió actual en aquest dispositu\?";
			this->LabelTancaSessio->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// AceptaButton
			// 
			this->AceptaButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AceptaButton->Location = System::Drawing::Point(288, 172);
			this->AceptaButton->Margin = System::Windows::Forms::Padding(2);
			this->AceptaButton->Name = L"AceptaButton";
			this->AceptaButton->Size = System::Drawing::Size(280, 58);
			this->AceptaButton->TabIndex = 16;
			this->AceptaButton->Text = L"Acceptar";
			this->AceptaButton->UseVisualStyleBackColor = true;
			this->AceptaButton->Click += gcnew System::EventHandler(this, &MenuCli::AceptaButton_Click);
			// 
			// CancelaButton
			// 
			this->CancelaButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelaButton->Location = System::Drawing::Point(11, 172);
			this->CancelaButton->Margin = System::Windows::Forms::Padding(2);
			this->CancelaButton->Name = L"CancelaButton";
			this->CancelaButton->Size = System::Drawing::Size(273, 58);
			this->CancelaButton->TabIndex = 15;
			this->CancelaButton->Text = L"Cancelar";
			this->CancelaButton->UseVisualStyleBackColor = true;
			this->CancelaButton->Click += gcnew System::EventHandler(this, &MenuCli::CancelaButton_Click);
			// 
			// menuCliTitle
			// 
			this->menuCliTitle->AutoSize = true;
			this->menuCliTitle->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuCliTitle->Location = System::Drawing::Point(124, 20);
			this->menuCliTitle->Name = L"menuCliTitle";
			this->menuCliTitle->Size = System::Drawing::Size(357, 44);
			this->menuCliTitle->TabIndex = 13;
			this->menuCliTitle->Text = L"Gestionar Clinica";
			// 
			// EliminarButton
			// 
			this->EliminarButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EliminarButton->Location = System::Drawing::Point(132, 360);
			this->EliminarButton->Margin = System::Windows::Forms::Padding(2);
			this->EliminarButton->Name = L"EliminarButton";
			this->EliminarButton->Size = System::Drawing::Size(311, 58);
			this->EliminarButton->TabIndex = 12;
			this->EliminarButton->Text = L"Eliminar Clinica";
			this->EliminarButton->UseVisualStyleBackColor = true;
			this->EliminarButton->Click += gcnew System::EventHandler(this, &MenuCli::EliminarButton_Click);
			// 
			// TancarButton
			// 
			this->TancarButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TancarButton->Location = System::Drawing::Point(132, 287);
			this->TancarButton->Margin = System::Windows::Forms::Padding(2);
			this->TancarButton->Name = L"TancarButton";
			this->TancarButton->Size = System::Drawing::Size(311, 58);
			this->TancarButton->TabIndex = 11;
			this->TancarButton->Text = L"Tancar Sessió";
			this->TancarButton->UseVisualStyleBackColor = true;
			this->TancarButton->Click += gcnew System::EventHandler(this, &MenuCli::TancarButton_Click);
			// 
			// ModificarButton
			// 
			this->ModificarButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ModificarButton->Location = System::Drawing::Point(132, 213);
			this->ModificarButton->Margin = System::Windows::Forms::Padding(2);
			this->ModificarButton->Name = L"ModificarButton";
			this->ModificarButton->Size = System::Drawing::Size(311, 58);
			this->ModificarButton->TabIndex = 10;
			this->ModificarButton->Text = L"Modificar Informació";
			this->ModificarButton->UseVisualStyleBackColor = true;
			this->ModificarButton->Click += gcnew System::EventHandler(this, &MenuCli::ModificarButton_Click);
			// 
			// ConsultaButton
			// 
			this->ConsultaButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConsultaButton->Location = System::Drawing::Point(132, 136);
			this->ConsultaButton->Margin = System::Windows::Forms::Padding(2);
			this->ConsultaButton->Name = L"ConsultaButton";
			this->ConsultaButton->Size = System::Drawing::Size(311, 58);
			this->ConsultaButton->TabIndex = 9;
			this->ConsultaButton->Text = L"Consultar Informació";
			this->ConsultaButton->UseVisualStyleBackColor = true;
			this->ConsultaButton->Click += gcnew System::EventHandler(this, &MenuCli::ConsultaButton_Click);
			// 
			// TancaSessioBox
			// 
			this->TancaSessioBox->Controls->Add(this->AceptaButton);
			this->TancaSessioBox->Controls->Add(this->LabelTancaSessio);
			this->TancaSessioBox->Controls->Add(this->CancelaButton);
			this->TancaSessioBox->Location = System::Drawing::Point(12, 79);
			this->TancaSessioBox->Name = L"TancaSessioBox";
			this->TancaSessioBox->Size = System::Drawing::Size(570, 247);
			this->TancaSessioBox->TabIndex = 18;
			this->TancaSessioBox->Visible = false;
			// 
			// MenuCli
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 463);
			this->Controls->Add(this->TancaSessioBox);
			this->Controls->Add(this->menuCliTitle);
			this->Controls->Add(this->EliminarButton);
			this->Controls->Add(this->TancarButton);
			this->Controls->Add(this->ModificarButton);
			this->Controls->Add(this->ConsultaButton);
			this->Name = L"MenuCli";
			this->Text = L"MenuCli";
			this->TancaSessioBox->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void ConsultaButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//Redirigir al form de infoCli

		PetSalut::InfoCli^ infoCli = gcnew PetSalut::InfoCli();

		this->Visible = false;

		infoCli->Show();
	}
	private: System::Void ModificarButton_Click(System::Object^ sender, System::EventArgs^ e) {
		//Redirigir al form de modificaProp

		PetSalut::ModCli^ modCli = gcnew PetSalut::ModCli();

		this->Visible = false;

		modCli->Show();
	}
	private: System::Void TancarButton_Click(System::Object^ sender, System::EventArgs^ e) {
		TancaSessioBox->Visible = true;
	}
	private: System::Void EliminarButton_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void CancelaButton_Click(System::Object^ sender, System::EventArgs^ e) {
		TancaSessioBox->Visible = false;
	}
	private: System::Void AceptaButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
};
}
