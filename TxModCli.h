#pragma once
#include "pch.h"
#include <iostream>
#include "DBConnection.h"
#include "PassarellaClinica.h"


ref class TxModCli
{
	private:

		String^ _username;
		String^ _contrasenya;
		String^ _nomComplert;
		String^ _telefon;
		String^ _correuElectronic;
		String^ _descripcio;

	public:

		void crear(String^ usernameS, String^ contrasenyaS, String^ nomComplertS, String^ telefonS, String^ correuElectronicS, String^ descipcioS);
		void executar();
};

