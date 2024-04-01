#pragma once
#include <string>
#include "PasarellaPropietari.h"
using namespace System;
using namespace std;

ref class TxConsultarMascotes
{
private:
    PasarellaPropietari^ propietari;
    // Constructor
    TxConsultarMascotes(PasarellaPropietari^ _propietari);

public:
  
    
    // Función para crear una instancia de TxConsultarMascotes
    static TxConsultarMascotes^ crear(PasarellaPropietari^ _propietari);
    vector<int> obteResultat();
 

};
