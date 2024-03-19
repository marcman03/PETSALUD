#pragma once

#include "ClinicaAlta.h"

namespace PetSalut {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// TEST GIT N� 1
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ cliniquesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ altaToolStripMenuItem;
	protected:

	protected:

	protected:

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->cliniquesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->altaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->cliniquesToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(3, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(487, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// cliniquesToolStripMenuItem
			// 
			this->cliniquesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->altaToolStripMenuItem });
			this->cliniquesToolStripMenuItem->Name = L"cliniquesToolStripMenuItem";
			this->cliniquesToolStripMenuItem->Size = System::Drawing::Size(68, 22);
			this->cliniquesToolStripMenuItem->Text = L"Cliniques";
			// 
			// altaToolStripMenuItem
			// 
			this->altaToolStripMenuItem->Name = L"altaToolStripMenuItem";
			this->altaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->altaToolStripMenuItem->Text = L"Alta";
			this->altaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::clinicaAlta_Clicked);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 379);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void clinicaAlta_Clicked(System::Object^ sender, System::EventArgs^ e) {
		CinicaAlta^ alta = gcnew CinicaAlta();

		alta->TopLevel = false;
		alta->AutoScroll = true;
		alta->Dock = DockStyle::Fill;

		this->Controls->Add(alta);
		alta->Show();
	}
	};
}