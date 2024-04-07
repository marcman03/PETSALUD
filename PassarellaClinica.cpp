#include "pch.h"
#include "PassarellaClinica.h"
#include "DBConnection.h" 

using namespace System;
using namespace MySql::Data::MySqlClient;
using namespace System::Windows::Forms; //Per mostrar MessageBox::Show una caixa amb el missatge d'error

PassarellaClinica^ PassarellaClinica::crear(String^ _username, String^ _nom, String^ _correu, String^ _telefon, String^ _descripcio, String^ _contrasenya)
{

	MySqlConnection^ conn = (gcnew DBConnection())->getConnection();

	String^ sql = "INSERT INTO cliniques (username, nom, correu, telefon, descripcio, contrasenya) VALUES (@username, @nom, @correu, @telefon, @descripcio, @contrasenya)";

	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	// Establecer los par�metros de la consulta con los valores proporcionados
	cmd->Parameters->AddWithValue("@username", _username);
	cmd->Parameters->AddWithValue("@nom", _nom);
	cmd->Parameters->AddWithValue("@correu", _correu);
	cmd->Parameters->AddWithValue("@telefon", _telefon);
	cmd->Parameters->AddWithValue("@descripcio", _descripcio);
	cmd->Parameters->AddWithValue("@contrasenya", _contrasenya);

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
	return gcnew PassarellaClinica(_username, _nom, _correu, _telefon, _descripcio, _contrasenya);

}

PassarellaClinica::PassarellaClinica(String^ _username, String^ _nom, String^ _correu, String^ _telefon, String^ _descripcio, String^ _contrasenya) {
	username = _username;
	nom = _nom;
	correu = _correu;
	telefon = _telefon;
	descripcio = _descripcio;
	contrasenya = _contrasenya;
}

PassarellaClinica::PassarellaClinica(const PassarellaClinica^ p) {

	this->username = p->username;
	this->nom = p->nom;
	this->correu = p->correu;
	this->telefon = p->telefon;
	this->descripcio = p->descripcio;
	this->contrasenya = p->contrasenya;
}

String^ PassarellaClinica::getContrasenya() {
	return contrasenya;
}