#pragma once

#include "ClinicaAlta.h"

namespace CppCLRWinFormsProject {

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
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->cliniquesToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(568, 42);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// cliniquesToolStripMenuItem
			// 
			this->cliniquesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->altaToolStripMenuItem });
			this->cliniquesToolStripMenuItem->Name = L"cliniquesToolStripMenuItem";
			this->cliniquesToolStripMenuItem->Size = System::Drawing::Size(132, 38);
			this->cliniquesToolStripMenuItem->Text = L"Cliniques";
			// 
			// altaToolStripMenuItem
			// 
			this->altaToolStripMenuItem->Name = L"altaToolStripMenuItem";
			this->altaToolStripMenuItem->Size = System::Drawing::Size(359, 44);
			this->altaToolStripMenuItem->Text = L"Alta";
			this->altaToolStripMenuItem->CheckedChanged += gcnew System::EventHandler(this, &Form1::altaToolStripMenuItem_CheckedChanged);
			this->altaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::Form1_Load);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(568, 502);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		

		
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void altaToolStripMenuItem_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
};
}