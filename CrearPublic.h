#pragma once

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
			this->label1->Location = System::Drawing::Point(412, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(330, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Crear Event Public";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 28));
			this->label2->Location = System::Drawing::Point(440, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(262, 54);
			this->label2->TabIndex = 2;
			this->label2->Text = L"PETSALUT";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
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
			this->panel1->Location = System::Drawing::Point(26, 115);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1134, 537);
			this->panel1->TabIndex = 3;
			// 
			// dataBox
			// 
			this->dataBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataBox->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->dataBox->Location = System::Drawing::Point(556, 278);
			this->dataBox->Name = L"dataBox";
			this->dataBox->Size = System::Drawing::Size(440, 24);
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
			this->horaBox->Location = System::Drawing::Point(556, 392);
			this->horaBox->Name = L"horaBox";
			this->horaBox->Size = System::Drawing::Size(440, 27);
			this->horaBox->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->label8->Location = System::Drawing::Point(551, 360);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 26);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Hora";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->label7->Location = System::Drawing::Point(551, 240);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 26);
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
			this->tipusBox->Location = System::Drawing::Point(556, 173);
			this->tipusBox->Name = L"tipusBox";
			this->tipusBox->Size = System::Drawing::Size(440, 27);
			this->tipusBox->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->label6->Location = System::Drawing::Point(551, 135);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 26);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Tipus";
			// 
			// tornarButton
			// 
			this->tornarButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->tornarButton->Location = System::Drawing::Point(18, 444);
			this->tornarButton->Name = L"tornarButton";
			this->tornarButton->Size = System::Drawing::Size(177, 76);
			this->tornarButton->TabIndex = 11;
			this->tornarButton->Text = L"Tornar";
			this->tornarButton->UseVisualStyleBackColor = true;
			this->tornarButton->Click += gcnew System::EventHandler(this, &CrearPublic::tornarButton_Click);
			// 
			// publicarButton
			// 
			this->publicarButton->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->publicarButton->Location = System::Drawing::Point(939, 444);
			this->publicarButton->Name = L"publicarButton";
			this->publicarButton->Size = System::Drawing::Size(177, 76);
			this->publicarButton->TabIndex = 12;
			this->publicarButton->Text = L"Publicar";
			this->publicarButton->UseVisualStyleBackColor = true;
			// 
			// ubicacioBox
			// 
			this->ubicacioBox->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->ubicacioBox->Location = System::Drawing::Point(556, 62);
			this->ubicacioBox->Name = L"ubicacioBox";
			this->ubicacioBox->Size = System::Drawing::Size(440, 24);
			this->ubicacioBox->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->label5->Location = System::Drawing::Point(551, 24);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 26);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Ubicacio";
			// 
			// descripcioBox
			// 
			this->descripcioBox->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->descripcioBox->Location = System::Drawing::Point(18, 173);
			this->descripcioBox->Multiline = true;
			this->descripcioBox->Name = L"descripcioBox";
			this->descripcioBox->Size = System::Drawing::Size(440, 246);
			this->descripcioBox->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->label4->Location = System::Drawing::Point(13, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(254, 26);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Descripció de l\'event";
			// 
			// titolBox
			// 
			this->titolBox->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10));
			this->titolBox->Location = System::Drawing::Point(18, 62);
			this->titolBox->Name = L"titolBox";
			this->titolBox->Size = System::Drawing::Size(440, 24);
			this->titolBox->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 14));
			this->label3->Location = System::Drawing::Point(13, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(185, 26);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Titol de l\'event";
			// 
			// CrearPublic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1184, 661);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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
};
}
