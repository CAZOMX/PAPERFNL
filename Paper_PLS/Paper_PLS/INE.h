#include <string>
#include <iostream>
#include "Persona.h"

using namespace std;

#pragma once
class INE : public Persona
{
private:
	string CURP;
	string Vigencia;
	string Domicilio;
	
public:
	INE(string, string, string, char, char, string, string, string);
	void Mostrar();
};

