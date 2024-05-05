#pragma once

#include "pch.h"
#include <iostream>
#include "DBConnection.h"

using namespace System;


ref class PassarellaPropietari {
private:
	String^ data_naixament;
	String^ username;
    
public:

	PassarellaPropietari();

    PassarellaPropietari(String^ _data_naixament, String^ _username);

	PassarellaPropietari(const PassarellaPropietari^ p);

	void crear();

	String^ getDataNaixement();
	String^ getUsername();

	void setUsername(String^ nuevoUsername);
	void setDataNaixement(String^ nuevaDataNaixement);

};
