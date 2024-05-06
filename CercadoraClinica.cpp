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

	PassarellaClinica^ cli;
	MySqlDataReader^ dataReader;

	try {

		conn->Open();
		dataReader = cmd->ExecuteReader();

	}

	catch (Exception^ ex) {

		throw gcnew Exception("Hi ha hagut un error amb el nom d'usuari o la contrasenya");
	}

	finally {

		conn->Close();
	}

	return cli;

}