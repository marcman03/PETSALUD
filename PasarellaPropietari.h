#pragma once

#include "pch.h"
#include <iostream>
#include "DBConnection.h"
#include <vector> 
using namespace System;

ref class PasarellaPropietari {

private:

	String^ nom;
	String^ username;
	String^ contrasenya;
	String^ data_naixament;
	String^ correu_electronic;
	String^ descripcio;
	String^ telefon;

public:

	PasarellaPropietari();
	PasarellaPropietari(String^ _nom, String^ _username, String^ _contrasenya, String^ _data_naixament, String^ _correu_electronic, String^ _descripcio, String^ _telefon);
	PasarellaPropietari(const PasarellaPropietari% PU);

	void insereix();
	void esborra();

	String^ getNom();
	String^ getUsername();
	String^ getContrasenya();
	String^ getDataNaixement();
	String^ getCorreuElectronic();
	String^ getDescripcio();
	String^ getTelefon();

	void setNom(String^ nuevoNom);
	void setUsername(String^ nuevoUsername);
	void setContrasenya(String^ nuevaContrasenya);
	void setDataNaixement(String^ nuevaDataNaixement);
	void setCorreuElectronic(String^ nuevoCorreuElectronic);
	void setDescripcio(String^ nuevaDescripcion);
	void setTelefon(String^ nuevoTelefono);
	vector<int> obtenerMascotas();

};