#pragma once
#include <string>
#include <iostream>
#include <random>
#include "Ordinador.h"
#include "TxCrearEsdeveniment.h"

namespace PetSalut {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CrearPublic
	/// </summary>
	public ref class CrearPublic : public System::Windows::Forms::Form
	{
	public:
		CrearPublic(void)
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
		~CrearPublic()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ descripcioBox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ titolBox;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ tornarButton;

	private: System::Windows::Forms::Button^ publicarButton;

	private: System::Windows::Forms::TextBox^ ubicacioBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ horaBox;

	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ tipusBox;

	private: System::Windows::Forms::DateTimePicker^ dataBox;
	private: System::Windows::Forms::Label^ adtitollabel;
	private: System::Windows::Forms::Label^ addescripciolabel;
	private: System::Windows::Forms::Label^ adubicaciolabel;
	private: System::Windows::Forms::Label^ adtipuslabel;
	private: System::Windows::Forms::Label^ adhoralabel;
	private: System::Windows::Forms::Label^ addatalabel;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CrearPublic::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->adtitollabel = (gcnew System::Windows::Forms::Label());
			this->addescripciolabel = (gcnew System::Windows::Forms::Label());
			this->adubicaciolabel = (gcnew System::Windows::Forms::Label());
			this->adtipuslabel = (gcnew System::Windows::Forms::Label());
			this->adhoralabel = (gcnew System::Windows::Forms::Label());
			this->addatalabel = (gcnew System::Windows::Forms::Label());
			this->dataBox = (gcnew System::Windows::Forms::DateTimePicker());
			this->horaBox = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tipusBox = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tornarButton = (gcnew System::Windows::Forms::Button());
			this->publicarButton = (gcnew System::Windows::Forms::Button());
			this->ubicacioBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->descripcioBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->titolBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 20));
			this->label1->Location = System::Drawing::Point(549, 90);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(414, 48);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Crear Event Public";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 28));
			this->label2->Location = System::Drawing::Point(587, 23);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(323, 67);
			this->label2->TabIndex = 2;
			this->label2->Text = L"PETSALUT";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->adtitollabel);
			this->panel1->Controls->Add(this->addescripciolabel);
			this->panel1->Controls->Add(this->adubicaciolabel);
			this->panel1->Controls->Add(this->adtipuslabel);
			this->panel1->Controls->Add(this->adhoralabel);
			this->panel1->Controls->Add(this->addatalabel);
			this->panel1->Controls->Add(this->dataBox);
			this->panel1->Controls->Add(this->horaBox);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->tipusBox);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->tornarButton);
			this->panel1->Controls->Add(this->publicarButton);
			this->panel1->Controls->Add(this->ubicacioBox);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->descripcioBox);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->titolBox);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(35, 142);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1512, 661);
			this->panel1->TabIndex = 3;
			// 
			// adtitollabel
			// 
			this->adtitollabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->adtitollabel->AutoSize = true;
			this->adtitollabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->adtitollabel->ForeColor = System::Drawing::Color::Brown;
			this->adtitollabel->Location = System::Drawing::Point(422, 34);
			this->adtitollabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->adtitollabel->Name = L"adtitollabel";
			this->adtitollabel->Size = System::Drawing::Size(187, 25);
			this->adtitollabel->TabIndex = 35;
			this->adtitollabel->Text = L"Required Field *";
			this->adtitollabel->Visible = false;
			// 
			// addescripciolabel
			// 
			this->addescripciolabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addescripciolabel->AutoSize = true;
			this->addescripciolabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->addescripciolabel->ForeColor = System::Drawing::Color::Brown;
			this->addescripciolabel->Location = System::Drawing::Point(422, 170);
			this->addescripciolabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->addescripciolabel->Name = L"addescripciolabel";
			this->addescripciolabel->Size = System::Drawing::Size(187, 25);
			this->addescripciolabel->TabIndex = 34;
			this->addescripciolabel->Text = L"Required Field *";
			this->addescripciolabel->Visible = false;
			// 
			// adubicaciolabel
			// 
			this->adubicaciolabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->adubicaciolabel->AutoSize = true;
			this->adubicaciolabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->adubicaciolabel->ForeColor = System::Drawing::Color::Brown;
			this->adubicaciolabel->Location = System::Drawing::Point(1139, 34);
			this->adubicaciolabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->adubicaciolabel->Name = L"adubicaciolabel";
			this->adubicaciolabel->Size = System::Drawing::Size(187, 25);
			this->adubicaciolabel->TabIndex = 33;
			this->adubicaciolabel->Text = L"Required Field *";
			this->adubicaciolabel->Visible = false;
			// 
			// adtipuslabel
			// 
			this->adtipuslabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->adtipuslabel->AutoSize = true;
			this->adtipuslabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->adtipuslabel->ForeColor = System::Drawing::Color::Brown;
			this->adtipuslabel->Location = System::Drawing::Point(1139, 174);
			this->adtipuslabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->adtipuslabel->Name = L"adtipuslabel";
			this->adtipuslabel->Size = System::Drawing::Size(187, 25);
			this->adtipuslabel->TabIndex = 32;
			this->adtipuslabel->Text = L"Required Field *";
			this->adtipuslabel->Visible = false;
			// 
			// adhoralabel
			// 
			this->adhoralabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->adhoralabel->AutoSize = true;
			this->adhoralabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->adhoralabel->ForeColor = System::Drawing::Color::Brown;
			this->adhoralabel->Location = System::Drawing::Point(1139, 447);
			this->adhoralabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->adhoralabel->Name = L"adhoralabel";
			this->adhoralabel->Size = System::Drawing::Size(187, 25);
			this->adhoralabel->TabIndex = 31;
			this->adhoralabel->Text = L"Required Field *";
			this->adhoralabel->Visible = false;
			// 
			// addatalabel
			// 
			this->addatalabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addatalabel->AutoSize = true;
			this->addatalabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->addatalabel->ForeColor = System::Drawing::Color::Brown;
			this->addatalabel->Location = System::Drawing::Point(1139, 299);
			this->addatalabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->addatalabel->Name = L"addatalabel";
			this->addatalabel->Size = System::Drawing::Size(187, 25);
			this->addatalabel->TabIndex = 30;
			this->addatalabel->Text = L"Required Field *";
			this->addatalabel->Visible = false;
			// 
			// dataBox
			// 
			this->dataBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataBox->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->dataBox->Location = System::Drawing::Point(741, 342);
			this->dataBox->Margin = System::Windows::Forms::Padding(4);
			this->dataBox->Name = L"dataBox";
			this->dataBox->Size = System::Drawing::Size(585, 28);
			this->dataBox->TabIndex = 9;
			// 
			// horaBox
			// 
			this->horaBox->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->horaBox->FormattingEnabled = true;
			this->horaBox->Items->AddRange(gcnew cli::array< System::Object^  >(26) {
				L"9:00", L"9:30", L"10:00", L"10:30", L"11:00", L"11:30",
					L"12:00", L"12:30", L"13:00", L"13:30", L"14:00", L"14:30", L"15:00", L"15:30", L"16:00", L"16:30", L"17:00", L"17:30", L"18:00",
					L"18:30", L"19:00", L"19:30", L"20:00", L"20:30", L"21:00", L"21:30"
			});
			this->horaBox->Location = System::Drawing::Point(741, 482);
			this->horaBox->Margin = System::Windows::Forms::Padding(4);
			this->horaBox->Name = L"horaBox";
			this->horaBox->Size = System::Drawing::Size(585, 33);
			this->horaBox->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->label8->Location = System::Drawing::Point(735, 443);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 33);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Hora";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->label7->Location = System::Drawing::Point(735, 295);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 33);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Dia";
			// 
			// tipusBox
			// 
			this->tipusBox->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->tipusBox->FormattingEnabled = true;
			this->tipusBox->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"canari", L"conill", L"gat", L"gos", L"hamster",
					L"lloro", L"pony", L"porc"
			});
			this->tipusBox->Location = System::Drawing::Point(741, 213);
			this->tipusBox->Margin = System::Windows::Forms::Padding(4);
			this->tipusBox->Name = L"tipusBox";
			this->tipusBox->Size = System::Drawing::Size(585, 33);
			this->tipusBox->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->label6->Location = System::Drawing::Point(735, 166);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 33);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Tipus";
			// 
			// tornarButton
			// 
			this->tornarButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->tornarButton->Location = System::Drawing::Point(24, 546);
			this->tornarButton->Margin = System::Windows::Forms::Padding(4);
			this->tornarButton->Name = L"tornarButton";
			this->tornarButton->Size = System::Drawing::Size(236, 94);
			this->tornarButton->TabIndex = 11;
			this->tornarButton->Text = L"Tornar";
			this->tornarButton->UseVisualStyleBackColor = true;
			this->tornarButton->Click += gcnew System::EventHandler(this, &CrearPublic::tornarButton_Click);
			// 
			// publicarButton
			// 
			this->publicarButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->publicarButton->Location = System::Drawing::Point(1252, 546);
			this->publicarButton->Margin = System::Windows::Forms::Padding(4);
			this->publicarButton->Name = L"publicarButton";
			this->publicarButton->Size = System::Drawing::Size(236, 94);
			this->publicarButton->TabIndex = 12;
			this->publicarButton->Text = L"Publicar";
			this->publicarButton->UseVisualStyleBackColor = true;
			this->publicarButton->Click += gcnew System::EventHandler(this, &CrearPublic::publicarButton_Click);
			// 
			// ubicacioBox
			// 
			this->ubicacioBox->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->ubicacioBox->Location = System::Drawing::Point(741, 76);
			this->ubicacioBox->Margin = System::Windows::Forms::Padding(4);
			this->ubicacioBox->Name = L"ubicacioBox";
			this->ubicacioBox->Size = System::Drawing::Size(585, 28);
			this->ubicacioBox->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->label5->Location = System::Drawing::Point(735, 30);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(141, 33);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Ubicacio";
			// 
			// descripcioBox
			// 
			this->descripcioBox->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->descripcioBox->Location = System::Drawing::Point(24, 213);
			this->descripcioBox->Margin = System::Windows::Forms::Padding(4);
			this->descripcioBox->Multiline = true;
			this->descripcioBox->Name = L"descripcioBox";
			this->descripcioBox->Size = System::Drawing::Size(585, 302);
			this->descripcioBox->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->label4->Location = System::Drawing::Point(17, 166);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(326, 33);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Descripció de l\'event";
			// 
			// titolBox
			// 
			this->titolBox->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->titolBox->Location = System::Drawing::Point(24, 76);
			this->titolBox->Margin = System::Windows::Forms::Padding(4);
			this->titolBox->Name = L"titolBox";
			this->titolBox->Size = System::Drawing::Size(585, 28);
			this->titolBox->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->label3->Location = System::Drawing::Point(17, 30);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(237, 33);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Titol de l\'event";
			// 
			// CrearPublic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1579, 814);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"CrearPublic";
			this->Text = L"PETSALUT";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tornarButton_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

	}

	private: System::Void publicarButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
		// Oculta el panel1, lo que tambi�n oculta todos los controles dentro de �l
		if (String::IsNullOrWhiteSpace(this->titolBox->Text)) {
			this->adtitollabel->Visible = true;
		}
		else if (String::IsNullOrWhiteSpace(this->ubicacioBox->Text)) {
			this->adubicaciolabel->Visible = true;
		}
		else if (String::IsNullOrWhiteSpace(this->descripcioBox->Text)) {
			this->addescripciolabel->Visible = true;
		}
		else if (String::IsNullOrWhiteSpace(this->tipusBox->Text)) {
			this->adtipuslabel->Visible = true;
		}
		else if (String::IsNullOrWhiteSpace(this->horaBox->Text)) {
			this->adhoralabel->Visible = true;
		}
		else if (String::IsNullOrWhiteSpace(this->dataBox->Text)) {
			this->addatalabel->Visible = true;
		}

		else {
			try {

				Ordinador^ ord = Ordinador::getInstance();
				PassarellaUsuari^ usuari = ord->obteUsuari();

				random_device rd;
				mt19937 gen(rd());
				uniform_int_distribution<> distrib(200, 500000);
				int id_mascota = distrib(gen);

				TxCrearEsdeveniment creaEsde;

				creaEsde.crear(this->titolBox->Text->ToString(), id_mascota, this->dataBox->Value, this->horaBox->Text->ToString(), usuari->getUsername(), 0, 0, "Public", this->tipusBox->Text->ToString());
				creaEsde.executar();

			}

			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}

			this->Close();
		}
	}
};
}
