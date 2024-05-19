#include "pch.h"
#include "PassarellaEsdeveniments.h"
#include "DBConnection.h" 

using namespace System;
using namespace MySql::Data::MySqlClient;
using namespace System::Windows::Forms;


PassarellaEsdeveniments^ PassarellaEsdeveniments::crear(int _numeroid, String^ _nom, DateTime _data, String^ _hora, String^ _propietari) {
    MySqlConnection^ conn = (gcnew DBConnection())->getConnection();

    String^ sql = "INSERT INTO esdeveniment (numeroid, nom, data, hora, propietari) VALUES (@numeroid, @nom, @data, @hora, @propietari)";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    // Establecer los parámetros de la consulta con los valores proporcionados
    cmd->Parameters->AddWithValue("@numeroid", _numeroid);
    cmd->Parameters->AddWithValue("@nom", _nom);
    cmd->Parameters->AddWithValue("@data", _data);
    cmd->Parameters->AddWithValue("@hora", _hora);
    cmd->Parameters->AddWithValue("@propietari", _propietari);


    try {
        conn->Open();
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error al insertar el esdeveniment en la base de datos: " + ex->Message);
    }
    finally {
        conn->Close();
    }
    return gcnew PassarellaEsdeveniments(_numeroid, _nom, _data, _hora, _propietari);
}



PassarellaEsdeveniments^ PassarellaEsdeveniments::eliminar(int _numeroid) {

    MySqlConnection^ conn = (gcnew DBConnection())->getConnection(); // <-- Declaraci�

    String^ sql = "DELETE FROM esdeveniment WHERE numeroid = @numeroid";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    // Establecer el parámetro de la consulta con el valor proporcionado
    cmd->Parameters->AddWithValue("@numeroid", _numeroid);

    try {
        conn->Open();
        cmd->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error al eliminar el esdeveniment de la base de datos: " + ex->Message);
    }
    finally {
        conn->Close();
    }

    return nullptr;
}
PassarellaEsdeveniments::PassarellaEsdeveniments(int _numeroid, String^ _nom, DateTime _data, String^ _hora, String^ _propietari) {

    numeroid = _numeroid;
    nom = _nom;
    data = _data;
    hora = _hora;
    propietari = _propietari;
}