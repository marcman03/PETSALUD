#include "pch.h"
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <windows.h>
#include <string> // For exception message conversion (optional)
#include "CliniquesClass.h"
#include "DBConnection.h"


using namespace System::Windows::Forms;
using namespace std;
using namespace System::IO;
using namespace MySql::Data::MySqlClient;



Clinica::Clinica()
{
	nom = "";
	correu = "";
	telefon = "";
	ubicacio = "";
	descripcio = "";
}

void Clinica::altaClinica()
{
	MySqlConnection^ conn = (gcnew DBConnection())->getConnection(); 
	

	Diagnostics::Debug::WriteLine(String::Format("Nom: {0}", nom));

    String^ sql = "INSERT INTO cliniques VALUES (@nom, @correu, @telefon, @ubicacio, @descripcio);";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@nom", nom);
    cmd->Parameters->AddWithValue("@correu", correu);
	cmd->Parameters->AddWithValue("@telefon", telefon);
    cmd->Parameters->AddWithValue("@ubicacio", ubicacio);
    cmd->Parameters->AddWithValue("@descripcio", descripcio);
	
	MySqlDataReader^ dataReader;


	try {
		// obrim la connexió
		conn->Open();
		// executem la comanda creada abans del try
		dataReader = cmd->ExecuteReader();
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra
		MessageBox::Show(ex->Message);
	}
	finally {
		// si tot va bé es tanca la connexió
		conn->Close();
	}
}

void Clinica::ultimaColumna()
{
	MySqlConnection^ conn = (gcnew DBConnection())->getConnection();

	String^ sql = "SELECT * FROM cliniques;";

	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	MySqlDataReader^ dataReader;
	try {
		// obrim la connexió
		conn->Open();
		// executem la comanda creada abans del try
		dataReader = cmd->ExecuteReader();
		if (dataReader->Read()) {
			Diagnostics::Debug::WriteLine("Read");
			Diagnostics::Debug::WriteLine(String::Format("Nom: {0}", dataReader->GetString(0)));
		}
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra
		MessageBox::Show(ex->Message);
	}
	finally {
		// si tot va bé es tanca la connexió
		conn->Close();
	}
}


