#pragma once

#include "pch.h"
#include <iostream>
#include "DBConnection.h"
using namespace System;

ref class PassarellaPublic {
private:

	String^ tipus;
	int numeroid;

public:

	PassarellaPublic();

	PassarellaPublic(String^ _tipus, int _numeroid);

	PassarellaPublic(const PassarellaPublic^ p);

	void crear();

	property int Numeroid {
		int get() { return numeroid; }
		void set(int value) { numeroid = value; }
	}

	property String^ Tipus {
		String^ get() { return tipus; }
		void set(String^ value) { tipus = value; }
	}

};

