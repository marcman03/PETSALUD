#pragma once
#include "TxCrearCentre.h"
#include "Ordinador.h"
#include "CercadoraTipus.h"

namespace PetSalut {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	/// 
	public ref class CreaCentreForms : public System::Windows::Forms::Form
	{
	public:

		CreaCentreForms(void)
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
		~CreaCentreForms()
		{
			if (components)
			{
				delete components;
			}
		}

		void cargarTiposEnComboBox(System::Windows::Forms::ComboBox^ comboBox) {
			// Llamar al método para obtener todos los tipos desde la base de datos
			List<String^>^ tipos = CercadoraTipus::obteTotsTipus();

			// Limpiar el ComboBox antes de agregar los nuevos tipos
			comboBox->Items->Clear();

			// Agregar los tipos obtenidos al ComboBox
			comboBox->Items->AddRange(tipos->ToArray());
		}
	private: System::Windows::Forms::TextBox^ nameBox;

	private: System::Windows::Forms::Label^ nomLabel;

	protected:















	private: System::Windows::Forms::Label^ descripcioLabel;






	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ descriptionBox;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ AdvertName;







	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ advertTelefon;




	private: System::Windows::Forms::TextBox^ telefonBox;

	private: System::Windows::Forms::Label^ telefonLabel;



	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;

	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
	private: System::Void chipBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Verifica si el carácter no es un dígito ni un control (como retroceso)
		if (!Char::IsDigit(e->KeyChar) && !Char::IsControl(e->KeyChar)) {
			e->Handled = true; // Maneja el evento, efectivamente ignorando la entrada no deseada
		}
	}

	private: System::Void exitbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Oculta el panel1, lo que tambi�n oculta todos los controles dentro de �l
		this->Close();
	}
	private: System::Void exitbuttonconfirmation_Click(System::Object^ sender, System::EventArgs^ e) {
		// Oculta el panel1, lo que tambi�n oculta todos los controles dentro de �l
		this->Close();
	}
	private: System::Void savebutton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Oculta el panel1, lo que tambi�n oculta todos los controles dentro de �l
		if (String::IsNullOrWhiteSpace(this->nameBox->Text)) {
			this->AdvertName->Visible = true;
		}
		else if (String::IsNullOrWhiteSpace(this->telefonBox->Text)) {
			this->advertTelefon->Visible = true;
		}
		else {
			this->panel2->Visible = true;
			//guardar centre
			Ordinador^ ord = Ordinador::getInstance();
			PassarellaUsuari^ usuari = ord->obteUsuari();
			TxCrearCentre^ nouCentre = TxCrearCentre::crear(this->nameBox->Text,this->telefonBox->Text, usuari->getUsername(), this->descriptionBox->Text);
			nouCentre->ejecutar();
		}
	}
