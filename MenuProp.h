#pragma once
#include "InfoProp.h"
#include "ModProp.h"
#include "TxEsborraUsu.h"

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
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::PictureBox^ TancaSessioBox;
	private: System::Windows::Forms::Button^ Cancela_Tanca;


	private: System::Windows::Forms::Button^ Accepta_Tanca;
	private: System::Windows::Forms::Label^ LabelTancaSessio;





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
			this->ConsultaButton = (gcnew System::Windows::Forms::Button());
			this->ModificarButton = (gcnew System::Windows::Forms::Button());
			this->TancarButton = (gcnew System::Windows::Forms::Button());
			this->EliminarButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TancaSessioBox = (gcnew System::Windows::Forms::PictureBox());
			this->Cancela_Tanca = (gcnew System::Windows::Forms::Button());
			this->Accepta_Tanca = (gcnew System::Windows::Forms::Button());
			this->LabelTancaSessio = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TancaSessioBox))->BeginInit();
			this->SuspendLayout();
			// 
			// ConsultaButton
			// 
			this->ConsultaButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConsultaButton->Location = System::Drawing::Point(431, 157);
			this->ConsultaButton->Margin = System::Windows::Forms::Padding(2);
			this->ConsultaButton->Name = L"ConsultaButton";
			this->ConsultaButton->Size = System::Drawing::Size(311, 58);
			this->ConsultaButton->TabIndex = 0;
			this->ConsultaButton->Text = L"Consultar Informació";
			this->ConsultaButton->UseVisualStyleBackColor = true;
			this->ConsultaButton->Click += gcnew System::EventHandler(this, &MenuProp::Consulta_Click);
			// 
			// ModificarButton
			// 
			this->ModificarButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ModificarButton->Location = System::Drawing::Point(431, 234);
			this->ModificarButton->Margin = System::Windows::Forms::Padding(2);
			this->ModificarButton->Name = L"ModificarButton";
			this->ModificarButton->Size = System::Drawing::Size(311, 58);
			this->ModificarButton->TabIndex = 1;
			this->ModificarButton->Text = L"Modificar Informació";
			this->ModificarButton->UseVisualStyleBackColor = true;
			this->ModificarButton->Click += gcnew System::EventHandler(this, &MenuProp::Modifica_Click);
			// 
			// TancarButton
			// 
			this->TancarButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TancarButton->Location = System::Drawing::Point(431, 308);
			this->TancarButton->Margin = System::Windows::Forms::Padding(2);
			this->TancarButton->Name = L"TancarButton";
			this->TancarButton->Size = System::Drawing::Size(311, 58);
			this->TancarButton->TabIndex = 2;
			this->TancarButton->Text = L"Tancar Sessió";
			this->TancarButton->UseVisualStyleBackColor = true;
			this->TancarButton->Click += gcnew System::EventHandler(this, &MenuProp::Tanca_Click);
			// 
			// EliminarButton
			// 
			this->EliminarButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EliminarButton->Location = System::Drawing::Point(431, 381);
			this->EliminarButton->Margin = System::Windows::Forms::Padding(2);
			this->EliminarButton->Name = L"EliminarButton";
			this->EliminarButton->Size = System::Drawing::Size(311, 58);
			this->EliminarButton->TabIndex = 3;
			this->EliminarButton->Text = L"Eliminar Propietari";
			this->EliminarButton->UseVisualStyleBackColor = true;
			this->EliminarButton->Click += gcnew System::EventHandler(this, &MenuProp::Elimina_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(368, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(430, 44);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Gestionar Propietari";
			// 
			// TancaSessioBox
			// 
			this->TancaSessioBox->BackColor = System::Drawing::SystemColors::Control;
			this->TancaSessioBox->Location = System::Drawing::Point(301, 157);
			this->TancaSessioBox->Name = L"TancaSessioBox";
			this->TancaSessioBox->Size = System::Drawing::Size(588, 288);
			this->TancaSessioBox->TabIndex = 5;
			this->TancaSessioBox->TabStop = false;
			this->TancaSessioBox->Visible = false;
			// 
			// Cancela_Tanca
			// 
			this->Cancela_Tanca->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancela_Tanca->Location = System::Drawing::Point(316, 381);
			this->Cancela_Tanca->Margin = System::Windows::Forms::Padding(2);
			this->Cancela_Tanca->Name = L"Cancela_Tanca";
			this->Cancela_Tanca->Size = System::Drawing::Size(273, 58);
			this->Cancela_Tanca->TabIndex = 6;
			this->Cancela_Tanca->Text = L"Cancelar";
			this->Cancela_Tanca->UseVisualStyleBackColor = true;
			this->Cancela_Tanca->Visible = false;
			this->Cancela_Tanca->Click += gcnew System::EventHandler(this, &MenuProp::Cancela_Tanca_Click);
			// 
			// Accepta_Tanca
			// 
			this->Accepta_Tanca->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Accepta_Tanca->Location = System::Drawing::Point(593, 381);
			this->Accepta_Tanca->Margin = System::Windows::Forms::Padding(2);
			this->Accepta_Tanca->Name = L"Accepta_Tanca";
			this->Accepta_Tanca->Size = System::Drawing::Size(280, 58);
			this->Accepta_Tanca->TabIndex = 7;
			this->Accepta_Tanca->Text = L"Acceptar";
			this->Accepta_Tanca->UseVisualStyleBackColor = true;
			this->Accepta_Tanca->Visible = false;
			this->Accepta_Tanca->Click += gcnew System::EventHandler(this, &MenuProp::Accepta_Tanca_Click);
			// 
			// LabelTancaSessio
			// 
			this->LabelTancaSessio->BackColor = System::Drawing::SystemColors::Control;
			this->LabelTancaSessio->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelTancaSessio->Location = System::Drawing::Point(343, 196);
			this->LabelTancaSessio->Name = L"LabelTancaSessio";
			this->LabelTancaSessio->Size = System::Drawing::Size(495, 110);
			this->LabelTancaSessio->TabIndex = 8;
			this->LabelTancaSessio->Text = L"Estas segur de que vols tancar la sessió actual en aquest dispositu\?";
			this->LabelTancaSessio->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->LabelTancaSessio->Visible = false;
			// 
			// MenuProp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1184, 661);
			this->Controls->Add(this->LabelTancaSessio);
			this->Controls->Add(this->Accepta_Tanca);
			this->Controls->Add(this->Cancela_Tanca);
			this->Controls->Add(this->TancaSessioBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->EliminarButton);
			this->Controls->Add(this->TancarButton);
			this->Controls->Add(this->ModificarButton);
			this->Controls->Add(this->ConsultaButton);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MenuProp";
			this->Text = L"PETSALUT";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TancaSessioBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ac_ts_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	// Cambiar el color de fondo del botón cuando el mouse entra
	//Cancela_Tanca->BackColor = System::Drawing::Color::Red; // Cambiar a cualquier color que desees
}

	   // Manejador de eventos para el evento MouseLeave del botón
private: System::Void ac_ts_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	// Restaurar el color de fondo del botón cuando el mouse sale
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

	//pedir la constraseña al usuario
	//Pulsar aceptar 
		// En el boton de acceptar hacer lo siguiente (mas o menos):
		
		/*
			TxEsborraUsu esbU;

			try {
				esbU.crear(coger la contrasenya del input que se ha escrito)
				esbU.executar();
			}

			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}

			Ordinador^ ord = Ordinador::getInstance();
			ord->tancaSessio();

		*/

	//Volver a la pagina principal
	/*
	this->Close();  // Cerrar el formulario actual (RegProp)
	CppCLRWinFormsProject::Form^ formPrincipal = gcnew CppCLRWinFormsProject::Form1();  // Crear una instancia del formulario principal (Form1)
	formPrincipal->Show();
	*/

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
};
}
