#pragma once
#include "PassarellaCentre.h"
using namespace System::Collections::Generic;
using namespace System;
using namespace std;
ref class CercadoraCentre
{
public:
	static PassarellaCentre^ cercaCentre(int numero_ID);
};
