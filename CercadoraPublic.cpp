#include "pch.h"
#include "CercadoraPublic.h"
#include "DBConnection.h"

PassarellaPublic^ CercadoraPublic::cercaPublic(int index)
{
    MySqlConnection^ conn = (gcnew DBConnection())->getConnection();
    String^ sql = "SELECT * FROM public WHERE `index` = @index"; // Asegúrate de usar la tabla correcta y comillas invertidas para `index` si es necesario
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@index", index);
    PassarellaPublic^ esdvPu = nullptr; // Asegúrate de inicializar el objeto a nullptr
    MySqlDataReader^ dataReader;

    try {
        conn->Open();
        dataReader = cmd->ExecuteReader();

        if (dataReader->Read()) {
            int numeroid = dataReader->GetInt32("numeroid");
            String^ tipus = dataReader->GetString("tipus");
            String^ descripcio = dataReader->GetString("descripcio");
            String^ ubicacio= dataReader->GetString("ubicacio");
            esdvPu = gcnew PassarellaPublic(tipus, numeroid,descripcio,ubicacio);
        }
    }
    catch (Exception^ ex) {
        throw gcnew Exception("Hi ha hagut un error amb el numero de esdeveniment");
    }
    finally {
        conn->Close();
    }

    return esdvPu;
}
