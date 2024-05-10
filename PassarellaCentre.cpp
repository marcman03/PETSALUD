﻿#include "pch.h"
#include "PassarellaCentre.h"
#include "DBConnection.h"
#include <string>

using namespace System::Collections::Generic;
using namespace System;
using namespace MySql::Data::MySqlClient;
using namespace System::Windows::Forms;

PassarellaCentre^ PassarellaCentre::crear(String^ _nom, String^ _telefon, String^ _clinica)
{
    MySqlConnection^ conn = (gcnew DBConnection())->getConnection();

    String^ sql = "INSERT INTO centre (nom, telefon, clinica) VALUES (@nom, @telefon, @clinica)";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    // Establecer los parámetros de la consulta con los valores proporcionados
    cmd->Parameters->AddWithValue("@nom", _nom);
    cmd->Parameters->AddWithValue("@telefon", _telefon);
    cmd->Parameters->AddWithValue("@clinica", _clinica);
    int nouId = -1;
    try {
        conn->Open();
        cmd->ExecuteNonQuery();
        nouId = (int)cmd->LastInsertedId;
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error al insertar el centre en la base de datos: " + ex->Message);
    }
    finally {
        conn->Close();
    }
    return gcnew PassarellaCentre(nouId, _nom, _telefon, _clinica);
}

PassarellaCentre^ PassarellaCentre::modificar(int _numero_ID, String^ _nom, String^ _telefon, String^ _clinica)
{
    MySqlConnection^ conn = (gcnew DBConnection())->getConnection();

    String^ sql = "UPDATE centre SET nom = @nom, telefon = @telefon, clinica = @clinica WHERE numero_ID = @numero_ID";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    // Establecer los parámetros de la consulta con los valores proporcionados
    cmd->Parameters->AddWithValue("@numero_ID", _numero_ID);
    cmd->Parameters->AddWithValue("@nom", _nom);
    cmd->Parameters->AddWithValue("@telefon", _telefon);
    cmd->Parameters->AddWithValue("@clinica", _clinica);

    try {
        conn->Open();
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error al modificar el centre en la base de datos: " + ex->Message);
    }
    finally {
        conn->Close();
    }
    return gcnew PassarellaCentre(_numero_ID, _nom, _telefon, _clinica);
}

PassarellaCentre^ PassarellaCentre::eliminar(int _numero_ID) {

    MySqlConnection^ conn = (gcnew DBConnection())->getConnection(); // <-- Declaraci�

    String^ sql = "DELETE FROM centre WHERE numero_ID = @numero_ID";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    // Establecer el parámetro de la consulta con el valor proporcionado
    cmd->Parameters->AddWithValue("@numero_ID", _numero_ID);

    try {
        conn->Open();
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error al eliminar el centre de la base de datos: " + ex->Message);
    }
    finally {
        conn->Close();
    }

    return nullptr;
}

PassarellaCentre::PassarellaCentre() {
    numero_ID = -1;
    nom = "";
    telefon = "";
    clinica = "";
}
PassarellaCentre::PassarellaCentre(String^ _nom, String^ _telefon, String^ _clinica) {
    numero_ID = -1;
    nom = _nom;
    telefon = _telefon;
    clinica = _clinica;
}

PassarellaCentre::PassarellaCentre(int _numero_ID, String^ _nom, String^ _telefon, String^ _clinica)
{
    numero_ID = _numero_ID;
    nom = _nom;
    telefon = _telefon;
    clinica = _clinica;
}