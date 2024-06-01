#include "pch.h"
#include "CercadoraAten.h"
#include "PassarellaAten.h"
#include "DBConnection.h" 

PassarellaAten^ CercadoraAten::cercaAten(int^ _idcentre)
{
    PassarellaAten^ AtenEncontrada = nullptr;

    MySqlConnection^ conn = (gcnew DBConnection())->getConnection();

    String^ sql = "SELECT * FROM aten WHERE idcentre = @numeroid_centre";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    cmd->Parameters->AddWithValue("@numeroid_cnetre", _idcentre);

    try {
        conn->Open();
        MySqlDataReader^ reader = cmd->ExecuteReader();

        if (reader->Read()) {
            // Si se encontró una mascota, crea un objeto PassarellaMascota con los datos obtenidos
            String^ _tipus = reader["nom_tipus"]->ToString();
            AtenEncontrada = gcnew PassarellaAten(_tipus, _idcentre);
        }

        reader->Close();
    }
    catch (Exception^ ex) {
        throw gcnew Exception("Hi ha hagut un error amb el chip");
    }
    finally {
        conn->Close();
    }

    return AtenEncontrada;
}