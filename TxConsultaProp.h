#pragma once

#include "pch.h"
#include <iostream>
#include "Ordinador.h"

ref class TxConsultaProp
{

public:

	value struct Resultat {

		String^ username;
		String^ nom;
		String^ contrasenya;
		String^ correu;
		String^ telefon;
		String^ data_naixament;
		String^ descripcio;

	};

	Resultat obteResultat();
	PassarellaPropietari^ obtePropietari();
	void crear();
	void executar();

private:

	Resultat res;
	PassarellaPropietari^ prop;

};