#include <string>
#include <iostream>
#include "Persona.h"

using namespace std;

class Pasaporte :public Persona
{
private:
	string Nacionalidad;
	string Vigencia;
	string Num_Pas;
	string Domicilio;
public:
	Pasaporte(string, string, string, char, char, string, string, string, string);
	void Mostrar();
};

