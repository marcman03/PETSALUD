#pragma once
#include "CliniquesClass.h"

namespace PetSalut {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CinicaAlta
	/// </summary>
	public ref class CinicaAlta : public System::Windows::Forms::Form
	{
	public:
		CinicaAlta(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CinicaAlta()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::TextBox^ NomText;
	private: System::Windows::Forms::TextBox^ CorreuText;
	private: System::Windows::Forms::TextBox^ TelefonText;
	private: System::Windows::Forms::TextBox^ UbicacioText;
	private: System::Windows::Forms::TextBox^ DescripcioText;
	private: System::Windows::Forms::Label^ NomLabel;
	private: System::Windows::Forms::Label^ CorreuLabel;
	private: System::Windows::Forms::Label^ UbicacioLabel;
	private: System::Windows::Forms::Label^ DescripcioLabel;
	private: System::Windows::Forms::Label^ TelefonLabel;
	private: System::Windows::Forms::Button^ SubmitButton;





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
			this->NomText = (gcnew System::Windows::Forms::TextBox());
			this->CorreuText = (gcnew System::Windows::Forms::TextBox());
			this->TelefonText = (gcnew System::Windows::Forms::TextBox());
			this->UbicacioText = (gcnew System::Windows::Forms::TextBox());
			this->NomLabel = (gcnew System::Windows::Forms::Label());
			this->CorreuLabel = (gcnew System::Windows::Forms::Label());
			this->UbicacioLabel = (gcnew System::Windows::Forms::Label());
			this->TelefonLabel = (gcnew System::Windows::Forms::Label());
			this->SubmitButton = (gcnew System::Windows::Forms::Button());
			this->DescripcioLabel = (gcnew System::Windows::Forms::Label());
			this->DescripcioText = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// NomText
			// 
			this->NomText->Location = System::Drawing::Point(171, 87);
			this->NomText->Margin = System::Windows::Forms::Padding(2);
			this->NomText->Name = L"NomText";
			this->NomText->Size = System::Drawing::Size(107, 20);
			this->NomText->TabIndex = 0;
			// 
			// CorreuText
			// 
			this->CorreuText->Location = System::Drawing::Point(171, 120);
			this->CorreuText->Margin = System::Windows::Forms::Padding(2);
			this->CorreuText->Name = L"CorreuText";
			this->CorreuText->Size = System::Drawing::Size(131, 20);
			this->CorreuText->TabIndex = 1;
			// 
			// TelefonText
			// 
			this->TelefonText->Location = System::Drawing::Point(171, 155);
			this->TelefonText->Margin = System::Windows::Forms::Padding(2);
			this->TelefonText->Name = L"TelefonText";
			this->TelefonText->Size = System::Drawing::Size(107, 20);
			this->TelefonText->TabIndex = 2;
			// 
			// UbicacioText
			// 
			this->UbicacioText->Location = System::Drawing::Point(171, 186);
			this->UbicacioText->Margin = System::Windows::Forms::Padding(2);
			this->UbicacioText->Name = L"UbicacioText";
			this->UbicacioText->Size = System::Drawing::Size(251, 20);
			this->UbicacioText->TabIndex = 3;
			// 
			// NomLabel
			// 
			this->NomLabel->AutoSize = true;
			this->NomLabel->Location = System::Drawing::Point(72, 90);
			this->NomLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NomLabel->Name = L"NomLabel";
			this->NomLabel->Size = System::Drawing::Size(29, 13);
			this->NomLabel->TabIndex = 4;
			this->NomLabel->Text = L"Nom";
			// 
			// CorreuLabel
			// 
			this->CorreuLabel->AutoSize = true;
			this->CorreuLabel->Location = System::Drawing::Point(72, 123);
			this->CorreuLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->CorreuLabel->Name = L"CorreuLabel";
			this->CorreuLabel->Size = System::Drawing::Size(88, 13);
			this->CorreuLabel->TabIndex = 5;
			this->CorreuLabel->Text = L"Correu Electrònic";
			// 
			// UbicacioLabel
			// 
			this->UbicacioLabel->AutoSize = true;
			this->UbicacioLabel->Location = System::Drawing::Point(72, 193);
			this->UbicacioLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->UbicacioLabel->Name = L"UbicacioLabel";
			this->UbicacioLabel->Size = System::Drawing::Size(49, 13);
			this->UbicacioLabel->TabIndex = 7;
			this->UbicacioLabel->Text = L"Ubicació";
			// 
			// TelefonLabel
			// 
			this->TelefonLabel->AutoSize = true;
			this->TelefonLabel->Location = System::Drawing::Point(72, 158);
			this->TelefonLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TelefonLabel->Name = L"TelefonLabel";
			this->TelefonLabel->Size = System::Drawing::Size(43, 13);
			this->TelefonLabel->TabIndex = 8;
			this->TelefonLabel->Text = L"Telefon";
			// 
			// SubmitButton
			// 
			this->SubmitButton->Location = System::Drawing::Point(302, 277);
			this->SubmitButton->Margin = System::Windows::Forms::Padding(2);
			this->SubmitButton->Name = L"SubmitButton";
			this->SubmitButton->Size = System::Drawing::Size(120, 31);
			this->SubmitButton->TabIndex = 9;
			this->SubmitButton->Text = L"Submit";
			this->SubmitButton->UseVisualStyleBackColor = true;
			this->SubmitButton->Click += gcnew System::EventHandler(this, &CinicaAlta::submitButton_Click);
			// 
			// DescripcioLabel
			// 
			this->DescripcioLabel->AutoSize = true;
			this->DescripcioLabel->Location = System::Drawing::Point(72, 225);
			this->DescripcioLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DescripcioLabel->Name = L"DescripcioLabel";
			this->DescripcioLabel->Size = System::Drawing::Size(57, 13);
			this->DescripcioLabel->TabIndex = 10;
			this->DescripcioLabel->Text = L"Descripció";
			// 
			// DescripcioText
			// 
			this->DescripcioText->Location = System::Drawing::Point(171, 222);
			this->DescripcioText->Margin = System::Windows::Forms::Padding(2);
			this->DescripcioText->Name = L"DescripcioText";
			this->DescripcioText->Size = System::Drawing::Size(251, 20);
			this->DescripcioText->TabIndex = 11;
			// 
			// CinicaAlta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(486, 393);
			this->Controls->Add(this->DescripcioText);
			this->Controls->Add(this->DescripcioLabel);
			this->Controls->Add(this->SubmitButton);
			this->Controls->Add(this->TelefonLabel);
			this->Controls->Add(this->UbicacioLabel);
			this->Controls->Add(this->CorreuLabel);
			this->Controls->Add(this->NomLabel);
			this->Controls->Add(this->UbicacioText);
			this->Controls->Add(this->TelefonText);
			this->Controls->Add(this->CorreuText);
			this->Controls->Add(this->NomText);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"CinicaAlta";
			this->RightToLeftLayout = true;
			this->Text = L"CinicaAlta";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void submitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Debug::WriteLine("ButtonClicked");

		Clinica clinica;
		clinica.nom = NomText->Text;
		clinica.correu = CorreuText->Text;
		clinica.telefon = TelefonText->Text;
		clinica.ubicacio = UbicacioText->Text;
		clinica.descripcio = DescripcioText->Text;

		clinica.altaClinica();
	}
};
}
