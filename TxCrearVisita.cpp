#include "pch.h"
#include "TxCrearVisita.h"
#include <iostream>
#include "PassarellaEsdeveniments.h"
#include "PassarellaVisites.h"
using namespace System;
using namespace std;

TxCrearVisita^ TxCrearVisita::crear(String^ _nom, int _numeroid, DateTime _data, String^ _hora, String^ _propietari, int _mascota, int _centre)
{
	return gcnew TxCrearVisita(_nom, _numeroid,_data, _hora, _propietari, _mascota, _centre);
}

TxCrearVisita^ TxCrearVisita::ejecutar() {
    PassarellaEsdeveniments^ esdevCreat = PassarellaEsdeveniments::crear(numeroid, nom, data, hora, propietari);
    PassarellaVisites^ visitacreat = PassarellaVisites::crear(numeroid, mascota, centre);
    return this;
}
TxCrearVisita::TxCrearVisita(String^ _nom, int _numeroid, DateTime _data, String^ _hora, String^ _propietari, int _mascota, int _centre) {
    numeroid = _numeroid;
    nom = _nom;
    data = _data;
    hora = _hora;
    propietari = _propietari;
    mascota = _mascota;
    centre = _centre;
}
