#include "DBConnection.h"
#include "pch.h"
#include <iostream>
#include <msclr/marshal_cppstd.h>
using namespace System;
using namespace std;

namespace PetSalut {

	DBConnection::DBConnection(const string& hostname, const string& port, const string& username,
		const string& password, const string& database) {
		try {
			string connectionString = "datasource=" + hostname + ";port=" + port + ";user=" + username + ";password=" + password + ";database=" + database + ";";
			
			System::String^ managedConnectionString = msclr::interop::marshal_as<System::String^>(connectionString);
			connection = std::make_unique<MySql::Data::MySqlClient::MySqlConnection>(managedConnectionString);
			
			cout << "Connected to MySQL database successfully!" << endl;
		}
		catch (const MySql::Data::MySqlClient::MySqlException& ex) {
			std::cerr << "Error connecting to MySQL database: " << ex.Message << std::endl;
			throw std::runtime_error("DBConnection: Connection failed"); 
		}
	}

	DBConnection::~DBConnection() {
		if (connection) {
			try {
				connection->Close();
				cout << "Disconnected from MySQL database." << endl;
			}
			catch (const MySql::Data::MySqlClient::MySqlException& ex) {
				std::cerr << "Error disconnecting from MySQL database: " << ex.Message << endl;
			}
		}
	}

	void DBConnection::executeQuery(const string& query) {
		cerr << "** Implementation for executeQuery is missing! **" << endl;
	}

	int DBConnection::executeUpdate(const string& query) {
		try {
			
			cerr << "** Implementation for executeUpdate is missing! **" << endl;
			return -1; 
		}
		catch (const MySql::Data::MySqlClient::MySqlException& ex) {
			cerr << "Error executing update: " << ex.Message << endl;
			return -1;
		}
	}

	unique_ptr<MySqlConnection> DBConnection::getConnection()
	{
		return std::move(connection);
	}

}
