
#include "pch.h"
#include "Ordinador.h"
#include "PassarellaPropietari.h"
#include "DBConnection.h"

void Ordinador::iniciaSessio(PassarellaPropietari^ c) 
{
	 ord->setUsername(c->getUsername());
	 ord->setNom(c->getNom());
	 ord->setContrasenya(c->getContrasenya());
	 ord->setDataNaixement(c->getDataNaixement());
	 ord->setTelefon(c->getTelefon());
	 ord->setCorreuElectronic(c->getCorreuElectronic());
	 ord->setDescripcio(c->getDescripcio());
}

void Ordinador::tancaSessio() 
{
	ord->setUsername("");
	ord->setNom("");
	ord->setContrasenya("");
	ord->setDataNaixement("");
	ord->setCorreuElectronic("");
	ord->setDescripcio("");
	ord->setTelefon("");
	
	delete instance;
	instance = nullptr;
}

PassarellaPropietari^ Ordinador::obtePropietari()
{
	return ord;
}
