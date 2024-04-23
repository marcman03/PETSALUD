
#include "pch.h"
#include "Ordinador.h"
#include "PassarellaPropietari.h"
#include "DBConnection.h"

void Ordinador::iniciaSessioPropietari(PassarellaPropietari^ c) 
{
	prop->setUsername(c->getUsername());
	prop->setNom(c->getNom());
	prop->setCorreuElectronic(c->getCorreuElectronic());
	prop->setTelefon(c->getTelefon());
	prop->setDescripcio(c->getDescripcio());
	prop->setContrasenya(c->getContrasenya());
}

void Ordinador::iniciaSessioClinica(PassarellaClinica^ c)
{
	cli = gcnew PassarellaClinica(c->Username, c->Nom, c->Correu,
		c->Telefon, c->Descripcio, c->Contrasenya);
}

void Ordinador::tancaSessio() 
{
	prop->setUsername("");
	prop->setNom("");
	prop->setContrasenya("");
	prop->setDataNaixement("");
	prop->setCorreuElectronic("");
	prop->setDescripcio("");
	prop->setTelefon("");
	
	delete instance;
	instance = nullptr;
}

PassarellaPropietari^ Ordinador::obtePropietari()
{
	return prop;
}

PassarellaClinica^ Ordinador::obteClinica() {
	return cli;
}
