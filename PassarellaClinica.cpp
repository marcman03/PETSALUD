#include "pch.h"
#include "PassarellaClinica.h"
#include "DBConnection.h" 

using namespace System;
using namespace MySql::Data::MySqlClient;
using namespace System::Windows::Forms; //Per mostrar MessageBox::Show una caixa amb el missatge d'error

PassarellaClinica^ PassarellaClinica::crear()
{

	MySqlConnection^ conn = (gcnew DBConnection())->getConnection();

	String^ sql = "INSERT INTO clinica (username) VALUES (@username)";

	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	// Establecer los par�metros de la consulta con los valores proporcionados
	cmd->Parameters->AddWithValue("@username", username);
	try {
		// obrim la connexi�
		conn->Open();
		cmd->ExecuteNonQuery();

	}
	catch (Exception^ ex) {
		// codi per mostrar l�error en una finestra
		MessageBox::Show("Error al insertar la clinica en la base de datos: " + ex->Message);
	}
	finally {
		// si tot va b� es tanca la connexi�
		conn->Close();
	}
	return gcnew PassarellaClinica(username);

}



PassarellaClinica::PassarellaClinica(String^ username) {
	username = username;
}

PassarellaClinica::PassarellaClinica(const PassarellaClinica^ p) {
	this->username = p->username;
}
