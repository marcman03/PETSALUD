
#include "pch.h"
#include "CercadoraPropietari.h"
#include "DBConnection.h" 

using namespace System;

PassarellaPropietari^ CercadoraPropietari::cercaPropietari(String^ usernameU)
{

	MySqlConnection^ conn = (gcnew DBConnection())->getConnection();
	String^ sql = "SELECT * FROM propietaris WHERE username = @username";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	cmd->Parameters->AddWithValue("@username", usernameU);

	PassarellaPropietari^ prop;
	MySqlDataReader^ dataReader;
	
	try {

		conn->Open();
		dataReader = cmd->ExecuteReader();

		if (dataReader->Read()) {

			String^ username = dataReader->GetString(0);
			String^ nom = dataReader->GetString(1);
			String^ contrasenya = dataReader->GetString(2);
			String^ correu = dataReader->GetString(3);
			String^ telefon = dataReader->GetString(4);
			String^ data = dataReader->GetString(5);
			String^ descripcio = dataReader->GetString(6);

			prop = gcnew PassarellaPropietari(username, nom, contrasenya, correu, telefon, data, descripcio);

		}

	}

	catch (Exception^ ex) {

		throw gcnew Exception("Hi ha hagut un error amb el nom d'usuari o la contrasneya");
	}

	finally {

		conn->Close();
	}

	return prop;

}
