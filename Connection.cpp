#include "pch.h"
#include "connection.h"
#include <iostream>
using namespace std;
Connection::Connection() : conn("datasource = ubiwan.epsevg.upc.edu; username = amep03;  password = \"yieV7tooPae7-\"; database = amep03;"){
}

Connection::~Connection() {
	conn.close();
}

MySqlConnection^ Connection::getConnection() {
	return conn;
}