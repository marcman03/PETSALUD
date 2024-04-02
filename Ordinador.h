#pragma once
#include <iostream>
#include "PassarellaPropietari.h"
#include "DBConnection.h"

ref class Ordinador
{
public:

	static Ordinador^ getInstance() {

		return instance;

	}

	void iniciaSessio(PassarellaPropietari^ c);

	void tancaSessio();

	PassarellaPropietari^ obtePropietari();

private:

	static Ordinador^ instance;
	PassarellaPropietari^ ord;
	Ordinador();

};