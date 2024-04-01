#include "pch.h"
#include "PasarellaPropietari.h"

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System::Windows::Forms;

PasarellaPropietari::PasarellaPropietari() : PasarellaPropietari("", "", "", "", "", "", "") {}

PasarellaPropietari::PasarellaPropietari(String^ _nom, String^ _username, String^ _contrasenya, String^ _data_naixament, String^ _correu_electronic, String^ _descripcio, String^ _telefon)
{

    nom = _nom;
    username = _username;
    contrasenya = _contrasenya;
    data_naixament = _data_naixament;
    correu_electronic = _correu_electronic;
    descripcio = _descripcio;
    telefon = _telefon;

}

PasarellaPropietari::PasarellaPropietari(const PasarellaPropietari% PU)
{

    this->nom = PU.nom;
    this->username = PU.username;
    this->contrasenya = PU.contrasenya;
    this->data_naixament = PU.data_naixament;
    this->correu_electronic = PU.correu_electronic;
    this->descripcio = PU.descripcio;
    this->telefon = PU.telefon;

}

void PasarellaPropietari::insereix()
{

    MySqlConnection^ conn = (gcnew DBConnection())->getConnection();

    String^ sql = "INSERT INTO propietaris VALUES (@username, @nom, @contrasenya, @correu, @telefon, @descripcio);";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    cmd->Parameters->AddWithValue("@username", username);
    cmd->Parameters->AddWithValue("@nom", nom);
    cmd->Parameters->AddWithValue("@contraseya", contrasenya);
    cmd->Parameters->AddWithValue("@correu", correu_electronic);
    cmd->Parameters->AddWithValue("@telefon", telefon);
    cmd->Parameters->AddWithValue("@descripcio", descripcio);

    MySqlDataReader^ dataReader;

}

void PasarellaPropietari::esborra()
{



}

String^ PasarellaPropietari::getNom()
{
    return nom;
}

String^ PasarellaPropietari::getUsername()
{
    return username;
}

String^ PasarellaPropietari::getContrasenya()
{
    return contrasenya;
}

String^ PasarellaPropietari::getDataNaixement()
{
    return data_naixament;
}

String^ PasarellaPropietari::getCorreuElectronic()
{
    return correu_electronic;
}

String^ PasarellaPropietari::getDescripcio()
{
    return descripcio;
}

String^ PasarellaPropietari::getTelefon()
{
    return telefon;
}


void PasarellaPropietari::setNom(String^ nuevoNom)
{
    nom = nuevoNom;
}

void PasarellaPropietari::setUsername(String^ nuevoUsername)
{
    username = nuevoUsername;
}

void PasarellaPropietari::setContrasenya(String^ nuevaContrasenya)
{
    contrasenya = nuevaContrasenya;
}

void PasarellaPropietari::setDataNaixement(String^ nuevaDataNaixement)
{
    data_naixament = nuevaDataNaixement;
}

void PasarellaPropietari::setCorreuElectronic(String^ nuevoCorreuElectronic)
{
    correu_electronic = nuevoCorreuElectronic;
}

void PasarellaPropietari::setDescripcio(String^ nuevaDescripcion)
{
    descripcio = nuevaDescripcion;
}

void PasarellaPropietari::setTelefon(String^ nuevoTelefono)
{
    telefon = nuevoTelefono;
}

vector<int> PasarellaPropietari::obtenerMascotas()
{
 
       
    vector<int> chips;
    MySqlConnection^ conn = (gcnew DBConnection())->getConnection();
    String^ sql = "SELECT chip FROM mascotes WHERE propietari = @propietari;";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@propietari", this->username);
  
    try {
        conn->Open();
        MySqlDataReader^ reader = cmd->ExecuteReader();

        while (reader->Read()) {
            int chip = Convert::ToInt32(reader["chip"]);
            chips.push_back(chip);
        }

        reader->Close();
    }
    catch (Exception^ ex) {
        // Manejar la excepción
        Console::WriteLine(ex->Message);
    }
    finally {
        conn->Close();
    }

    return chips;
}

