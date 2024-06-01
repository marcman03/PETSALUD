#include "pch.h"
#include "PassarellaPublic.h"

using namespace System;
using namespace MySql::Data::MySqlClient;
using namespace System::Windows::Forms; //Per mostrar MessageBox::Show una caixa amb el missatge d'error

PassarellaPublic::PassarellaPublic() : PassarellaPublic("", 0) {}

PassarellaPublic::PassarellaPublic(String^ _tipus, int _numeroid)
{

    tipus = _tipus;
    numeroid = _numeroid;

}

PassarellaPublic::PassarellaPublic(const PassarellaPublic^ p)
{
    this->tipus = p->tipus;
    this->numeroid = p->numeroid;
}

void PassarellaPublic::crear()
{
    MySqlConnection^ conn = (gcnew DBConnection())->getConnection();

    try {
        String^ sql0 = "INSERT INTO public VALUES (@numeroid, @tipus);";
        MySqlCommand^ cmd0 = gcnew MySqlCommand(sql0, conn);
        cmd0->Parameters->AddWithValue("@numeroid", numeroid);
        cmd0->Parameters->AddWithValue("@tipus", tipus);
        conn->Open();
        cmd0->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        //throw gcnew Exception("Hi ha hagut un error al registrar el propietari");
        throw ex;
    }
    finally {
        conn->Close();
    }
}