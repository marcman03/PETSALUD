#pragma once
#include <iostream>
using namespace System;
using namespace std;
ref class TxEliminaMascota
{
private:
	TxEliminaMascota();

public:
	static TxEliminaMascota^ crear();
	void ejecutar();
};

