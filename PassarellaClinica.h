#pragma once
#include <iostream>
using namespace System;
using namespace std;
ref class PassarellaClinica
{
private:
	String^ username;
	String^ nom;
	String^ correu;
	String^ telefon;
	String^ descripcio;
	String^ contrasenya;
public:
	PassarellaClinica::PassarellaClinica() : PassarellaClinica("", "", "", "", "", "") {}

	PassarellaClinica(String^ _username, String^ _nom, String^ _correu, String^ _telefon, String^ _descripcio, String^ _contrasenya);

	static PassarellaClinica^ crear(String^ _username, String^ _nom, String^ _correu, String^ _telefon, String^ _descripcio, String^ _contrasenya);

	PassarellaClinica(const PassarellaClinica^ p);

	property String^ Username {
		String^ get() { return username; }
		void set(String^ value) { username = value; }
	}

	property String^ Nom {
		String^ get() { return nom; }
		void set(String^ value) { nom = value; }
	}

	property String^ Correu {
		String^ get() { return correu; }
		void set(String^ value) { correu = value; }
	}

	property String^ Telefon {
		String^ get() { return telefon; }
		void set(String^ value) { telefon = value; }
	}

	property String^ Descripcio {
		String^ get() { return descripcio; }
		void set(String^ value) { descripcio = value; }
	}

	property String^ Contrasenya {
		String^ get() { return contrasenya; }
		void set(String^ value) { contrasenya = value; }
	}
};

