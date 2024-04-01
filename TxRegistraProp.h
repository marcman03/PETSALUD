#pragma once

#include "pch.h"
#include <iostream>
#include "DBConnection.h"
#include "PassarellaPropietari.h"

using namespace System;

ref class TxRegistraProp
{

private:

	String^ username;
	String^ contrasenya;
	String^ nomComplert;
	String^ telefon;
	String^ dataNaixement;
	String^ correuElectronic;
	String^ descripcio;

public:

	void crear(String^& usernameS, String^& contrasenyaS, String^& nomComplertS, String^& telefonS, String^& dataNaixementS, String^& correuElectronicS, String^& descipcio);
	void executar();

};