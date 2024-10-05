#include "pch.h"
#include "DBConnection.h"
#include <iostream>

using namespace System;
using namespace std;
using namespace System::Windows::Forms;

DBConnection::DBConnection() {
    try {
        String^ host = "";
        String^ database = "";
        String^ port = "";
        String^ user = "";
        String^ password = "";
        
        String^ connectionString = "datasource=" + host + ";port=" + port + ";username=" + user + ";password=\"" + password + "\";database=" + database + ";";

        System::Diagnostics::Debug::WriteLine("connectionString:" + connectionString);


        conn = gcnew MySqlConnection(connectionString);

        System::Diagnostics::Debug::WriteLine("Connected to MySQL database successfully!");
    } catch (Exception^ ex) {
        MessageBox::Show(ex->Message);
    }
}

MySqlConnection^ DBConnection::getConnection()
{
    return conn;
}
