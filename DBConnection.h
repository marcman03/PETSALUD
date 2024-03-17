#pragma once

#include <iostream>

using namespace MySql::Data::MySqlClient;
using namespace std;

namespace PetSalut {

	class DBConnection {
	public:
		// Constructor with connection details
		DBConnection(const string& hostname, const string& port, const string& username,
			const string& password, const string& database);

		// Destructor for cleanup
		~DBConnection();

		void executeQuery(const string& query); // Placeholder for your implementation

		// Execute an update or insert query (returns number of affected rows)
		int executeUpdate(const string& query);


		unique_ptr<MySqlConnection> getConnection();


	private:
		std::unique_ptr<MySqlConnection> connection;
	};

} // namespace MyProject
