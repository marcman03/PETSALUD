#pragma once
#include <iostream>
using namespace System;
using namespace std;
ref class TxCrearVisita
{
private:
    int numeroid;
    String^ nom;
    DateTime data;
    String^ hora;
    String^ propietari;
    int mascota;
    int centre;
    TxCrearVisita(String^ _nom, int numeroid, DateTime _data, String^ _hora, String^ _propietari,int _mascota, int _centre);
public:
    static TxCrearVisita^ crear(String^ _nom, int numeroid, DateTime _data, String^ _hora, String^ _propietari, int _mascota, int _centre);

    TxCrearVisita^ ejecutar();

};

