#include <string>
#include <iostream>
#pragma once
using namespace std;

class Persona
{
private:
	string Nombre;
	string Apellido;
	string Edad;
	char Sexo;
	char Terrorista;

public:
	Persona(string, string, string, char, char);
	virtual void Mostrar();
};

