#pragma once
#include <string>
#include <iostream>
#include "PassarellaPropietari.h"
#include "TxConsultarMascotes.h"

namespace PetSalut {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultaMascota_forms
	/// </summary>
	public ref class ConsultaMascota_forms : public System::Windows::Forms::Form
	{
	public:
		ConsultaMascota_forms(void)
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
		~ConsultaMascota_forms()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^ petsaludlabel;
	private: System::Windows::Forms::Label^ mypetslabel;
	private: System::Windows::Forms::ComboBox^ petsList;

	private: System::Windows::Forms::Button^ consultar;

	private: System::Windows::Forms::Panel^ descriptionPannel;

	
	private: System::Void consultar_Click(System::Object^ sender, System::EventArgs^ e) {
		// Verifica si hay al menos un elemento seleccionado en el ComboBox
		if (petsList->SelectedIndex != -1) {
			// Si hay un elemento seleccionado, muestra el panel de descripción
			descriptionPannel->Visible = true;
		}
		else {
			// Si no hay elementos seleccionados, muestra un mensaje de error o realiza alguna otra acción según tus necesidades
			MessageBox::Show("Por favor, selecciona una mascota antes de consultar.");
		}
	}
	private: System::Void fillPets(System::Object^ sender, System::EventArgs^ e) {
		//
		PassarellaPropietari^ propietari = gcnew PassarellaPropietari("pepitoxx","","","","","","");
		TxConsultarMascotes^ consultaMascotas = TxConsultarMascotes::crear(propietari);
		vector<int> mascotas = consultaMascotas->obteResultat();
		// Limpiar el ComboBox
		petsList->Items->Clear();

		// Llenar el ComboBox con los identificadores de mascotas
		for (int i = 0; i < mascotas.size(); ++i) {
			petsList->Items->Add(mascotas[i].ToString());
		}



	}

	

	protected:

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
			this->petsaludlabel = (gcnew System::Windows::Forms::Label());
			this->mypetslabel = (gcnew System::Windows::Forms::Label());
			this->petsList = (gcnew System::Windows::Forms::ComboBox());
			this->consultar = (gcnew System::Windows::Forms::Button());
			this->descriptionPannel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// petsaludlabel
			// 
			this->petsaludlabel->AutoSize = true;
			this->petsaludlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->petsaludlabel->Location = System::Drawing::Point(339, 9);
			this->petsaludlabel->Name = L"petsaludlabel";
			this->petsaludlabel->Size = System::Drawing::Size(291, 58);
			this->petsaludlabel->TabIndex = 1;
			this->petsaludlabel->Text = L"PETSALUT";
			this->petsaludlabel->Click += gcnew System::EventHandler(this, &ConsultaMascota_forms::label1_Click);
			// 
			// mypetslabel
			// 
			this->mypetslabel->AutoSize = true;
			this->mypetslabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mypetslabel->Location = System::Drawing::Point(389, 67);
			this->mypetslabel->Name = L"mypetslabel";
			this->mypetslabel->Size = System::Drawing::Size(173, 48);
			this->mypetslabel->TabIndex = 2;
			this->mypetslabel->Text = L"My pets";
			// 
			// petsList
			// 
			this->petsList->FormattingEnabled = true;
			this->petsList->Location = System::Drawing::Point(349, 168);
			this->petsList->Name = L"petsList";
			this->petsList->Size = System::Drawing::Size(265, 24);
			this->petsList->TabIndex = 3;
			this->petsList->Click += gcnew System::EventHandler(this, &ConsultaMascota_forms::fillPets);

			// 
			// consultar
			// 
			this->consultar->Location = System::Drawing::Point(634, 168);
			this->consultar->Name = L"consultar";
			this->consultar->Size = System::Drawing::Size(75, 23);
			this->consultar->TabIndex = 4;
			this->consultar->Text = L"consultar";
			this->consultar->UseVisualStyleBackColor = true;
			this->consultar->Click += gcnew System::EventHandler(this, &ConsultaMascota_forms::consultar_Click);
			// 
			// descriptionPannel
			// 
			this->descriptionPannel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->descriptionPannel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->descriptionPannel->Location = System::Drawing::Point(287, 209);
			this->descriptionPannel->Name = L"descriptionPannel";
			this->descriptionPannel->Size = System::Drawing::Size(510, 242);
			this->descriptionPannel->TabIndex = 5;
			this->descriptionPannel->Visible = false;
			this->descriptionPannel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ConsultaMascota_forms::panel1_Paint);
			// 
			// ConsultaMascota_forms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1026, 497);
			this->Controls->Add(this->descriptionPannel);
			this->Controls->Add(this->consultar);
			this->Controls->Add(this->petsList);
			this->Controls->Add(this->mypetslabel);
			this->Controls->Add(this->petsaludlabel);
			this->Name = L"ConsultaMascota_forms";
			this->Text = L"ConsultaMascota_forms";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
