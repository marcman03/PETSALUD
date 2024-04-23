
#pragma once

#include "pch.h"
#include <iostream>
#include "CercadoraClinica.h"
#include "CercadoraPropietari.h"
#include "Ordinador.h"

using namespace System;

ref class TxIniciSessio
{

private:

	String^ username;
	String^ contrasenya;



public:
	enum class TipusUsuari { Propietari, Clinica };
	void crear(String^ sU, String^ cU, TipusUsuari tU);
	void executar();

private:
	TipusUsuari tipusUsuari;

};