#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->nameBox = (gcnew System::Windows::Forms::TextBox());
			   this->nomLabel = (gcnew System::Windows::Forms::Label());
			   this->descripcioLabel = (gcnew System::Windows::Forms::Label());
			   this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->advertTelefon = (gcnew System::Windows::Forms::Label());
			   this->telefonBox = (gcnew System::Windows::Forms::TextBox());
			   this->telefonLabel = (gcnew System::Windows::Forms::Label());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->AdvertName = (gcnew System::Windows::Forms::Label());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->descriptionBox = (gcnew System::Windows::Forms::TextBox());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->panel1->SuspendLayout();
			   this->panel2->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // nameBox
			   // 
			   this->nameBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->nameBox->Location = System::Drawing::Point(146, 135);
			   this->nameBox->Name = L"nameBox";
			   this->nameBox->Size = System::Drawing::Size(676, 24);
			   this->nameBox->TabIndex = 1;
			   // 
			   // nomLabel
			   // 
			   this->nomLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->nomLabel->AutoSize = true;
			   this->nomLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 12));
			   this->nomLabel->Location = System::Drawing::Point(78, 136);
			   this->nomLabel->Name = L"nomLabel";
			   this->nomLabel->Size = System::Drawing::Size(62, 23);
			   this->nomLabel->TabIndex = 3;
			   this->nomLabel->Text = L"Nom:";
			   // 
			   // descripcioLabel
			   // 
			   this->descripcioLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->descripcioLabel->AutoSize = true;
			   this->descripcioLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 12));
			   this->descripcioLabel->Location = System::Drawing::Point(78, 245);
			   this->descripcioLabel->Name = L"descripcioLabel";
			   this->descripcioLabel->Size = System::Drawing::Size(122, 23);
			   this->descripcioLabel->TabIndex = 9;
			   this->descripcioLabel->Text = L"Descripció:";
			   // 
			   // panel1
			   // 
			   this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panel1->BackColor = System::Drawing::SystemColors::Control;
			   this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel1->Controls->Add(this->advertTelefon);
			   this->panel1->Controls->Add(this->telefonBox);
			   this->panel1->Controls->Add(this->telefonLabel);
			   this->panel1->Controls->Add(this->button3);
			   this->panel1->Controls->Add(this->AdvertName);
			   this->panel1->Controls->Add(this->label11);
			   this->panel1->Controls->Add(this->descriptionBox);
			   this->panel1->Controls->Add(this->label7);
			   this->panel1->Controls->Add(this->button1);
			   this->panel1->Controls->Add(this->descripcioLabel);
			   this->panel1->Controls->Add(this->nameBox);
			   this->panel1->Controls->Add(this->nomLabel);
			   this->panel1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 9.75F));
			   this->panel1->Location = System::Drawing::Point(80, 85);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(1032, 549);
			   this->panel1->TabIndex = 10;
			   // 
			   // panel2
			   // 
			   this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->panel2->AutoScroll = true;
			   this->panel2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel2->Controls->Add(this->button4);
			   this->panel2->Controls->Add(this->label9);
			   this->panel2->Controls->Add(this->button2);
			   this->panel2->Controls->Add(this->label10);
			   this->panel2->Location = System::Drawing::Point(80, 176);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(1032, 354);
			   this->panel2->TabIndex = 19;
			   this->panel2->Visible = false;
			   // 
			   // button4
			   // 
			   this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->button4->BackColor = System::Drawing::Color::Transparent;
			   this->button4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F));
			   this->button4->Location = System::Drawing::Point(900, 285);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(127, 64);
			   this->button4->TabIndex = 13;
			   this->button4->Text = L"Sortir";
			   this->button4->UseVisualStyleBackColor = false;
			   this->button4->Click += gcnew System::EventHandler(this, &CreaCentreForms::exitbuttonconfirmation_Click);
			   // 
			   // label9
			   // 
			   this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->label9->AutoSize = true;
			   this->label9->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F));
			   this->label9->Location = System::Drawing::Point(417, 26);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(157, 26);
			   this->label9->TabIndex = 11;
			   this->label9->Text = L"NOU CENTRE";
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::Firebrick;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F));
			   this->button2->Location = System::Drawing::Point(993, 3);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(34, 34);
			   this->button2->TabIndex = 13;
			   this->button2->Text = L"X";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &CreaCentreForms::exitbutton_Click);
			   // 
			   // label10
			   // 
			   this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->label10->AutoSize = true;
			   this->label10->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F));
			   this->label10->Location = System::Drawing::Point(136, 142);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(757, 26);
			   this->label10->TabIndex = 3;
			   this->label10->Text = L"El teu centre s\'ha afegit a la teva secció \"ELS MEUS CENTRE\".";
			   // 
			   // advertTelefon
			   // 
			   this->advertTelefon->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->advertTelefon->AutoSize = true;
			   this->advertTelefon->ForeColor = System::Drawing::Color::Brown;
			   this->advertTelefon->Location = System::Drawing::Point(828, 195);
			   this->advertTelefon->Name = L"advertTelefon";
			   this->advertTelefon->Size = System::Drawing::Size(138, 19);
			   this->advertTelefon->TabIndex = 30;
			   this->advertTelefon->Text = L"Required Field *";
			   this->advertTelefon->Visible = false;
			   // 
			   // telefonBox
			   // 
			   this->telefonBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->telefonBox->Location = System::Drawing::Point(174, 192);
			   this->telefonBox->Name = L"telefonBox";
			   this->telefonBox->Size = System::Drawing::Size(648, 24);
			   this->telefonBox->TabIndex = 28;
			   // 
			   // telefonLabel
			   // 
			   this->telefonLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->telefonLabel->AutoSize = true;
			   this->telefonLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 12));
			   this->telefonLabel->Location = System::Drawing::Point(78, 193);
			   this->telefonLabel->Name = L"telefonLabel";
			   this->telefonLabel->Size = System::Drawing::Size(90, 23);
			   this->telefonLabel->TabIndex = 29;
			   this->telefonLabel->Text = L"Telefon:";
			   // 
			   // button3
			   // 
			   this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->button3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F));
			   this->button3->Location = System::Drawing::Point(662, 461);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(170, 67);
			   this->button3->TabIndex = 27;
			   this->button3->Text = L"Sortir";
			   this->button3->UseVisualStyleBackColor = true;
			   // 
			   // AdvertName
			   // 
			   this->AdvertName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->AdvertName->AutoSize = true;
			   this->AdvertName->ForeColor = System::Drawing::Color::Brown;
			   this->AdvertName->Location = System::Drawing::Point(828, 138);
			   this->AdvertName->Name = L"AdvertName";
			   this->AdvertName->Size = System::Drawing::Size(138, 19);
			   this->AdvertName->TabIndex = 22;
			   this->AdvertName->Text = L"Required Field *";
			   this->AdvertName->Visible = false;
			   // 
			   // label11
			   // 
			   this->label11->Location = System::Drawing::Point(0, 0);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(100, 23);
			   this->label11->TabIndex = 21;
			   // 
			   // descriptionBox
			   // 
			   this->descriptionBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->descriptionBox->Location = System::Drawing::Point(206, 245);
			   this->descriptionBox->Name = L"descriptionBox";
			   this->descriptionBox->Size = System::Drawing::Size(665, 24);
			   this->descriptionBox->TabIndex = 12;
			   // 
			   // label7
			   // 
			   this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 16));
			   this->label7->Location = System::Drawing::Point(412, 29);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(181, 31);
			   this->label7->TabIndex = 11;
			   this->label7->Text = L"NOU CENTRE";
			   // 
			   // button1
			   // 
			   this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->button1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F));
			   this->button1->Location = System::Drawing::Point(838, 461);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(170, 67);
			   this->button1->TabIndex = 10;
			   this->button1->Text = L"Registrar";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &CreaCentreForms::savebutton_Click);
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18));
			   this->label6->Location = System::Drawing::Point(515, 9);
			   this->label6->MaximumSize = System::Drawing::Size(255, 255);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(166, 33);
			   this->label6->TabIndex = 11;
			   this->label6->Text = L"PETSALUT";
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 16));
			   this->label8->Location = System::Drawing::Point(535, 32);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(120, 31);
			   this->label8->TabIndex = 12;
			   this->label8->Text = L"Centres";
			   // 
			   // CreaCentreForms
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			   this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			   this->ClientSize = System::Drawing::Size(1184, 661);
			   this->Controls->Add(this->panel2);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->panel1);
			   this->Name = L"CreaCentreForms";
			   this->Text = L"PETSALUT";
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   this->panel2->ResumeLayout(false);
			   this->panel2->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}