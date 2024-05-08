﻿#include "pch.h"
#include "TxCrearCentre.h"
#include <iostream>
#include "PassarellaCentre.h"
using namespace System;
using namespace std;

TxCrearCentre^ TxCrearCentre::crear(String^ _nom, String^ _telefon, String^ _clinica) {
    return gcnew TxCrearCentre(_nom, _telefon, _clinica);
}


TxCrearCentre^ TxCrearCentre::ejecutar(){
    PassarellaCentre^ centreCreat =  PassarellaCentre::crear(nom, telefon, clinica);
    numero_ID = centreCreat->Numero_ID;
    return this;
}

// Constructor privado para evitar instanciaci�n directa
TxCrearCentre::TxCrearCentre(String^ _nom, String^ _telefon, String^ _clinica) {
    numero_ID = -1;
    nom = _nom;
    telefon = _telefon;
    clinica = _clinica;
}