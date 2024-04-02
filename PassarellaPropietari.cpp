
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

    String^ sql = "SELECT * FROM propietaris WHERE username = @username";
    String^ sql1 = "SELECT * FROM propietaris WHERE correu = @correu";
    String^ sql2 = "SELECT * FROM propietaris WHERE telefon = @telefon";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlCommand^ cmd1 = gcnew MySqlCommand(sql1, conn);
    MySqlCommand^ cmd2 = gcnew MySqlCommand(sql2, conn);

    cmd->Parameters->AddWithValue("@username", username);
    cmd1->Parameters->AddWithValue("@correu", correu);
    cmd2->Parameters->AddWithValue("@telefon", telefon);

    conn->Open();
    MySqlDataReader^ dataReader = cmd->ExecuteReader();

    if (dataReader->Read()) {
        conn->Close();
        throw gcnew Exception("Aquest nom d'usuari ja existeix, prova amb un de diferent");
    }

    dataReader->Close(); // Cerrar el primer DataReader después de su uso

    dataReader = cmd1->ExecuteReader();

    if (dataReader->Read()) {
        conn->Close();
        throw gcnew Exception("Aquest correu electronic ja te un usuari associat");
    }

    dataReader->Close(); // Cerrar el segundo DataReader después de su uso

    dataReader = cmd2->ExecuteReader();

    if (dataReader->Read()) {
        conn->Close();
        throw gcnew Exception("Aquest telefon ja te un usuari associat");
    }

    dataReader->Close(); // Cerrar el tercer DataReader después de su uso

    try {
        String^ sql0 = "INSERT INTO propietaris VALUES (@username, @nom, @contrasenya, @correu, @telefon, @datanaixement, @descripcio);";
        MySqlCommand^ cmd0 = gcnew MySqlCommand(sql0, conn);
        cmd0->Parameters->AddWithValue("@username", username);
        cmd0->Parameters->AddWithValue("@contrasenya", contrasenya);
        cmd0->Parameters->AddWithValue("@nom", nom);
        cmd0->Parameters->AddWithValue("@telefon", telefon);
        cmd0->Parameters->AddWithValue("@datanaixement", data_naixament);
        cmd0->Parameters->AddWithValue("@correu", correu);
        cmd0->Parameters->AddWithValue("@descripcio", descripcio);

        cmd0->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        throw gcnew Exception("Hi ha hagut un error al registrar el propietari");
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
