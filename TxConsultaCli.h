#pragma once

#include "pch.h"
#include <iostream>
#include "Ordinador.h"

ref class TxConsultaCli
{
public:

	value struct Resultat {

		String^ username;
		String^ nom;
		String^ contrasenya;
		String^ correu;
		String^ telefon;
		String^ descripcio;

	};

	Resultat obteResultat();
	PassarellaClinica^ ObteClinica();
	void crear();
	void executar();

private:

	Resultat res;
	PassarellaClinica^ cli;
};

