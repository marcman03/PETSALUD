#pragma once
#include <iostream>
#include "PassarellaUsuari.h"
#include "DBConnection.h"

public ref class Ordinador
{
public:

	static Ordinador^ getInstance() {

		if (instance == nullptr)
			instance = gcnew Ordinador();

		return instance;

	}

	void iniciaSessio(PassarellaUsuari^ c);

	void tancaSessio();

	void actualitza(String^ username, String^ nom, String^ passwd, String^ tipus, String^ correu, String^ descripció, String^ telefon);

	PassarellaUsuari^ obteUsuari();

private:

	static Ordinador^ instance;
	PassarellaUsuari^ ord;

	Ordinador::Ordinador()
	{
		ord = gcnew PassarellaUsuari();
	}

};