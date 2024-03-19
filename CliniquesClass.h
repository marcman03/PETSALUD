#pragma once
using namespace System;

ref class Clinica
{


public:
	
	String^ nom;
	String^ correu;
	String^ telefon;
	String^ ubicacio;
	String^ descripcio;

	Clinica();
	void altaClinica();
	void static ultimaColumna();
private:


};

