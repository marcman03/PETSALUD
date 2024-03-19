#include "pch.h"
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <windows.h>
#include <string> // For exception message conversion (optional)
#include "CliniquesClass.h"


using namespace System::Windows::Forms;
using namespace std;
using namespace System::IO;
using namespace MySql::Data::MySqlClient;



Clinica::Clinica()
{
	throw gcnew System::NotImplementedException();
}

void Clinica::altaClinica(String^ nom, String^ correu, String^ ubicacio, String^ descripcio)
{
	string host = "ubiwan.epsevg.upc.edu";
	string database = "amep03";
	string port = "3306";
	string user = "amep03";
	string password = "yieV7tooPae7-";
	string connectionString = "datasource=" + host + ";port=" + port + ";user=" + user + ";password=" + password + ";database=" + database + ";";
	System::String^ managedConnectionString = msclr::interop::marshal_as<System::String^>(connectionString);
	MySqlConnection^ conn = gcnew MySqlConnection(managedConnectionString);

	String^ sql = "INSERT INTO cliiques VALUES" + nom + "," + correu + "," + ubicacio + "," + descripcio + ";";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	try {
		// obrim la connexió
		conn->Open();
		// executem la comanda creada abans del try
		dataReader = cmd->ExecuteReader();
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra
		System::Windows::Forms::MessageBox::Show(ex->Message);
	}
	finally {
		// si tot va bé es tanca la connexió
		conn->Close();
	}
}


