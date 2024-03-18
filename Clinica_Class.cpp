#include "pch.h"
#include "Clinica_Class.h"
#include <msclr/marshal_cppstd.h> // Add this line to include msclr
#include <iostream>

using namespace System;
using namespace std;
using namespace MySql::Data::MySqlClient;

Clinica::Clinica() {

}



void Clinica::selectAll()
{
    string host = "ubiwan.epsevg.upc.edu";
    string database = "amep03";
    string port = "3306";
    string user = "amep03";
    string password = "yieV7tooPae7-";

    string connectionString = "datasource=" + host + ";port=" + port + ";user=" + user + ";password=" + password + ";database=" + database + ";";

    System::String^ managedConnectionString = msclr::interop::marshal_as<System::String^>(connectionString);
    MySqlConnection^ conn = gcnew MySqlConnection(managedConnectionString);

    String^ sql = "SELECT * FROM cliniques;";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;

    try {
        // obrim la connexió
        conn->Open();

        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
            // Es llegeix la informació per crear un objecte de tipus Professor
            // Agafarem les columnes per índex, la primera és la 0
            String^ nom = dataReader->GetString(0);
            String^ correu = dataReader->GetString(1);
            String^ telefon = dataReader->GetString(2);
            String^ ubicacio = dataReader->GetString(3);
            String^ descripcio = dataReader->GetString(4);

            // Print the fields
            System::Diagnostics::Debug::WriteLine(String::Format("Nom: {0}", nom));
            System::Diagnostics::Debug::WriteLine(String::Format("Correu: {0}", correu));
            System::Diagnostics::Debug::WriteLine(String::Format("Telefon: {0}", telefon));
            System::Diagnostics::Debug::WriteLine(String::Format("Ubicacio: {0}", ubicacio));
            System::Diagnostics::Debug::WriteLine(String::Format("Descripcio: {0}", descripcio));
        }
    }
    catch (const std::exception& ex) {
        // codi per mostrar l’error en una finestra
        std::string message(ex.what()); // Convert exception message to string (optional)
        Console::BackgroundColor = ConsoleColor::Red;
    }
    finally {
        // si tot va bé es tanca la connexió
        conn->Close();
    }
}
