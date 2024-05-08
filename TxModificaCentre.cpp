#include "pch.h"
#include "TxModificaCentre.h"
#include "PassarellaCentre.h"

TxModificaCentre^ TxModificaCentre::prepara(int _numero_ID, String^ _nom, String^ _telefon, String^ _clinica)
{
    return gcnew TxModificaCentre(_numero_ID, _nom, _telefon, _clinica);
}

TxModificaCentre^ TxModificaCentre::executa()
{
    PassarellaCentre^ centreModificat = PassarellaCentre::modificar(numero_ID, nom, telefon, clinica);
    numero_ID = centreModificat->Numero_ID;
    return this;
}

TxModificaCentre::TxModificaCentre(int _numero_ID, String^ _nom, String^ _telefon, String^ _clinica)
{
    numero_ID = _numero_ID;
    nom = _nom;
    telefon = _telefon;
    clinica = _clinica;
}