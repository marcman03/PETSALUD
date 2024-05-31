#pragma once
#include <string>
#include <iostream>
#include "PassarellaClinica.h"
#include "TxConsultarCentres.h"
#include "PassarellaCentre.h"
#include "CercadoraCentre.h"
#include "Ordinador.h"
#include "Delete_Mascota_forms.h"
#include "Crea_Mascota_forms.h"
#include "CercadoraClinica.h"
#include "ConsultaVistes_forms.h"

namespace PetSalut {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConsultaCentresForm
	/// </summary>
	public ref class ConsultaCentresForm : public System::Windows::Forms::Form
	{
	public:
		ConsultaCentresForm(void)
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
		~ConsultaCentresForm()
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
	private: System::Windows::Forms::ComboBox^ centresList;

	private: System::Windows::Forms::Button^ consultar;
	private: System::Windows::Forms::Button^ eliminabutton;
	private: System::Windows::Forms::Button^ registrarmascbutton;
	private: System::Windows::Forms::Button^ visitesButton;
	private: System::Windows::Forms::Button^ button1;






	private: System::Windows::Forms::Panel^ descriptionPannel;


	private: System::Void consultar_Click(System::Object^ sender, System::EventArgs^ e) {
		// Verifica si hay al menos un elemento seleccionado en el ComboBox
		if (centresList->SelectedIndex != -1) {
			// Si hay un elemento seleccionado, muestra el panel de descripción
			descriptionPannel->Visible = true;
			descriptionPannel->Controls->Clear();
			// Obtén el centro seleccionada del ComboBox
			String^ centreSeleccionat = centresList->SelectedItem->ToString();

			// Extrae el numero_ID de el centro seleccionada (asumiendo que el numero_ID está entre paréntesis)
			int indiceParentesisAbierto = centreSeleccionat->IndexOf('(');
			int indiceParentesisCerrado = centreSeleccionat->IndexOf(')');
			String^ id = centreSeleccionat->Substring(indiceParentesisAbierto + 1, indiceParentesisCerrado - indiceParentesisAbierto - 1);
			int numero_ID = Int32::Parse(id);

			// Utiliza el numero_ID para buscar y obtener más información de el centro
			CercadoraCentre^ cercadora = gcnew CercadoraCentre();
			PassarellaCentre^ centre = cercadora->cercaCentre(numero_ID);

			// Muestra la información de el centro en el panel de descripción
			// Por ejemplo, podrías mostrar el numero_ID, el nombre, etc.
			// Aquí se muestra el numero_ID, nombre, descripción, clinica y tipo
			Label^ labelNumero_ID = gcnew Label();
			labelNumero_ID->Text = "Numero_ID: \n" + centre->Numero_ID;
			labelNumero_ID->Location = Point(10, 10); // Establece la posición del label dentro del panel
			labelNumero_ID->AutoSize = true;
			descriptionPannel->Controls->Add(labelNumero_ID);

			Label^ label_Nom = gcnew Label();
			label_Nom->Text = "Nombre: \n" + centre->Nom;
			label_Nom->Location = Point(10, labelNumero_ID->Bottom + 25);
			label_Nom->AutoSize = true;
			descriptionPannel->Controls->Add(label_Nom);
			
			Label^ label_Telefon= gcnew Label();
			label_Telefon->Text = "Telefon: \n" + centre->Telefon;
			label_Telefon->Location = Point(10, label_Nom->Bottom + 25);
			label_Telefon->AutoSize = true;
			descriptionPannel->Controls->Add(label_Telefon);
			
			Label^ label_Clinica= gcnew Label();
			label_Clinica->Text = "Clinica: \n" + centre->Clinica;
			label_Clinica->Location = Point(10, label_Telefon->Bottom + 25);
			label_Clinica->AutoSize = true;
			descriptionPannel->Controls->Add(label_Clinica);

			Label^ label_Ubicacio= gcnew Label();
			label_Ubicacio->Text = "Ubicacio: \n" + centre->Ubicacio;
			label_Ubicacio->Location = Point(10, label_Clinica->Bottom + 25);
			label_Ubicacio->AutoSize = true;
			descriptionPannel->Controls->Add(label_Ubicacio);


			// Añade más labels con la información que quieras mostrar
		}
		else {
			// Si no hay elementos seleccionados, muestra un mensaje de error o realiza alguna otra acción según tus necesidades
			MessageBox::Show("Si us plau, selecciona una centre abans de consultar.");
		}
	}
	private: System::Void fillPets(System::Object^ sender, System::EventArgs^ e) {


		//Usar aqui la variable ordenador para obtener el passarela propietari

		Ordinador^ ord = Ordinador::getInstance();
		PassarellaUsuari^ usuari = ord->obteUsuari();

		PassarellaClinica^ propietari = CercadoraClinica::cercaClinica("clinica");

		TxConsultarCentres^ consultaCentres = TxConsultarCentres::crear(propietari);
		List<int>^ centres = consultaCentres->ObtenirResultat();
		// Limpiar el ComboBox
		centresList->Items->Clear();
		CercadoraCentre^ cercadora = gcnew CercadoraCentre();
		// Llenar el ComboBox con los identificadores de centres
		for each (int centreId in centres) {
			PassarellaCentre^ centre = cercadora->cercaCentre(centreId);

			int numero_ID = centre->Numero_ID;
			String^ nombre = centre->Nom;

			// Concatenar el numero_ID y el nombre y agregarlos a la lista
			String^ infoMascota = nombre + " (" + numero_ID.ToString() + ")";
			centresList->Items->Add(infoMascota);

		}
	}


	private: System::Void eliminabutton_click(System::Object^ sender, System::EventArgs^ e) {

		PetSalut::Elimina_Mascota_forms^ elimMasc = gcnew PetSalut::Elimina_Mascota_forms();

		this->Visible = false;

		elimMasc->ShowDialog();

		this->Visible = true;

	}

	private: System::Void registrarbutton_Click(System::Object^ sender, System::EventArgs^ e) {

		PetSalut::Crea_Mascota_forms^ creaMasc = gcnew PetSalut::Crea_Mascota_forms();

		this->Visible = false;

		creaMasc->ShowDialog();

		this->Visible = true;

	}
	private: System::Void visitesButton_Click(System::Object^ sender, System::EventArgs^ e) {

		PetSalut::ConsultaVistes_forms^ consVisites = gcnew PetSalut::ConsultaVistes_forms();

		this->Visible = false;

		consVisites->ShowDialog();

		this->Visible = true;


	}
	protected:

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
			this->petsaludlabel = (gcnew System::Windows::Forms::Label());
			this->mypetslabel = (gcnew System::Windows::Forms::Label());
			this->centresList = (gcnew System::Windows::Forms::ComboBox());
			this->consultar = (gcnew System::Windows::Forms::Button());
			this->descriptionPannel = (gcnew System::Windows::Forms::Panel());
			this->eliminabutton = (gcnew System::Windows::Forms::Button());
			this->registrarmascbutton = (gcnew System::Windows::Forms::Button());
			this->visitesButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// petsaludlabel
			// 
			this->petsaludlabel->AutoSize = true;
			this->petsaludlabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 28.25F));
			this->petsaludlabel->Location = System::Drawing::Point(455, 9);
			this->petsaludlabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->petsaludlabel->Name = L"petsaludlabel";
			this->petsaludlabel->Size = System::Drawing::Size(262, 54);
			this->petsaludlabel->TabIndex = 1;
			this->petsaludlabel->Text = L"PETSALUT";
			this->petsaludlabel->Click += gcnew System::EventHandler(this, &ConsultaCentresForm::label1_Click);
			// 
			// mypetslabel
			// 
			this->mypetslabel->AutoSize = true;
			this->mypetslabel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 20));
			this->mypetslabel->Location = System::Drawing::Point(432, 54);
			this->mypetslabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->mypetslabel->Name = L"mypetslabel";
			this->mypetslabel->Size = System::Drawing::Size(329, 39);
			this->mypetslabel->TabIndex = 2;
			this->mypetslabel->Text = L"ELS MEUS CENTRES";
			// 
			// centresList
			// 
			this->centresList->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 11));
			this->centresList->FormattingEnabled = true;
			this->centresList->Location = System::Drawing::Point(199, 136);
			this->centresList->Margin = System::Windows::Forms::Padding(2);
			this->centresList->Name = L"centresList";
			this->centresList->Size = System::Drawing::Size(590, 28);
			this->centresList->TabIndex = 3;
			this->centresList->Click += gcnew System::EventHandler(this, &ConsultaCentresForm::fillPets);
			// 
			// consultar
			// 
			this->consultar->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 11));
			this->consultar->Location = System::Drawing::Point(793, 135);
			this->consultar->Margin = System::Windows::Forms::Padding(2);
			this->consultar->Name = L"consultar";
			this->consultar->Size = System::Drawing::Size(179, 29);
			this->consultar->TabIndex = 4;
			this->consultar->Text = L"CONSULTAR";
			this->consultar->UseVisualStyleBackColor = true;
			this->consultar->Click += gcnew System::EventHandler(this, &ConsultaCentresForm::consultar_Click);
			// 
			// descriptionPannel
			// 
			this->descriptionPannel->BackColor = System::Drawing::SystemColors::Control;
			this->descriptionPannel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->descriptionPannel->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 11));
			this->descriptionPannel->Location = System::Drawing::Point(199, 169);
			this->descriptionPannel->Margin = System::Windows::Forms::Padding(2);
			this->descriptionPannel->Name = L"descriptionPannel";
			this->descriptionPannel->Size = System::Drawing::Size(773, 480);
			this->descriptionPannel->TabIndex = 5;
			this->descriptionPannel->Visible = false;
			this->descriptionPannel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ConsultaCentresForm::panel1_Paint);
			// 
			// eliminabutton
			// 
			this->eliminabutton->BackColor = System::Drawing::Color::IndianRed;
			this->eliminabutton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F));
			this->eliminabutton->Location = System::Drawing::Point(990, 561);
			this->eliminabutton->Name = L"eliminabutton";
			this->eliminabutton->Size = System::Drawing::Size(182, 88);
			this->eliminabutton->TabIndex = 6;
			this->eliminabutton->Text = L"ELIMINAR MASCOTA";
			this->eliminabutton->UseVisualStyleBackColor = false;
			this->eliminabutton->Click += gcnew System::EventHandler(this, &ConsultaCentresForm::eliminabutton_click);
			// 
			// registrarmascbutton
			// 
			this->registrarmascbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->registrarmascbutton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F));
			this->registrarmascbutton->Location = System::Drawing::Point(990, 467);
			this->registrarmascbutton->Name = L"registrarmascbutton";
			this->registrarmascbutton->Size = System::Drawing::Size(182, 88);
			this->registrarmascbutton->TabIndex = 7;
			this->registrarmascbutton->Text = L"REGISTRAR MASCOTA";
			this->registrarmascbutton->UseVisualStyleBackColor = false;
			this->registrarmascbutton->Click += gcnew System::EventHandler(this, &ConsultaCentresForm::registrarbutton_Click);
			// 
			// visitesButton
			// 
			this->visitesButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->visitesButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F));
			this->visitesButton->Location = System::Drawing::Point(990, 373);
			this->visitesButton->Name = L"visitesButton";
			this->visitesButton->Size = System::Drawing::Size(182, 88);
			this->visitesButton->TabIndex = 8;
			this->visitesButton->Text = L"VISITES";
			this->visitesButton->UseVisualStyleBackColor = false;
			this->visitesButton->Click += gcnew System::EventHandler(this, &ConsultaCentresForm::visitesButton_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F));
			this->button1->Location = System::Drawing::Point(12, 561);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(182, 88);
			this->button1->TabIndex = 9;
			this->button1->Text = L"TORNAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ConsultaCentresForm::button1_Click);
			// 
			// ConsultaCentresForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1184, 661);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->visitesButton);
			this->Controls->Add(this->registrarmascbutton);
			this->Controls->Add(this->eliminabutton);
			this->Controls->Add(this->descriptionPannel);
			this->Controls->Add(this->consultar);
			this->Controls->Add(this->centresList);
			this->Controls->Add(this->mypetslabel);
			this->Controls->Add(this->petsaludlabel);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ConsultaCentresForm";
			this->Text = L"ConsultaCentresForm";
			this->Load += gcnew System::EventHandler(this, &ConsultaCentresForm::ConsultaCentresForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

	}
	private: System::Void ConsultaCentresForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
