#pragma once
#include <iostream>
#include "PassarellaPropietari.h"
#include "DBConnection.h"

public ref class Ordinador
{
public:

	static Ordinador^ getInstance() {

		if (instance == nullptr) 
			instance = gcnew Ordinador();
		
		return instance;

	}

	void iniciaSessio(PassarellaPropietari^ c);

	void tancaSessio();

	PassarellaPropietari^ obtePropietari();

private:

	static Ordinador^ instance;
	PassarellaPropietari^ ord;
	
	Ordinador::Ordinador()
	{
		ord = gcnew PassarellaPropietari();
	}

};