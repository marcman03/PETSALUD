#include "pch.h"
#include "TxIniciSessio.h"

void TxIniciSessio::crear(String^ sU, String^ cU, TipusUsuari tU)
{
	username = sU;
	contrasenya = cU;
	tipusUsuari = tU;
}

void TxIniciSessio::executar()
{

	String^ cont = "";
	Ordinador^ ord;
	PassarellaClinica^ cli;
	PassarellaPropietari^ prop;
	try {
		switch (tipusUsuari)
		{
			case TipusUsuari::Clinica:
				cli = CercadoraClinica::cercaClinica(username);
				cont = cli->Contrasenya;

				if (cont != contrasenya)
					throw gcnew Exception("Hi ha hagut un error amb el nom d'usuari o la contrasenya");

				Ordinador^ ord;
				ord = Ordinador::getInstance();
				ord->iniciaSessioClinica(cli);
				break;
			case TipusUsuari::Propietari:
				prop = CercadoraPropietari::cercaPropietari(username);
				cont = prop->getContrasenya();

				if (cont != contrasenya)
					throw gcnew Exception("Hi ha hagut un error amb el nom d'usuari o la contrasenya");

				ord = Ordinador::getInstance();
				ord->iniciaSessioPropietari(prop);
				break;
		}
	}

	catch (Exception^ ex) {

		throw ex;

	}

}
