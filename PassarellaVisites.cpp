#include "pch.h"
#include "PassarellaVisites.h"
#include "DBConnection.h"
#include <string>

using namespace System::Collections::Generic;
using namespace System;
using namespace MySql::Data::MySqlClient;
using namespace System::Windows::Forms;

PassarellaVisites^ PassarellaVisites::crear(int _numero_id, int _mascota, int _centre)
{
    MySqlConnection^ conn = (gcnew DBConnection())->getConnection();

    String^ sql = "INSERT INTO privat (numero_id, mascota, centre) VALUES (@numero_id, @mascota, @centre)";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    // Establecer los parámetros de la consulta con los valores proporcionados
    cmd->Parameters->AddWithValue("@numero_id", _numero_id);
    cmd->Parameters->AddWithValue("@mascota", _mascota);
    cmd->Parameters->AddWithValue("@centre", _centre);
    
    try {
        conn->Open();
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error al insertar la visita en la base de datos: " + ex->Message);
    }
    finally {
        conn->Close();
    }
    return gcnew PassarellaVisites(_numero_id, _mascota, _centre);
}


PassarellaVisites^ PassarellaVisites::eliminar(int numero_id)
{
    MySqlConnection^ conn = (gcnew DBConnection())->getConnection();

    String^ sqlSelect = "SELECT * FROM privat WHERE numero_id = @numero_id";
    String^ sqlDelete = "DELETE FROM privat WHERE numero_id = @numero_id";

    MySqlCommand^ cmdSelect = gcnew MySqlCommand(sqlSelect, conn);
    MySqlCommand^ cmdDelete = gcnew MySqlCommand(sqlDelete, conn);

    cmdSelect->Parameters->AddWithValue("@numero_id", numero_id);
    cmdDelete->Parameters->AddWithValue("@numero_id", numero_id);

    PassarellaVisites^ visitaEliminada = nullptr;

    try {
        conn->Open();
        MySqlDataReader^ reader = cmdSelect->ExecuteReader();
        if (reader->Read()) {
            int id = reader->GetInt32("numero_id");
            int mascota = reader->GetInt32("mascota");
            int centre = reader->GetInt32("centre");

            visitaEliminada = gcnew PassarellaVisites(id, mascota, centre);
        }
        reader->Close();

        cmdDelete->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error al eliminar la visita de la base de datos: " + ex->Message);
    }
    finally {
        conn->Close();
    }

    return visitaEliminada;
}

PassarellaVisites::PassarellaVisites(int _mascota, int _centre) {
    numero_id = numero_id;
    mascota = _mascota;
    centre = _centre;
}

PassarellaVisites::PassarellaVisites(int _numero_id, int _mascota, int _centre) {
    numero_id = _numero_id;
    mascota = _mascota;
    centre = _centre;
}
