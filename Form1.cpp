#include "pch.h"
#include "Form1.h"

System::Void PetSalut::Form1::clinicaAlta_Clicked(System::Object^ sender, System::EventArgs^ e)
{
	CinicaAlta^ alta = gcnew CinicaAlta();

	alta->TopLevel = false;
	alta->AutoScroll = true;
	alta->Dock = DockStyle::Fill;

	this->Controls->Add(alta);
	alta->Show();
}
