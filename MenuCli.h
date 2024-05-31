#pragma once
#include "InfoCli.h"
#include "ModCli.h"
#include "TxEsborraUsu.h"

namespace PetSalut {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuCli
	/// </summary>
	public ref class MenuCli : public System::Windows::Forms::Form
	{
	public:
		MenuCli(void)
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
		~MenuCli()
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

	private: System::Windows::Forms::Button^ Cancela_Tanca;


	private: System::Windows::Forms::Button^ Accepta_Tanca;
	private: System::Windows::Forms::Label^ LabelTancaSessio;
	private: System::Windows::Forms::Panel^ tancaPanel;
	private: System::Windows::Forms::Panel^ eliminaPanel;


	private: System::Windows::Forms::Button^ eliminar_compte_acceptar;
	private: System::Windows::Forms::Label^ labelelimina;
	private: System::Windows::Forms::Button^ cancelar_eliminar_compte;
	private: System::Windows::Forms::TextBox^ contrasenyaelimina;

























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuCli::typeid));
			this->ConsultaButton = (gcnew System::Windows::Forms::Button());
			this->ModificarButton = (gcnew System::Windows::Forms::Button());
			this->TancarButton = (gcnew System::Windows::Forms::Button());
			this->EliminarButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Cancela_Tanca = (gcnew System::Windows::Forms::Button());
			this->Accepta_Tanca = (gcnew System::Windows::Forms::Button());
			this->LabelTancaSessio = (gcnew System::Windows::Forms::Label());
			this->tancaPanel = (gcnew System::Windows::Forms::Panel());
			this->eliminaPanel = (gcnew System::Windows::Forms::Panel());
			this->eliminar_compte_acceptar = (gcnew System::Windows::Forms::Button());
			this->labelelimina = (gcnew System::Windows::Forms::Label());
			this->cancelar_eliminar_compte = (gcnew System::Windows::Forms::Button());
			this->contrasenyaelimina = (gcnew System::Windows::Forms::TextBox());
			this->tancaPanel->SuspendLayout();
			this->eliminaPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// ConsultaButton
			// 
			this->ConsultaButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ConsultaButton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ConsultaButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->ConsultaButton->Location = System::Drawing::Point(292, 150);
			this->ConsultaButton->Margin = System::Windows::Forms::Padding(2);
			this->ConsultaButton->Name = L"ConsultaButton";
			this->ConsultaButton->Size = System::Drawing::Size(262, 41);
			this->ConsultaButton->TabIndex = 0;
			this->ConsultaButton->Text = L"Consultar Informacio";
			this->ConsultaButton->UseVisualStyleBackColor = true;
			this->ConsultaButton->Click += gcnew System::EventHandler(this, &MenuCli::Consulta_Click);
			// 
			// ModificarButton
			// 
			this->ModificarButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->ModificarButton->Location = System::Drawing::Point(292, 216);
			this->ModificarButton->Margin = System::Windows::Forms::Padding(2);
			this->ModificarButton->Name = L"ModificarButton";
			this->ModificarButton->Size = System::Drawing::Size(262, 41);
			this->ModificarButton->TabIndex = 1;
			this->ModificarButton->Text = L"Modificar Informacio";
			this->ModificarButton->UseVisualStyleBackColor = true;
			this->ModificarButton->Click += gcnew System::EventHandler(this, &MenuCli::Modifica_Click);
			// 
			// TancarButton
			// 
			this->TancarButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->TancarButton->Location = System::Drawing::Point(292, 280);
			this->TancarButton->Margin = System::Windows::Forms::Padding(2);
			this->TancarButton->Name = L"TancarButton";
			this->TancarButton->Size = System::Drawing::Size(262, 41);
			this->TancarButton->TabIndex = 2;
			this->TancarButton->Text = L"Tancar Sessio";
			this->TancarButton->UseVisualStyleBackColor = true;
			this->TancarButton->Click += gcnew System::EventHandler(this, &MenuCli::Tanca_Click);
			// 
			// EliminarButton
			// 
			this->EliminarButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->EliminarButton->Location = System::Drawing::Point(292, 340);
			this->EliminarButton->Margin = System::Windows::Forms::Padding(2);
			this->EliminarButton->Name = L"EliminarButton";
			this->EliminarButton->Size = System::Drawing::Size(262, 41);
			this->EliminarButton->TabIndex = 3;
			this->EliminarButton->Text = L"Eliminar Clinica";
			this->EliminarButton->UseVisualStyleBackColor = true;
			this->EliminarButton->Click += gcnew System::EventHandler(this, &MenuCli::Elimina_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(338, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 31);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Gestió Clinica";
			// 
			// Cancela_Tanca
			// 
			this->Cancela_Tanca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Cancela_Tanca->Location = System::Drawing::Point(8, 145);
			this->Cancela_Tanca->Margin = System::Windows::Forms::Padding(2);
			this->Cancela_Tanca->Name = L"Cancela_Tanca";
			this->Cancela_Tanca->Size = System::Drawing::Size(273, 58);
			this->Cancela_Tanca->TabIndex = 6;
			this->Cancela_Tanca->Text = L"Cancelar";
			this->Cancela_Tanca->UseVisualStyleBackColor = true;
			this->Cancela_Tanca->Click += gcnew System::EventHandler(this, &MenuCli::Cancela_Tanca_Click);
			// 
			// Accepta_Tanca
			// 
			this->Accepta_Tanca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->Accepta_Tanca->Location = System::Drawing::Point(345, 145);
			this->Accepta_Tanca->Margin = System::Windows::Forms::Padding(2);
			this->Accepta_Tanca->Name = L"Accepta_Tanca";
			this->Accepta_Tanca->Size = System::Drawing::Size(280, 58);
			this->Accepta_Tanca->TabIndex = 7;
			this->Accepta_Tanca->Text = L"Acceptar";
			this->Accepta_Tanca->UseVisualStyleBackColor = true;
			this->Accepta_Tanca->Click += gcnew System::EventHandler(this, &MenuCli::Accepta_Tanca_Click);
			// 
			// LabelTancaSessio
			// 
			this->LabelTancaSessio->BackColor = System::Drawing::Color::Transparent;
			this->LabelTancaSessio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->LabelTancaSessio->Location = System::Drawing::Point(72, 38);
			this->LabelTancaSessio->Name = L"LabelTancaSessio";
			this->LabelTancaSessio->Size = System::Drawing::Size(492, 63);
			this->LabelTancaSessio->TabIndex = 8;
			this->LabelTancaSessio->Text = L"Estas segur de que vols tancar la sessió actual en aquest dispositu\?";
			this->LabelTancaSessio->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// tancaPanel
			// 
			this->tancaPanel->Controls->Add(this->LabelTancaSessio);
			this->tancaPanel->Controls->Add(this->Accepta_Tanca);
			this->tancaPanel->Controls->Add(this->Cancela_Tanca);
			this->tancaPanel->Location = System::Drawing::Point(95, 138);
			this->tancaPanel->Name = L"tancaPanel";
			this->tancaPanel->Size = System::Drawing::Size(646, 224);
			this->tancaPanel->TabIndex = 16;
			this->tancaPanel->Visible = false;
			// 
			// eliminaPanel
			// 
			this->eliminaPanel->Controls->Add(this->eliminar_compte_acceptar);
			this->eliminaPanel->Controls->Add(this->labelelimina);
			this->eliminaPanel->Controls->Add(this->cancelar_eliminar_compte);
			this->eliminaPanel->Controls->Add(this->contrasenyaelimina);
			this->eliminaPanel->Location = System::Drawing::Point(95, 138);
			this->eliminaPanel->Name = L"eliminaPanel";
			this->eliminaPanel->Size = System::Drawing::Size(646, 238);
			this->eliminaPanel->TabIndex = 16;
			this->eliminaPanel->Visible = false;
			// 
			// eliminar_compte_acceptar
			// 
			this->eliminar_compte_acceptar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->eliminar_compte_acceptar->Location = System::Drawing::Point(316, 153);
			this->eliminar_compte_acceptar->Margin = System::Windows::Forms::Padding(2);
			this->eliminar_compte_acceptar->Name = L"eliminar_compte_acceptar";
			this->eliminar_compte_acceptar->Size = System::Drawing::Size(280, 58);
			this->eliminar_compte_acceptar->TabIndex = 11;
			this->eliminar_compte_acceptar->Text = L"Acceptar";
			this->eliminar_compte_acceptar->UseVisualStyleBackColor = true;
			this->eliminar_compte_acceptar->Click += gcnew System::EventHandler(this, &MenuCli::eliminar_compte_acceptar_Click);
			// 
			// labelelimina
			// 
			this->labelelimina->BackColor = System::Drawing::Color::Transparent;
			this->labelelimina->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->labelelimina->Location = System::Drawing::Point(105, 32);
			this->labelelimina->Name = L"labelelimina";
			this->labelelimina->Size = System::Drawing::Size(479, 34);
			this->labelelimina->TabIndex = 12;
			this->labelelimina->Text = L"Per eliminar el compte introdueixi la contrasenya";
			this->labelelimina->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// cancelar_eliminar_compte
			// 
			this->cancelar_eliminar_compte->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->cancelar_eliminar_compte->Location = System::Drawing::Point(15, 153);
			this->cancelar_eliminar_compte->Margin = System::Windows::Forms::Padding(2);
			this->cancelar_eliminar_compte->Name = L"cancelar_eliminar_compte";
			this->cancelar_eliminar_compte->Size = System::Drawing::Size(273, 58);
			this->cancelar_eliminar_compte->TabIndex = 10;
			this->cancelar_eliminar_compte->Text = L"Cancelar";
			this->cancelar_eliminar_compte->UseVisualStyleBackColor = true;
			this->cancelar_eliminar_compte->Click += gcnew System::EventHandler(this, &MenuCli::cancelar_eliminar_compte_Click);
			// 
			// contrasenyaelimina
			// 
			this->contrasenyaelimina->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->contrasenyaelimina->Location = System::Drawing::Point(108, 82);
			this->contrasenyaelimina->Name = L"contrasenyaelimina";
			this->contrasenyaelimina->Size = System::Drawing::Size(422, 29);
			this->contrasenyaelimina->TabIndex = 13;
			// 
			// MenuCli
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(886, 531);
			this->Controls->Add(this->eliminaPanel);
			this->Controls->Add(this->tancaPanel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->EliminarButton);
			this->Controls->Add(this->TancarButton);
			this->Controls->Add(this->ModificarButton);
			this->Controls->Add(this->ConsultaButton);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MenuCli";
			this->Text = L"PETSALUT";
			this->tancaPanel->ResumeLayout(false);
			this->eliminaPanel->ResumeLayout(false);
			this->eliminaPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

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
		this->tancaPanel->Visible = false;
	}
	private: System::Void Accepta_Tanca_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

	}


	private: System::Void Elimina_Click(System::Object^ sender, System::EventArgs^ e) {
		this->eliminaPanel->Visible = true;
		this->tancaPanel->Visible = false;

	}
	private: System::Void Consulta_Click(System::Object^ sender, System::EventArgs^ e) {

		//Redirigir al form de infoCli

		PetSalut::InfoCli^ infoCli = gcnew PetSalut::InfoCli();

		this->Visible = false;

		infoCli->ShowDialog();

		this->Visible = true;


	}
	private: System::Void Modifica_Click(System::Object^ sender, System::EventArgs^ e) {

		//Redirigir al form de modificaCli

		PetSalut::ModCli^ modCli = gcnew PetSalut::ModCli();

		this->Visible = false;

		modCli->ShowDialog();

		this->Visible = true;

	}
	private: System::Void Tanca_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tancaPanel->Visible = true;
		this->eliminaPanel->Visible = false;
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
		this->Close();  // Cerrar el formulario actual (RegCli)


	}
	private: System::Void cancelar_eliminar_compte_Click(System::Object^ sender, System::EventArgs^ e) {
		this->eliminaPanel->Visible = false;
	}
};
}