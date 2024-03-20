#include "pch.h"
#include "ClinicaAlta.h"

System::Void PetSalut::CinicaAlta::submitButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Diagnostics::Debug::WriteLine("ButtonClicked");

	Clinica clinica;
	clinica.nom = NomText->Text;
	clinica.correu = CorreuText->Text;
	clinica.telefon = TelefonText->Text;
	clinica.ubicacio = UbicacioText->Text;
	clinica.descripcio = DescripcioText->Text;

	clinica.altaClinica();
}
