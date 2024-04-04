#pragma once
#include "pch.h"
#include <iostream>
#include "DBConnection.h"
#include "PassarellaPropietari.h"

ref class TxModProp
{

private:

	String^ _username;
	String^ _contrasenya;
	String^ _nomComplert;
	String^ _telefon;
	String^ _dataNaixement;
	String^ _correuElectronic;
	String^ _descripcio;

public:

	void crear(String^ usernameS, String^ contrasenyaS, String^ nomComplertS, String^ telefonS, String^ dataNaixementS, String^ correuElectronicS, String^ descipcio);
	void executar();

};

