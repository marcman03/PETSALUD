#pragma once
#include <iostream>
using namespace System;
using namespace std;

ref class TxModificaCentre
{
private:
    int numero_ID;
    String^ nom;
    String^ telefon;
    String^ clinica;
    TxModificaCentre(int _numero_ID, String^ _nom, String^ _telefon, String^ _clinica);
public:
    // Constructor
    static TxModificaCentre^ prepara(int _numero_ID, String^ _nom, String^ _telefon, String^ _clinica);

    TxModificaCentre^ executa();


    // Getters and Setters only on .h
    property int Numero_ID {
        int get() { return numero_ID; }
    }
};

