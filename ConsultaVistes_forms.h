#pragma once
#pragma once
#include <string>
#include <iostream>
#include "PassarellaPropietari.h"
#include "TxConsultarMascotes.h"
#include "PassarellaMascota.h"
#include "CercadoraMascota.h"
#include "Ordinador.h"
#include "Delete_Mascota_forms.h"
#include "Crea_Mascota_forms.h"
#include "CercadoraPropietari.h"
#include "CreaVisites_forms.h"


namespace PetSalut {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultaVistes_forms
	/// </summary>
	public ref class ConsultaVistes_forms : public System::Windows::Forms::Form
	{
	public:
		ConsultaVistes_forms(void)
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
		~ConsultaVistes_forms()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ registrarbutton;
	private: System::Windows::Forms::Button^ eliminabutton;
	private: System::Windows::Forms::Label^ visitesLabel;

	private: System::Windows::Forms::Label^ petsaludlabel;
	private: System::Windows::Forms::ComboBox^ petsList;

	//	private: System::Windows::Forms::Button^ consultar;
	protected:

	private: System::Void fillPets(System::Object^ sender, System::EventArgs^ e) {


		//Usar aqui la variable ordenador para obtener el passarela propietari

		Ordinador^ ord = Ordinador::getInstance();
		PassarellaUsuari^ usuari = ord->obteUsuari();

		PassarellaPropietari^ propietari = CercadoraPropietari::cercaPropietari(usuari->getUsername());

		TxConsultarMascotes^ consultaMascotas = TxConsultarMascotes::crear(propietari);
		vector<int> mascotas = consultaMascotas->obteResultat();
		// Limpiar el ComboBox
		petsList->Items->Clear();
		CercadoraMascota^ cercadora = gcnew CercadoraMascota();
		// Llenar el ComboBox con los identificadores de mascotas
		for (int i = 0; i < mascotas.size(); ++i) {

			PassarellaMascota^ mascota = cercadora->cercaMascota(mascotas[i]);

			int chip = mascota->Chip;
			String^ nombre = mascota->Nom;

			// Concatenar el chip y el nombre y agregarlos a la lista
			String^ infoMascota = nombre + " (" + chip.ToString() + ")";
			petsList->Items->Add(infoMascota);
		}

	}
	private: System::Void eliminabutton_click(System::Object^ sender, System::EventArgs^ e) {
/*
		PetSalut::Elimina_Mascota_forms^ elimMasc = gcnew PetSalut::Elimina_Mascota_forms();

		this->Visible = false;

		elimMasc->ShowDialog();

		this->Visible = true;
*/
	}

	private: System::Void registrarbutton_Click(System::Object^ sender, System::EventArgs^ e) {

		PetSalut::CreaVisites_forms^ creaVisita = gcnew PetSalut::CreaVisites_forms();

		this->Visible = false;

		creaVisita->ShowDialog();

		this->Visible = true;

	}

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->registrarbutton = (gcnew System::Windows::Forms::Button());
			this->eliminabutton = (gcnew System::Windows::Forms::Button());
			this->petsList = (gcnew System::Windows::Forms::ComboBox());
			this->visitesLabel = (gcnew System::Windows::Forms::Label());
			this->petsaludlabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// registrarbutton
			// 
			this->registrarbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->registrarbutton->Location = System::Drawing::Point(462, 297);
			this->registrarbutton->Name = L"registrarbutton";
			this->registrarbutton->Size = System::Drawing::Size(135, 35);
			this->registrarbutton->TabIndex = 8;
			this->registrarbutton->Text = L"REGISTRAR VISITA";
			this->registrarbutton->UseVisualStyleBackColor = false;
			this->registrarbutton->Click += gcnew System::EventHandler(this, &ConsultaVistes_forms::registrarbutton_Click);
			// 
			// eliminabutton
			// 
			this->eliminabutton->BackColor = System::Drawing::Color::Red;
			this->eliminabutton->Location = System::Drawing::Point(462, 355);
			this->eliminabutton->Name = L"eliminabutton";
			this->eliminabutton->Size = System::Drawing::Size(135, 35);
			this->eliminabutton->TabIndex = 9;
			this->eliminabutton->Text = L"ELIMINAR VISITA";
			this->eliminabutton->UseVisualStyleBackColor = false;
			this->eliminabutton->Click += gcnew System::EventHandler(this, &ConsultaVistes_forms::eliminabutton_click);
			// 
			// petsList
			// 
			this->petsList->FormattingEnabled = true;
			this->petsList->Location = System::Drawing::Point(201, 140);
			this->petsList->Margin = System::Windows::Forms::Padding(2);
			this->petsList->Name = L"petsList";
			this->petsList->Size = System::Drawing::Size(200, 21);
			this->petsList->TabIndex = 3;
			this->petsList->Click += gcnew System::EventHandler(this, &ConsultaVistes_forms::fillPets);
			// 
			// visitesLabel
			// 
			this->visitesLabel->AutoSize = true;
			this->visitesLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->visitesLabel->Location = System::Drawing::Point(224, 79);
			this->visitesLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->visitesLabel->Name = L"visitesLabel";
			this->visitesLabel->Size = System::Drawing::Size(157, 39);
			this->visitesLabel->TabIndex = 11;
			this->visitesLabel->Text = L"VISITES";
			// 
			// petsaludlabel
			// 
			this->petsaludlabel->AutoSize = true;
			this->petsaludlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->petsaludlabel->Location = System::Drawing::Point(193, 9);
			this->petsaludlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->petsaludlabel->Name = L"petsaludlabel";
			this->petsaludlabel->Size = System::Drawing::Size(235, 46);
			this->petsaludlabel->TabIndex = 10;
			this->petsaludlabel->Text = L"PETSALUT";
			// 
			// ConsultaVistes_forms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(609, 402);
			this->Controls->Add(this->visitesLabel);
			this->Controls->Add(this->petsaludlabel);
			this->Controls->Add(this->petsList);
			this->Controls->Add(this->eliminabutton);
			this->Controls->Add(this->registrarbutton);
			this->Name = L"ConsultaVistes_forms";
			this->Text = L"ConsultaVistes_forms";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
