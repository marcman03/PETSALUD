#include "pch.h"
#include "TxConsultaCli.h"

TxConsultaCli::Resultat TxConsultaCli::obteResultat()
{
	return res;
}

PassarellaClinica^ TxConsultaCli::ObteClinica()
{
	return cli;
}

void TxConsultaCli::crear()
{
	res.nom = "";
	res.username = "";
	res.contrasenya = "";
	res.correu = "";
	res.descripcio = "";
	res.telefon = "";

}

void TxConsultaCli::executar()
{
	Ordinador^ ord = Ordinador::getInstance();
	cli = ord->obteClinica();

	res.nom = cli->Nom;
	res.username = cli->Username;
	res.contrasenya = cli->Contrasenya;
	res.correu = cli->Correu;
	res.descripcio = cli->Descripcio;
	res.telefon = cli->Telefon;

}