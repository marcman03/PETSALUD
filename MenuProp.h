﻿#pragma once
#include "InfoProp.h"
#include "ModProp.h"
#include "TxEsborraUsu.h"
#include "CreaVisites_forms.h"
#include "ConsultaVistes_forms.h"
#include "ConsultaMascota_forms.h"
#include "CrearPublic.h"

namespace PetSalut {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuProp
	/// </summary>
	public ref class MenuProp : public System::Windows::Forms::Form
	{
	public:
		MenuProp(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MenuProp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ConsultaButton;
	private: System::Windows::Forms::Button^ ModificarButton;
	private: System::Windows::Forms::Button^ TancarButton;
	protected:

	protected:


	private: System::Windows::Forms::Button^ EliminarButton;

	private: System::Windows::Forms::Label^ label1;












	private: System::Windows::Forms::Button^ ConsultarMascotesButton;

	private: System::Windows::Forms::Button^ ConsultaVisitesButton;
	private: System::Windows::Forms::Button^ ProgramarVisitesButton;
	private: System::Windows::Forms::Button^ PublicarEventButton;



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ tituloLabel;
	private: System::Windows::Forms::Label^ nombreLabel;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ apuntarseButton;

	private: System::Windows::Forms::Label^ dataLabel;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ ubicacionLabel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ descripcionLabel;
	private: System::Windows::Forms::Button^ anteriorButton;
	private: System::Windows::Forms::Button^ seguentButton;
	private: System::Windows::Forms::Button^ eliminar_compte_acceptar;
	private: System::Windows::Forms::Button^ cancelar_eliminar_compte;
	private: System::Windows::Forms::TextBox^ contrasenyaelimina;
	private: System::Windows::Forms::Label^ labelelimina;
	private: System::Windows::Forms::PictureBox^ boxeliminar;
	private: System::Windows::Forms::Button^ Accepta_Tanca;
	private: System::Windows::Forms::Button^ Cancela_Tanca;
	private: System::Windows::Forms::Label^ LabelTancaSessio;
	private: System::Windows::Forms::PictureBox^ TancaSessioBox;
	private: System::Windows::Forms::Label^ tipusLabel;
	private: System::Windows::Forms::Label^ label3;









	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuProp::typeid));
			this->ConsultaButton = (gcnew System::Windows::Forms::Button());
			this->ModificarButton = (gcnew System::Windows::Forms::Button());
			this->TancarButton = (gcnew System::Windows::Forms::Button());
			this->EliminarButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ConsultarMascotesButton = (gcnew System::Windows::Forms::Button());
			this->ConsultaVisitesButton = (gcnew System::Windows::Forms::Button());
			this->ProgramarVisitesButton = (gcnew System::Windows::Forms::Button());
			this->PublicarEventButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->eliminar_compte_acceptar = (gcnew System::Windows::Forms::Button());
			this->Accepta_Tanca = (gcnew System::Windows::Forms::Button());
			this->cancelar_eliminar_compte = (gcnew System::Windows::Forms::Button());
			this->anteriorButton = (gcnew System::Windows::Forms::Button());
			this->contrasenyaelimina = (gcnew System::Windows::Forms::TextBox());
			this->Cancela_Tanca = (gcnew System::Windows::Forms::Button());
			this->labelelimina = (gcnew System::Windows::Forms::Label());
			this->seguentButton = (gcnew System::Windows::Forms::Button());
			this->boxeliminar = (gcnew System::Windows::Forms::PictureBox());
			this->LabelTancaSessio = (gcnew System::Windows::Forms::Label());
			this->apuntarseButton = (gcnew System::Windows::Forms::Button());
			this->TancaSessioBox = (gcnew System::Windows::Forms::PictureBox());
			this->tipusLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataLabel = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->ubicacionLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->descripcionLabel = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tituloLabel = (gcnew System::Windows::Forms::Label());
			this->nombreLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxeliminar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TancaSessioBox))->BeginInit();
			this->SuspendLayout();
			// 
			// ConsultaButton
			// 
			this->ConsultaButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ConsultaButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->ConsultaButton->Location = System::Drawing::Point(11, 73);
			this->ConsultaButton->Margin = System::Windows::Forms::Padding(2);
			this->ConsultaButton->Name = L"ConsultaButton";
			this->ConsultaButton->Size = System::Drawing::Size(202, 61);
			this->ConsultaButton->TabIndex = 0;
			this->ConsultaButton->Text = L"Consultar Informacio";
			this->ConsultaButton->UseVisualStyleBackColor = true;
			this->ConsultaButton->Click += gcnew System::EventHandler(this, &MenuProp::Consulta_Click);
			// 
			// ModificarButton
			// 
			this->ModificarButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ModificarButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->ModificarButton->Location = System::Drawing::Point(11, 138);
			this->ModificarButton->Margin = System::Windows::Forms::Padding(2);
			this->ModificarButton->Name = L"ModificarButton";
			this->ModificarButton->Size = System::Drawing::Size(202, 61);
			this->ModificarButton->TabIndex = 1;
			this->ModificarButton->Text = L"Modificar Informacio";
			this->ModificarButton->UseVisualStyleBackColor = true;
			this->ModificarButton->Click += gcnew System::EventHandler(this, &MenuProp::Modifica_Click);
			// 
			// TancarButton
			// 
			this->TancarButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->TancarButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->TancarButton->Location = System::Drawing::Point(11, 524);
			this->TancarButton->Margin = System::Windows::Forms::Padding(2);
			this->TancarButton->Name = L"TancarButton";
			this->TancarButton->Size = System::Drawing::Size(202, 61);
			this->TancarButton->TabIndex = 2;
			this->TancarButton->Text = L"Tancar Sessio";
			this->TancarButton->UseVisualStyleBackColor = true;
			this->TancarButton->Click += gcnew System::EventHandler(this, &MenuProp::Tanca_Click);
			// 
			// EliminarButton
			// 
			this->EliminarButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EliminarButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->EliminarButton->Location = System::Drawing::Point(11, 589);
			this->EliminarButton->Margin = System::Windows::Forms::Padding(2);
			this->EliminarButton->Name = L"EliminarButton";
			this->EliminarButton->Size = System::Drawing::Size(202, 61);
			this->EliminarButton->TabIndex = 3;
			this->EliminarButton->Text = L"Eliminar Propietari";
			this->EliminarButton->UseVisualStyleBackColor = true;
			this->EliminarButton->Click += gcnew System::EventHandler(this, &MenuProp::Elimina_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->label1->Location = System::Drawing::Point(41, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 62);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Opcions de propietari";
			// 
			// ConsultarMascotesButton
			// 
			this->ConsultarMascotesButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ConsultarMascotesButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->ConsultarMascotesButton->Location = System::Drawing::Point(11, 329);
			this->ConsultarMascotesButton->Margin = System::Windows::Forms::Padding(2);
			this->ConsultarMascotesButton->Name = L"ConsultarMascotesButton";
			this->ConsultarMascotesButton->Size = System::Drawing::Size(202, 61);
			this->ConsultarMascotesButton->TabIndex = 14;
			this->ConsultarMascotesButton->Text = L"Consultar Mascotes";
			this->ConsultarMascotesButton->UseVisualStyleBackColor = true;
			this->ConsultarMascotesButton->Click += gcnew System::EventHandler(this, &MenuProp::ConsultarMascotesButton_Click);
			// 
			// ConsultaVisitesButton
			// 
			this->ConsultaVisitesButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ConsultaVisitesButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->ConsultaVisitesButton->Location = System::Drawing::Point(11, 459);
			this->ConsultaVisitesButton->Margin = System::Windows::Forms::Padding(2);
			this->ConsultaVisitesButton->Name = L"ConsultaVisitesButton";
			this->ConsultaVisitesButton->Size = System::Drawing::Size(202, 61);
			this->ConsultaVisitesButton->TabIndex = 15;
			this->ConsultaVisitesButton->Text = L"Consultar Visites";
			this->ConsultaVisitesButton->UseVisualStyleBackColor = true;
			this->ConsultaVisitesButton->Click += gcnew System::EventHandler(this, &MenuProp::ConsultaVisitesButton_Click);
			// 
			// ProgramarVisitesButton
			// 
			this->ProgramarVisitesButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProgramarVisitesButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->ProgramarVisitesButton->Location = System::Drawing::Point(11, 394);
			this->ProgramarVisitesButton->Margin = System::Windows::Forms::Padding(2);
			this->ProgramarVisitesButton->Name = L"ProgramarVisitesButton";
			this->ProgramarVisitesButton->Size = System::Drawing::Size(202, 61);
			this->ProgramarVisitesButton->TabIndex = 16;
			this->ProgramarVisitesButton->Text = L"Programar Visita";
			this->ProgramarVisitesButton->UseVisualStyleBackColor = true;
			this->ProgramarVisitesButton->Click += gcnew System::EventHandler(this, &MenuProp::ProgramarVisitesButton_Click);
			// 
			// PublicarEventButton
			// 
			this->PublicarEventButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PublicarEventButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->PublicarEventButton->Location = System::Drawing::Point(11, 203);
			this->PublicarEventButton->Margin = System::Windows::Forms::Padding(2);
			this->PublicarEventButton->Name = L"PublicarEventButton";
			this->PublicarEventButton->Size = System::Drawing::Size(202, 61);
			this->PublicarEventButton->TabIndex = 17;
			this->PublicarEventButton->Text = L"Publicar Event";
			this->PublicarEventButton->UseVisualStyleBackColor = true;
			this->PublicarEventButton->Click += gcnew System::EventHandler(this, &MenuProp::PublicarEventButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->Location = System::Drawing::Point(228, -5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(10, 677);
			this->panel1->TabIndex = 18;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->Controls->Add(this->eliminar_compte_acceptar);
			this->panel2->Controls->Add(this->Accepta_Tanca);
			this->panel2->Controls->Add(this->cancelar_eliminar_compte);
			this->panel2->Controls->Add(this->anteriorButton);
			this->panel2->Controls->Add(this->contrasenyaelimina);
			this->panel2->Controls->Add(this->Cancela_Tanca);
			this->panel2->Controls->Add(this->labelelimina);
			this->panel2->Controls->Add(this->seguentButton);
			this->panel2->Controls->Add(this->boxeliminar);
			this->panel2->Controls->Add(this->LabelTancaSessio);
			this->panel2->Controls->Add(this->apuntarseButton);
			this->panel2->Controls->Add(this->TancaSessioBox);
			this->panel2->Controls->Add(this->tipusLabel);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->dataLabel);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->ubicacionLabel);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->descripcionLabel);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->tituloLabel);
			this->panel2->Controls->Add(this->nombreLabel);
			this->panel2->Location = System::Drawing::Point(263, 93);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(892, 541);
			this->panel2->TabIndex = 19;
			// 
			// eliminar_compte_acceptar
			// 
			this->eliminar_compte_acceptar->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->eliminar_compte_acceptar->Location = System::Drawing::Point(428, 252);
			this->eliminar_compte_acceptar->Margin = System::Windows::Forms::Padding(2);
			this->eliminar_compte_acceptar->Name = L"eliminar_compte_acceptar";
			this->eliminar_compte_acceptar->Size = System::Drawing::Size(280, 68);
			this->eliminar_compte_acceptar->TabIndex = 24;
			this->eliminar_compte_acceptar->Text = L"Acceptar";
			this->eliminar_compte_acceptar->UseVisualStyleBackColor = true;
			this->eliminar_compte_acceptar->Visible = false;
			this->eliminar_compte_acceptar->Click += gcnew System::EventHandler(this, &MenuProp::eliminar_compte_acceptar_Click);
			// 
			// Accepta_Tanca
			// 
			this->Accepta_Tanca->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Accepta_Tanca->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Accepta_Tanca->Location = System::Drawing::Point(428, 261);
			this->Accepta_Tanca->Margin = System::Windows::Forms::Padding(2);
			this->Accepta_Tanca->Name = L"Accepta_Tanca";
			this->Accepta_Tanca->Size = System::Drawing::Size(280, 53);
			this->Accepta_Tanca->TabIndex = 29;
			this->Accepta_Tanca->Text = L"Acceptar";
			this->Accepta_Tanca->UseVisualStyleBackColor = true;
			this->Accepta_Tanca->Visible = false;
			this->Accepta_Tanca->Click += gcnew System::EventHandler(this, &MenuProp::Accepta_Tanca_Click);
			// 
			// cancelar_eliminar_compte
			// 
			this->cancelar_eliminar_compte->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cancelar_eliminar_compte->Location = System::Drawing::Point(151, 252);
			this->cancelar_eliminar_compte->Margin = System::Windows::Forms::Padding(2);
			this->cancelar_eliminar_compte->Name = L"cancelar_eliminar_compte";
			this->cancelar_eliminar_compte->Size = System::Drawing::Size(273, 68);
			this->cancelar_eliminar_compte->TabIndex = 23;
			this->cancelar_eliminar_compte->Text = L"Cancelar";
			this->cancelar_eliminar_compte->UseVisualStyleBackColor = true;
			this->cancelar_eliminar_compte->Visible = false;
			this->cancelar_eliminar_compte->Click += gcnew System::EventHandler(this, &MenuProp::cancelar_eliminar_compte_Click);
			// 
			// anteriorButton
			// 
			this->anteriorButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->anteriorButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->anteriorButton->Location = System::Drawing::Point(24, 473);
			this->anteriorButton->Margin = System::Windows::Forms::Padding(2);
			this->anteriorButton->Name = L"anteriorButton";
			this->anteriorButton->Size = System::Drawing::Size(123, 40);
			this->anteriorButton->TabIndex = 30;
			this->anteriorButton->Text = L"Anterior";
			this->anteriorButton->UseVisualStyleBackColor = true;
			// 
			// contrasenyaelimina
			// 
			this->contrasenyaelimina->Location = System::Drawing::Point(203, 220);
			this->contrasenyaelimina->Name = L"contrasenyaelimina";
			this->contrasenyaelimina->Size = System::Drawing::Size(422, 20);
			this->contrasenyaelimina->TabIndex = 26;
			this->contrasenyaelimina->Visible = false;
			// 
			// Cancela_Tanca
			// 
			this->Cancela_Tanca->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Cancela_Tanca->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancela_Tanca->Location = System::Drawing::Point(151, 261);
			this->Cancela_Tanca->Margin = System::Windows::Forms::Padding(2);
			this->Cancela_Tanca->Name = L"Cancela_Tanca";
			this->Cancela_Tanca->Size = System::Drawing::Size(273, 53);
			this->Cancela_Tanca->TabIndex = 28;
			this->Cancela_Tanca->Text = L"Cancelar";
			this->Cancela_Tanca->UseVisualStyleBackColor = true;
			this->Cancela_Tanca->Visible = false;
			this->Cancela_Tanca->Click += gcnew System::EventHandler(this, &MenuProp::Cancela_Tanca_Click);
			// 
			// labelelimina
			// 
			this->labelelimina->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->labelelimina->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelelimina->Location = System::Drawing::Point(172, 133);
			this->labelelimina->Name = L"labelelimina";
			this->labelelimina->Size = System::Drawing::Size(495, 84);
			this->labelelimina->TabIndex = 25;
			this->labelelimina->Text = L"Per eliminar el compte introdueixi la contrasenya";
			this->labelelimina->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelelimina->Visible = false;
			// 
			// seguentButton
			// 
			this->seguentButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->seguentButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->seguentButton->Location = System::Drawing::Point(745, 473);
			this->seguentButton->Margin = System::Windows::Forms::Padding(2);
			this->seguentButton->Name = L"seguentButton";
			this->seguentButton->Size = System::Drawing::Size(123, 40);
			this->seguentButton->TabIndex = 29;
			this->seguentButton->Text = L"Seguent";
			this->seguentButton->UseVisualStyleBackColor = true;
			// 
			// boxeliminar
			// 
			this->boxeliminar->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->boxeliminar->Location = System::Drawing::Point(130, 110);
			this->boxeliminar->Name = L"boxeliminar";
			this->boxeliminar->Size = System::Drawing::Size(588, 219);
			this->boxeliminar->TabIndex = 22;
			this->boxeliminar->TabStop = false;
			this->boxeliminar->Visible = false;
			// 
			// LabelTancaSessio
			// 
			this->LabelTancaSessio->BackColor = System::Drawing::SystemColors::ControlDark;
			this->LabelTancaSessio->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelTancaSessio->Location = System::Drawing::Point(172, 149);
			this->LabelTancaSessio->Name = L"LabelTancaSessio";
			this->LabelTancaSessio->Size = System::Drawing::Size(495, 110);
			this->LabelTancaSessio->TabIndex = 30;
			this->LabelTancaSessio->Text = L"Estas segur de que vols tancar la sessio actual en aquest dispositu\?";
			this->LabelTancaSessio->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->LabelTancaSessio->Visible = false;
			// 
			// apuntarseButton
			// 
			this->apuntarseButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->apuntarseButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->apuntarseButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->apuntarseButton->Location = System::Drawing::Point(344, 452);
			this->apuntarseButton->Margin = System::Windows::Forms::Padding(2);
			this->apuntarseButton->Name = L"apuntarseButton";
			this->apuntarseButton->Size = System::Drawing::Size(202, 61);
			this->apuntarseButton->TabIndex = 22;
			this->apuntarseButton->Text = L"Apuntam!!";
			this->apuntarseButton->UseVisualStyleBackColor = false;
			// 
			// TancaSessioBox
			// 
			this->TancaSessioBox->BackColor = System::Drawing::SystemColors::ControlDark;
			this->TancaSessioBox->Location = System::Drawing::Point(130, 110);
			this->TancaSessioBox->Name = L"TancaSessioBox";
			this->TancaSessioBox->Size = System::Drawing::Size(588, 217);
			this->TancaSessioBox->TabIndex = 27;
			this->TancaSessioBox->TabStop = false;
			this->TancaSessioBox->Visible = false;
			// 
			// tipusLabel
			// 
			this->tipusLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->tipusLabel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->tipusLabel->Location = System::Drawing::Point(19, 407);
			this->tipusLabel->Name = L"tipusLabel";
			this->tipusLabel->Size = System::Drawing::Size(214, 31);
			this->tipusLabel->TabIndex = 28;
			this->tipusLabel->Text = L"Tipus aqui";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->label3->Location = System::Drawing::Point(19, 373);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 32);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Tipus:";
			// 
			// dataLabel
			// 
			this->dataLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->dataLabel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->dataLabel->Location = System::Drawing::Point(19, 337);
			this->dataLabel->Name = L"dataLabel";
			this->dataLabel->Size = System::Drawing::Size(214, 31);
			this->dataLabel->TabIndex = 28;
			this->dataLabel->Text = L"Dia i hora aqui";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->label6->Location = System::Drawing::Point(19, 303);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(191, 32);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Dia i hora:";
			// 
			// ubicacionLabel
			// 
			this->ubicacionLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->ubicacionLabel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->ubicacionLabel->Location = System::Drawing::Point(16, 264);
			this->ubicacionLabel->Name = L"ubicacionLabel";
			this->ubicacionLabel->Size = System::Drawing::Size(214, 31);
			this->ubicacionLabel->TabIndex = 26;
			this->ubicacionLabel->Text = L"Ubicacion aqui";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->label4->Location = System::Drawing::Point(16, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(191, 32);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Ubicacio:";
			// 
			// descripcionLabel
			// 
			this->descripcionLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->descripcionLabel->ForeColor = System::Drawing::SystemColors::GrayText;
			this->descripcionLabel->Location = System::Drawing::Point(15, 150);
			this->descripcionLabel->Name = L"descripcionLabel";
			this->descripcionLabel->Size = System::Drawing::Size(834, 69);
			this->descripcionLabel->TabIndex = 24;
			this->descripcionLabel->Text = L"Descripcion aqui";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->label5->Location = System::Drawing::Point(15, 116);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(191, 32);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Descripcio:";
			// 
			// tituloLabel
			// 
			this->tituloLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 16));
			this->tituloLabel->Location = System::Drawing::Point(15, 70);
			this->tituloLabel->Name = L"tituloLabel";
			this->tituloLabel->Size = System::Drawing::Size(398, 32);
			this->tituloLabel->TabIndex = 22;
			this->tituloLabel->Text = L"Titulo del evento aqui";
			// 
			// nombreLabel
			// 
			this->nombreLabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 16));
			this->nombreLabel->Location = System::Drawing::Point(15, 18);
			this->nombreLabel->Name = L"nombreLabel";
			this->nombreLabel->Size = System::Drawing::Size(388, 32);
			this->nombreLabel->TabIndex = 21;
			this->nombreLabel->Text = L"Nombre de la persona aqui";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 28));
			this->label2->Location = System::Drawing::Point(524, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(380, 43);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Events Publics";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->button1->Location = System::Drawing::Point(11, 266);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(202, 61);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Consultar Events";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MenuProp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1184, 661);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->PublicarEventButton);
			this->Controls->Add(this->ProgramarVisitesButton);
			this->Controls->Add(this->ConsultaVisitesButton);
			this->Controls->Add(this->ConsultarMascotesButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->EliminarButton);
			this->Controls->Add(this->TancarButton);
			this->Controls->Add(this->ModificarButton);
			this->Controls->Add(this->ConsultaButton);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MenuProp";
			this->Text = L"PETSALUT";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxeliminar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TancaSessioBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ac_ts_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		// Cambiar el color de fondo del bot�n cuando el mouse entra
		//Cancela_Tanca->BackColor = System::Drawing::Color::Red; // Cambiar a cualquier color que desees
	}

		   // Manejador de eventos para el evento MouseLeave del bot�n
	private: System::Void ac_ts_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		// Restaurar el color de fondo del bot�n cuando el mouse sale
		//Cancela_Tanca->BackColor = System::Drawing::SystemColors::Control; // Puedes restaurarlo al color predeterminado del sistema
	}

	private: System::Void Cancela_Tanca_Click(System::Object^ sender, System::EventArgs^ e) {

		Accepta_Tanca->Visible = false;
		Cancela_Tanca->Visible = false;
		LabelTancaSessio->Visible = false;
		TancaSessioBox->Visible = false;

	}
	private: System::Void Accepta_Tanca_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

	}


	private: System::Void Elimina_Click(System::Object^ sender, System::EventArgs^ e) {

		this->eliminar_compte_acceptar->Visible = true;
		this->cancelar_eliminar_compte->Visible = true;
		this->contrasenyaelimina->Visible = true;
		this->labelelimina->Visible = true;
		this->boxeliminar->Visible = true;

	}
	private: System::Void Consulta_Click(System::Object^ sender, System::EventArgs^ e) {

		//Redirigir al form de infoProp

		PetSalut::InfoProp^ infoProp = gcnew PetSalut::InfoProp();

		this->Visible = false;

		infoProp->ShowDialog();

		this->Visible = true;


	}
	private: System::Void Modifica_Click(System::Object^ sender, System::EventArgs^ e) {

		//Redirigir al form de modificaProp

		PetSalut::ModProp^ modProp = gcnew PetSalut::ModProp();

		this->Visible = false;

		modProp->ShowDialog();

		this->Visible = true;

	}
	private: System::Void Tanca_Click(System::Object^ sender, System::EventArgs^ e) {

		Accepta_Tanca->Visible = true;
		Cancela_Tanca->Visible = true;
		LabelTancaSessio->Visible = true;
		TancaSessioBox->Visible = true;

	}
	private: System::Void eliminar_compte_acceptar_Click(System::Object^ sender, System::EventArgs^ e) {

		//pedir la constrase�a al usuario
		//Pulsar aceptar 
		// En el boton de acceptar hacer lo siguiente (mas o menos):

		TxEsborraUsu esbU;

		try {
			esbU.crear(this->contrasenyaelimina->Text);
			esbU.executar();
			Ordinador^ ord = Ordinador::getInstance();
			ord->tancaSessio();
		}

		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}



		//Volver a la pagina principal
		this->Close();  // Cerrar el formulario actual (RegProp)


	}
	private: System::Void cancelar_eliminar_compte_Click(System::Object^ sender, System::EventArgs^ e) {

		this->boxeliminar->Visible = false;
		this->eliminar_compte_acceptar->Visible = false;
		this->cancelar_eliminar_compte->Visible = false;
		this->contrasenyaelimina->Visible = false;
		this->labelelimina->Visible = false;

	}
private: System::Void PublicarEventButton_Click(System::Object^ sender, System::EventArgs^ e) {

	PetSalut::CrearPublic^ creaPub = gcnew PetSalut::CrearPublic();

	this->Visible = false;

	creaPub->ShowDialog();

	this->Visible = true;

}
private: System::Void ConsultarMascotesButton_Click(System::Object^ sender, System::EventArgs^ e) {

	PetSalut::ConsultaMascota_forms^ conMasc = gcnew PetSalut::ConsultaMascota_forms();

	this->Visible = false;

	conMasc->ShowDialog();

	this->Visible = true;

}
private: System::Void ProgramarVisitesButton_Click(System::Object^ sender, System::EventArgs^ e) {

	PetSalut::CreaVisites_forms^ creaVisi = gcnew PetSalut::CreaVisites_forms();

	this->Visible = false;

	creaVisi->ShowDialog();

	this->Visible = true;

}
private: System::Void ConsultaVisitesButton_Click(System::Object^ sender, System::EventArgs^ e) {

	PetSalut::ConsultaVistes_forms^ conVisi = gcnew PetSalut::ConsultaVistes_forms();

	this->Visible = false;

	conVisi->ShowDialog();

	this->Visible = true;

}
};
}