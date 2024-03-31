
#pragma once

#include <iostream>
#include "PasarellaPropietari.h"

using namespace System;
using namespace std;

ref class Ordinador
{
public:

    static Ordinador^ getInstance() {

        return instancia;

    }

    PasarellaPropietari getOrdinador();

    void iniciaSessio(PasarellaPropietari u);
    void tancaSessio();

private:

    static Ordinador^ instancia;
    PasarellaPropietari ord;

    Ordinador() {
        ord.setNom("");
        ord.setUsername("");
        ord.setContrasenya("");
        ord.setDataNaixement("");
        ord.setCorreuElectronic("");
        ord.setDescripcio("");
        ord.setTelefon("");
    }

};
