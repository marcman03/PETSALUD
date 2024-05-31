#pragma once

#include "Ordinador.h"
#include "PassarellaClinica.h"
#include "CercadoraClinica.h"
#include "PassarellaCentre.h"
#include "CercadoraCentre.h"
#include "TxConsultarCentres.h"
#include "TxCrearCentre.h"
#include "TxEliminaCentre.h"
#include "TxModificaCentre.h"

namespace PetSalut {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for ConsultaCentresForm
	/// </summary>
	public ref class ConsultaCentresForm : public System::Windows::Forms::Form
	{



	public:

		//Declaració del BindingSource
		List<String^>^ centresList = gcnew List<String^>();
		BindingSource^ bs = gcnew BindingSource();

		//Declaració de ordinador Usuari
		Ordinador^ ord = Ordinador::getInstance();
		PassarellaUsuari^ usuari = ord->obteUsuari();


	private: System::Windows::Forms::Label^ ubicaciolabel;
	private: System::Windows::Forms::TextBox^ ubicaciotextBox;
		   PassarellaClinica^ clinica = CercadoraClinica::cercaClinica(usuari->getUsername());
	public:
		ConsultaCentresForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			// Var definition
			bs->DataSource = centresList;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ConsultaCentresForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ tornaButton;
	private: System::Windows::Forms::Button^ deleteButton;
	private: System::Windows::Forms::Button^ modificaButton;
	private: System::Windows::Forms::ListBox^ centresListBox;

	protected:
	protected:
	private: System::Windows::Forms::Panel^ group;
	private: System::Windows::Forms::TextBox^ telefonTextBox;
	private: System::Windows::Forms::TextBox^ nomTextBox;
	private: System::Windows::Forms::TextBox^ idTextBox;
	private: System::Windows::Forms::Label^ clinicaLabel;
	private: System::Windows::Forms::Label^ telefonLabel;
	private: System::Windows::Forms::Label^ nomLabel;
	private: System::Windows::Forms::Label^ idLabel;
	private: System::Windows::Forms::TextBox^ clinicaTextBox;
	private: System::Windows::Forms::Button^ afegeixButton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ConsultaCentresForm::typeid));
			this->tornaButton = (gcnew System::Windows::Forms::Button());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->modificaButton = (gcnew System::Windows::Forms::Button());
			this->centresListBox = (gcnew System::Windows::Forms::ListBox());
			this->group = (gcnew System::Windows::Forms::Panel());
			this->ubicaciotextBox = (gcnew System::Windows::Forms::TextBox());
			this->ubicaciolabel = (gcnew System::Windows::Forms::Label());
			this->clinicaTextBox = (gcnew System::Windows::Forms::TextBox());
			this->telefonTextBox = (gcnew System::Windows::Forms::TextBox());
			this->nomTextBox = (gcnew System::Windows::Forms::TextBox());
			this->idTextBox = (gcnew System::Windows::Forms::TextBox());
			this->clinicaLabel = (gcnew System::Windows::Forms::Label());
			this->telefonLabel = (gcnew System::Windows::Forms::Label());
			this->nomLabel = (gcnew System::Windows::Forms::Label());
			this->idLabel = (gcnew System::Windows::Forms::Label());
			this->afegeixButton = (gcnew System::Windows::Forms::Button());
			this->group->SuspendLayout();
			this->SuspendLayout();
			// 
			// tornaButton
			// 
			this->tornaButton->Location = System::Drawing::Point(37, 476);
			this->tornaButton->Name = L"tornaButton";
			this->tornaButton->Size = System::Drawing::Size(119, 41);
			this->tornaButton->TabIndex = 0;
			this->tornaButton->Text = L"Tornar";
			this->tornaButton->UseVisualStyleBackColor = true;
			// 
			// deleteButton
			// 
			this->deleteButton->Location = System::Drawing::Point(585, 210);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(125, 42);
			this->deleteButton->TabIndex = 1;
			this->deleteButton->Text = L"Esborra Centre";
			this->deleteButton->UseVisualStyleBackColor = true;
			this->deleteButton->Click += gcnew System::EventHandler(this, &ConsultaCentresForm::deleteButton_Click);
			// 
			// modificaButton
			// 
			this->modificaButton->Location = System::Drawing::Point(585, 153);
			this->modificaButton->Name = L"modificaButton";
			this->modificaButton->Size = System::Drawing::Size(115, 42);
			this->modificaButton->TabIndex = 2;
			this->modificaButton->Text = L"Modifica Centre";
			this->modificaButton->UseVisualStyleBackColor = true;
			this->modificaButton->Click += gcnew System::EventHandler(this, &ConsultaCentresForm::modificaButton_Click);
			// 
			// centresListBox
			// 
			this->centresListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->centresListBox->FormattingEnabled = true;
			this->centresListBox->ItemHeight = 16;
			this->centresListBox->Location = System::Drawing::Point(37, 91);
			this->centresListBox->Name = L"centresListBox";
			this->centresListBox->Size = System::Drawing::Size(191, 276);
			this->centresListBox->TabIndex = 3;
			this->centresListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &ConsultaCentresForm::listBoxCentres_SelectedIndexChanged);
			// 
			// group
			// 
			this->group->Controls->Add(this->ubicaciotextBox);
			this->group->Controls->Add(this->ubicaciolabel);
			this->group->Controls->Add(this->clinicaTextBox);
			this->group->Controls->Add(this->telefonTextBox);
			this->group->Controls->Add(this->nomTextBox);
			this->group->Controls->Add(this->idTextBox);
			this->group->Controls->Add(this->clinicaLabel);
			this->group->Controls->Add(this->telefonLabel);
			this->group->Controls->Add(this->nomLabel);
			this->group->Controls->Add(this->idLabel);
			this->group->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->group->Location = System::Drawing::Point(253, 94);
			this->group->Name = L"group";
			this->group->Size = System::Drawing::Size(326, 273);
			this->group->TabIndex = 4;
			// 
			// ubicaciotextBox
			// 
			this->ubicaciotextBox->Location = System::Drawing::Point(161, 222);
			this->ubicaciotextBox->Name = L"ubicaciotextBox";
			this->ubicaciotextBox->Size = System::Drawing::Size(99, 22);
			this->ubicaciotextBox->TabIndex = 9;
			// 
			// ubicaciolabel
			// 
			this->ubicaciolabel->AutoSize = true;
			this->ubicaciolabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ubicaciolabel->Location = System::Drawing::Point(67, 228);
			this->ubicaciolabel->Name = L"ubicaciolabel";
			this->ubicaciolabel->Size = System::Drawing::Size(66, 16);
			this->ubicaciolabel->TabIndex = 8;
			this->ubicaciolabel->Text = L"ubicació";
			// 
			// clinicaTextBox
			// 
			this->clinicaTextBox->Enabled = false;
			this->clinicaTextBox->Location = System::Drawing::Point(161, 170);
			this->clinicaTextBox->Name = L"clinicaTextBox";
			this->clinicaTextBox->Size = System::Drawing::Size(99, 22);
			this->clinicaTextBox->TabIndex = 7;
			// 
			// telefonTextBox
			// 
			this->telefonTextBox->Location = System::Drawing::Point(161, 113);
			this->telefonTextBox->Name = L"telefonTextBox";
			this->telefonTextBox->Size = System::Drawing::Size(99, 22);
			this->telefonTextBox->TabIndex = 6;
			// 
			// nomTextBox
			// 
			this->nomTextBox->Location = System::Drawing::Point(161, 59);
			this->nomTextBox->Name = L"nomTextBox";
			this->nomTextBox->Size = System::Drawing::Size(99, 22);
			this->nomTextBox->TabIndex = 5;
			// 
			// idTextBox
			// 
			this->idTextBox->AcceptsTab = true;
			this->idTextBox->Enabled = false;
			this->idTextBox->Location = System::Drawing::Point(161, 10);
			this->idTextBox->Name = L"idTextBox";
			this->idTextBox->Size = System::Drawing::Size(99, 22);
			this->idTextBox->TabIndex = 4;
			// 
			// clinicaLabel
			// 
			this->clinicaLabel->AutoSize = true;
			this->clinicaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clinicaLabel->Location = System::Drawing::Point(79, 170);
			this->clinicaLabel->Name = L"clinicaLabel";
			this->clinicaLabel->Size = System::Drawing::Size(52, 16);
			this->clinicaLabel->TabIndex = 3;
			this->clinicaLabel->Text = L"clinica";
			// 
			// telefonLabel
			// 
			this->telefonLabel->AutoSize = true;
			this->telefonLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->telefonLabel->Location = System::Drawing::Point(79, 116);
			this->telefonLabel->Name = L"telefonLabel";
			this->telefonLabel->Size = System::Drawing::Size(54, 16);
			this->telefonLabel->TabIndex = 2;
			this->telefonLabel->Text = L"telefon";
			// 
			// nomLabel
			// 
			this->nomLabel->AutoSize = true;
			this->nomLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nomLabel->Location = System::Drawing::Point(97, 59);
			this->nomLabel->Name = L"nomLabel";
			this->nomLabel->Size = System::Drawing::Size(36, 16);
			this->nomLabel->TabIndex = 1;
			this->nomLabel->Text = L"nom";
			// 
			// idLabel
			// 
			this->idLabel->AutoSize = true;
			this->idLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idLabel->Location = System::Drawing::Point(52, 13);
			this->idLabel->Name = L"idLabel";
			this->idLabel->Size = System::Drawing::Size(81, 16);
			this->idLabel->TabIndex = 0;
			this->idLabel->Text = L"numero_ID";
			// 
			// afegeixButton
			// 
			this->afegeixButton->Location = System::Drawing::Point(585, 94);
			this->afegeixButton->Name = L"afegeixButton";
			this->afegeixButton->Size = System::Drawing::Size(125, 42);
			this->afegeixButton->TabIndex = 5;
			this->afegeixButton->Text = L"Afegeix Nou Centre";
			this->afegeixButton->UseVisualStyleBackColor = true;
			this->afegeixButton->Click += gcnew System::EventHandler(this, &ConsultaCentresForm::afegeixButton_Click);
			// 
			// ConsultaCentresForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(755, 549);
			this->Controls->Add(this->afegeixButton);
			this->Controls->Add(this->group);
			this->Controls->Add(this->centresListBox);
			this->Controls->Add(this->modificaButton);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->tornaButton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ConsultaCentresForm";
			this->Text = L"PETSALUT";
			this->Load += gcnew System::EventHandler(this, &ConsultaCentresForm::ConsultaCentresForm_Load);
			this->group->ResumeLayout(false);
			this->group->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBoxCentres_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		ListBox^ listBox = safe_cast<ListBox^>(sender);
		String^ selectedText = listBox->SelectedItem->ToString();

		int startIndex = selectedText->IndexOf("(") + 1;
		int endIndex = selectedText->IndexOf(")");
		String^ numero_ID_str = selectedText->Substring(startIndex, endIndex - startIndex);

		int numero_ID;

		if (Int32::TryParse(numero_ID_str, numero_ID))
		{
			// Successfully parsed numero_ID. You can use it here.
			idTextBox->Text = numero_ID_str;
			CercadoraCentre^ cercadora = gcnew CercadoraCentre();
			PassarellaCentre^ centre = cercadora->cercaCentre(numero_ID);
			nomTextBox->Text = centre->Nom;
			telefonTextBox->Text = centre->Telefon;
			clinicaTextBox->Text = centre->Clinica;
			ubicaciotextBox->Text = centre->Ubicacio;
		}
		else
		{
			// Failed to parse numero_ID. Handle the error here.
		}
	}
	private: System::Void ConsultaCentresForm_Load(System::Object^ sender, System::EventArgs^ e) {
		TxConsultarCentres^ consultaCentres = TxConsultarCentres::crear(clinica);
		List<int>^ centres = consultaCentres->ObtenirResultat();

		CercadoraCentre^ cercadora = gcnew CercadoraCentre();

		clinicaTextBox->Text = clinica->Username;

		if (centres != nullptr) {
			for each (int centreID in centres)
			{
				PassarellaCentre^ centre = cercadora->cercaCentre(centreID);
				int numero_ID = centre->Numero_ID;
				String^ nom = centre->Nom;

				String^ infoCentre = nom + " (" + numero_ID.ToString() + ")";
				centresList->Add(infoCentre);
				centresListBox->DataSource = bs;
				bs->ResetBindings(false);
			}
		}
	}
	private: System::Void afegeixButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nom = nomTextBox->Text;
		String^ telefon = telefonTextBox->Text;
		String^ nomClinica = clinica->Username;
		String^ ubicacio = ubicaciotextBox->Text;
		TxCrearCentre^ nouCentre = TxCrearCentre::crear(nom, telefon, nomClinica, ubicacio);

		try {
			nouCentre->ejecutar();
		}
		catch (Exception^ ex) {
			throw gcnew Exception("No s'ha pogut afegir el item a la BDD");
		}
		finally
		{
			String^ infoCentre = nom + " (" + nouCentre->Numero_ID.ToString() + ")";
			centresList->Add(infoCentre);
			centresListBox->DataSource = bs;
			bs->ResetBindings(false);
		}
	}
	private: System::Void deleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int numero_ID = Convert::ToInt32(idTextBox->Text);

		try {
			TxEliminaCentre::crear()->ejecutar(numero_ID);

		}
		catch (Exception^ ex) {
			throw gcnew Exception("No s'ha pogut esborrar l'item");
		}
		finally {
			// Remove the selected item from the ListBox
			int selectedIndex = centresListBox->SelectedIndex;
			if (selectedIndex != -1) {
				centresList->RemoveAt(selectedIndex);
				bs->ResetBindings(false);
			}
		}




	}
	private: System::Void modificaButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int numero_ID = Convert::ToInt32(idTextBox->Text);
		String^ nom = nomTextBox->Text;
		String^ telefon = telefonTextBox->Text;
		String^ nomClinica = clinica->Username;
		String^ ubicacio = ubicaciotextBox->Text;
		TxModificaCentre^ centreModificat = TxModificaCentre::prepara(numero_ID, nom, telefon, nomClinica, ubicacio);
		try {
			centreModificat->executa();
		}
		catch (Exception^ ex) {
			throw gcnew Exception("No s'ha pogut modificar l'item");
		}
		finally {
			// Update the selected item in the ListBox
			int selectedIndex = centresListBox->SelectedIndex;
			if (selectedIndex != -1) {
				String^ updatedInfoCentre = nom + " (" + numero_ID.ToString() + ")";
				centresList[selectedIndex] = updatedInfoCentre;
				bs->ResetBindings(false);
			}
		}

	}
	};
}
