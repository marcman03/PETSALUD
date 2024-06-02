#include "pch.h"
#include "CercadoraAten.h"
#include "PassarellaAten.h"
#include "DBConnection.h" 



List<String^>^ CercadoraAten::cercaTipusAten(int id)
{
    List<String^>^ tipusList = gcnew List<String^>();

    MySqlConnection^ conn = (gcnew DBConnection())->getConnection();

    String^ sql = "SELECT * FROM aten WHERE numeroid_centre = @numeroid_centre;";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    cmd->Parameters->AddWithValue("@numeroid_centre", id);

    try {
        conn->Open();
        MySqlDataReader^ reader = cmd->ExecuteReader();

        while (reader->Read()) {
            String^ tipus = reader["nom_tipus"]->ToString();
            tipusList->Add(tipus);
        }

        reader->Close();
    }
    catch (Exception^ ex) {
        throw gcnew Exception("Hi ha hagut un error amb el aten" + ex->Message);
    }
    finally {
        conn->Close();
    }

    return tipusList;
}