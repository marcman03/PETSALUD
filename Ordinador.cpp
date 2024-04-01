
#include "pch.h"
#include "Ordinador.h"

PasarellaPropietari Ordinador::getOrdinador()
{
	return ord;
}

void Ordinador::iniciaSessio(PasarellaPropietari u)
{
	ord.setNom(u.getNom());
	ord.setUsername(u.getUsername());
	ord.setContrasenya(u.getContrasenya());
	ord.setDataNaixement(u.getDataNaixement());
	ord.setCorreuElectronic(u.getCorreuElectronic());
	ord.setDescripcio(u.getDescripcio());
	ord.setTelefon(u.getTelefon());
}

void Ordinador::tancaSessio()
{
	ord.setNom("");
	ord.setUsername("");
	ord.setContrasenya("");
	ord.setDataNaixement("");
	ord.setCorreuElectronic("");
	ord.setDescripcio("");
	ord.setTelefon("");
}
