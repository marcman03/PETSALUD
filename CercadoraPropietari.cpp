
#include "pch.h"
#include "CercadoraPropietari.h"

PasarellaPropietari CercadoraPropietari::cercaUsuari(String^ usernameU)
{
	MySqlConnection^ conn = (gcnew DBConnection())->getConnection();
	String^ sql = "SELECT * FROM propietaris WHERE username = @username";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	cmd->Parameters->AddWithValue("@username", usernameU);
	MySqlDataReader^ dataReader;

	PasarellaPropietari prop;

	conn->Open();
	dataReader = cmd->ExecuteReader();

	if (dataReader->Read()) {

		String^ username = dataReader->GetString(0);
		String^ nom = dataReader->GetString(1);
		String^ contrasenya = dataReader->GetString(2);
		String^ correu = dataReader->GetString(3);
		String^ telefon = dataReader->GetString(4);
		String^ datanaixament = dataReader->GetString(5);
		String^ descripcio = dataReader->GetString(6);

		PasarellaPropietari prop(nom, username, contrasenya, datanaixament, correu, descripcio, telefon);

	}

	else {

		throw gcnew Exception("Hi ha hagut un error amb el nom d'usuari o la contrasneya");

	}

	conn->Close();

	return prop;

}
