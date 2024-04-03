#include "pch.h"
#include "TxConsultaProp.h"

TxConsultaProp::Resultat TxConsultaProp::obteResultat()
{
	return res;
}

PassarellaPropietari^ TxConsultaProp::obtePropietari()
{
	return prop;
}

void TxConsultaProp::crear()
{	
	res.nom = "";
	res.username = "";
	res.contrasenya = "";
	res.data_naixament = "";
	res.correu = "";
	res.descripcio = "";
	res.telefon = "";

}

void TxConsultaProp::executar()
{
	Ordinador^ ord = Ordinador::getInstance();
	prop = ord->obtePropietari();

	res.nom = prop->getNom();
	res.username = prop->getUsername();
	res.contrasenya = prop->getContrasenya();
	res.data_naixament = prop->getDataNaixement();
	res.correu = prop->getCorreuElectronic();
	res.descripcio = prop->getDescripcio();
	res.telefon = prop->getTelefon();

}