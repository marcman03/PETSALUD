#pragma once

#include "pch.h"
#include <iostream>
#include "Ordinador.h"

ref class TxConsultaProp
{

private:

	value struct Resultat {

		String^ username;
		String^ nom;
		String^ contrasenya;
		String^ correu;
		String^ telefon;
		String^ data_naixament;
		String^ descripcio;

	};

	Resultat res;
	PassarellaPropietari^ prop;

public:

	Resultat obteResultat();
	void crear();
	void executar();

};