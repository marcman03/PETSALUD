
#include "pch.h"
#include "Ordinador.h"
#include "PassarellaPropietari.h"
#include "DBConnection.h"

Ordinador::Ordinador() {
}

void Ordinador::iniciaSessio(PassarellaPropietari^ c) {
	PassarellaPropietari ord(c);

}
