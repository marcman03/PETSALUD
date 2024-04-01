#pragma once

#include "pch.h"
#include <iostream>
#include "DBConnection.h"
#include <vector>
using namespace System;

ref class PassarellaPropietari {

private:
    String^ username;
    String^ nom;
    String^ contrasenya;
    String^ correu;
    String^ telefon;
    String^ data_naixament;
    String^ descripcio;

public:

    PassarellaPropietari();

    PassarellaPropietari(String^ _username, String^ _nom, String^ _contrasenya, String^ _correu, String^ _telefon, String^ _data_naixament, String^ _descripcio);

    PassarellaPropietari(const PassarellaPropietari^ p);

    String^ getNom();
    String^ getUsername();
    String^ getContrasenya();
    String^ getDataNaixement();
    String^ getCorreuElectronic();
    String^ getDescripcio();
    String^ getTelefon();

    void setNom(String^ nuevoNom);
    void setUsername(String^ nuevoUsername);
    void setContrasenya(String^ nuevaContrasenya);
    void setDataNaixement(String^ nuevaDataNaixement);
    void setCorreuElectronic(String^ nuevoCorreuElectronic);
    void setDescripcio(String^ nuevaDescripcion);
    void setTelefon(String^ nuevoTelefono);
    vector<int> obtenerMascotas();
};