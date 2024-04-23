#pragma once
#include <iostream>
#include "PassarellaPropietari.h"
#include "PassarellaClinica.h"
#include "DBConnection.h"

public ref class Ordinador
{
public:

	static Ordinador^ getInstance() {

		if (instance == nullptr) 
			instance = gcnew Ordinador();
		
		return instance;

	}

	void iniciaSessioPropietari(PassarellaPropietari^ c);
	void iniciaSessioClinica(PassarellaClinica^ c);

	void tancaSessio();

	PassarellaPropietari^ obtePropietari();
	PassarellaClinica^ obteClinica();

private:

	static Ordinador^ instance;
	PassarellaPropietari^ prop;
	PassarellaClinica^ cli;
	
	Ordinador::Ordinador()
	{
		prop = gcnew PassarellaPropietari();
		cli = gcnew PassarellaClinica();
	}


};