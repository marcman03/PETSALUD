#include "pch.h"
#include "TxConsultarMascotes.h"


// Implementación del constructor
TxConsultarMascotes::TxConsultarMascotes(PasarellaPropietari^ _propietari) {
    propietari = _propietari;
}

TxConsultarMascotes^ TxConsultarMascotes::crear(PasarellaPropietari^ _propietari) {
    return gcnew TxConsultarMascotes(_propietari);
}

vector<int> TxConsultarMascotes::obteResultat()
{
     vector<int>mascotas= propietari->obtenerMascotas();
     return mascotas;

 
}
