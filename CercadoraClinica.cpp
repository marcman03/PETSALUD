#include "pch.h"
#include "CercadoraClinica.h"
#include "DBConnection.h" 
using namespace System;

PassarellaClinica^ CercadoraClinica::cercaClinica(String^ usernameU)
{
	MySqlConnection^ conn = (gcnew DBConnection())->getConnection();

	String^ sql = "SELECT * FROM cliniques WHERE username = @username";

	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	cmd->Parameters->AddWithValue("@username", usernameU);

	MySqlDataReader^ dataReader;
	conn->Open();
	dataReader = cmd->ExecuteReader();

	if (dataReader->Read()) {

		String^ username = dataReader->GetString(0);
		String^ nom = dataReader->GetString(1);
		String^ correu = dataReader->GetString(2);
		String^ telefon = dataReader->GetString(3);
		String^ descripcio = dataReader->GetString(4);
		String^ contrasenya = dataReader->GetString(5);

		conn->Close();
		return gcnew PassarellaClinica(username);

	}

	else {
		throw gcnew Exception("Hi ha hagut un error amb el nom d'usuari o la contrasenya");

	}

}