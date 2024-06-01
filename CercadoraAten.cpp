#include "pch.h"
#include "CercadoraAten.h"
#include "PassarellaAten.h"
#include "DBConnection.h" 

PassarellaAten^ CercadoraAten::cerca_per_id_Aten(int _idcentre)
{
    PassarellaAten^ AtenEncontrada = nullptr;

    MySqlConnection^ conn = (gcnew DBConnection())->getConnection();

    String^ sql = "SELECT * FROM aten WHERE _idcentre = @numeroid_centre";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    cmd->Parameters->AddWithValue("@numeroid_cnetre", _idcentre);

    try {
        conn->Open();
        MySqlDataReader^ reader = cmd->ExecuteReader();

        if (reader->Read()) {

            String^ _tipus = reader["nom_tipus"]->ToString();
            int _numeroid_centre = Convert::ToInt32(reader["numeroid_centre"]);
            AtenEncontrada = gcnew PassarellaAten(_tipus, _numeroid_centre);
        }

        reader->Close();
    }
    catch (Exception^ ex) {
        throw gcnew Exception("Hi ha hagut un error amb el aten" + ex->Message);
    }
    finally {
        conn->Close();
    }

    return AtenEncontrada;
}