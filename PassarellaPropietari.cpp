
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

void PassarellaPropietari::crear()
{
    
    MySqlConnection^ conn = (gcnew DBConnection())->getConnection();
    String^ sql = "INSERT INTO propietaris (username, nom, contrasenya, correu, telefon, datanaixement, descripcio) VALUES (@username, @nom, @contrasenya, @correu, @datanaixement, @descripcio)";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@username", username);
    cmd->Parameters->AddWithValue("@contrasenya", contrasenya);
    cmd->Parameters->AddWithValue("@nom", nom);
    cmd->Parameters->AddWithValue("@telefon", telefon);
    cmd->Parameters->AddWithValue("@datanaixement", data_naixament);
    cmd->Parameters->AddWithValue("@correu", correu);
    cmd->Parameters->AddWithValue("@descripcio", descripcio);

    try {

        conn->Open();
        cmd->ExecuteNonQuery();

    }

    catch (Exception^ ex) {

        //throw gcnew Exception("Hi ha hagut un error al registrar el propietari");
        MessageBox::Show("Error: " + ex->Message);

    }

    finally {

        conn->Close();

    }

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
