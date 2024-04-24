
#include "pch.h"
#include "TxIniciSessio.h"

void TxIniciSessio::crear(String^ sU, String^ cU)
{
	username = sU;
	contrasenya = cU;
}

void TxIniciSessio::executar()
{
	try {

		PassarellaPropietari^ prop = CercadoraPropietari::cercaPropietari(username);
		String^ cont = prop->getContrasenya();

		if (cont != contrasenya)
			throw gcnew Exception("Hi ha hagut un error amb el nom d'usuari o la contrasneya");

		Ordinador^ ord;
		ord = Ordinador::getInstance();
		ord->iniciaSessio(prop);

	}

	catch (Exception^ ex) {

		throw ex;

	}

}