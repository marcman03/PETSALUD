#include "pch.h"
#include "PassarellaPropietari.h"
#include "DBConnection.h" 

using namespace System;
using namespace MySql::Data::MySqlClient;
using namespace System::Windows::Forms; //Per mostrar MessageBox::Show una caixa amb el missatge d'error

PassarellaPropietari::PassarellaPropietari() : PassarellaPropietari("", "", "", "", "", "", "") {}

PassarellaPropietari::PassarellaPropietari(String^ _username, String^ _nom, String^ _contrasenya, String^ _correu_electronic, String^ _telefon, String^ _data_naixament, String^ _descripcio)
{

    username = _username;
    nom = _nom;
    contrasenya = _contrasenya;
    correu = _correu_electronic;
    telefon = _telefon;
    data_naixament = _data_naixament;
    descripcio = _descripcio;

}

PassarellaPropietari::PassarellaPropietari(const PassarellaPropietari^ p)
{

    this->username = p->username;
    this->nom = p->nom;
    this->contrasenya = p->contrasenya;
    this->correu = p->correu;
    this->telefon = p->telefon;
    this->data_naixament = p->data_naixament;
    this->descripcio = p->descripcio;

}

String^ PassarellaPropietari::getNom()
{
    return nom;
}

String^ PassarellaPropietari::getUsername()
{
    return username;
}

String^ PassarellaPropietari::getContrasenya()
{
    return contrasenya;
}

String^ PassarellaPropietari::getDataNaixement()
{
    return data_naixament;
}

String^ PassarellaPropietari::getCorreuElectronic()
{
    return correu;
}

String^ PassarellaPropietari::getDescripcio()
{
    return descripcio;
}

String^ PassarellaPropietari::getTelefon()
{
    return telefon;
}


void PassarellaPropietari::setNom(String^ nuevoNom)
{
    nom = nuevoNom;
}

void PassarellaPropietari::setUsername(String^ nuevoUsername)
{
    username = nuevoUsername;
}

void PassarellaPropietari::setContrasenya(String^ nuevaContrasenya)
{
    contrasenya = nuevaContrasenya;
}

void PassarellaPropietari::setDataNaixement(String^ nuevaDataNaixement)
{
    data_naixament = nuevaDataNaixement;
}

void PassarellaPropietari::setCorreuElectronic(String^ nuevoCorreuElectronic)
{
    correu = nuevoCorreuElectronic;
}

void PassarellaPropietari::setDescripcio(String^ nuevaDescripcion)
{
    descripcio = nuevaDescripcion;
}

void PassarellaPropietari::setTelefon(String^ nuevoTelefono)
{
    telefon = nuevoTelefono;
}

vector<int> PassarellaPropietari::obtenerMascotas()
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