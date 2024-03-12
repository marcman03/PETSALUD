#pragma once
#include <string>

using namespace MySql::Data::MySqlClient;

class Connection
{
	public:
		Connection();
		~Connection();
		MySqlConnection^ getConnection();
	private:
		MySqlConnection^ conn;
		std::string config;
};
