#include "pch.h"
#include "CercadoraEsdeveniments.h"
#include "DBConnection.h" 

using namespace System;

PassarellaEsdeveniments^ CercadoraEsdeveniments::cercaEsdeveniment(int numeroid)
{

	MySqlConnection^ conn = (gcnew DBConnection())->getConnection();
	String^ sql = "SELECT * FROM esdeveniment WHERE numeroid = @numeroid";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	cmd->Parameters->AddWithValue("@numeroid", numeroid);

	PassarellaEsdeveniments^ esdv;
	MySqlDataReader^ dataReader;

	try {

		conn->Open();
		dataReader = cmd->ExecuteReader();

		if (dataReader->Read()) {
			int numeroid = dataReader->GetInt32("numero_ID");
			String^ nom = dataReader->GetString("nom");
			DateTime data = dataReader->GetDateTime("data");
			String^ hora = dataReader->GetString("hora");
			String^ propietari = dataReader->GetString("propietari");

			esdv = gcnew PassarellaEsdeveniments(numeroid, nom, data, hora, propietari);
		}

	}

	catch (Exception^ ex) {

		throw gcnew Exception("Hi ha hagut un error amb el numero de esdeveniment");

	}

	finally {

		conn->Close();
	}

	return esdv;

}
