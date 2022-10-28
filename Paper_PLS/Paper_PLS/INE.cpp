#include "INE.h"
#include <string>
#include <iostream> 


using namespace std;

INE::INE(string Nombre, string Apellido, string Edad, char Sexo, char Terrorista, string CURP, string Vigencia, string Domicilio) : Persona (Nombre, Apellido, Edad, Sexo, Terrorista) {
	this-> CURP = CURP;
	this-> Vigencia = Vigencia;
	this-> Domicilio = Domicilio;
}

void INE::Mostrar() {
	cout << "***************INE***************\n";
	Persona::Mostrar();
	cout << "CURP: " << CURP << "\nVigencia: " << Vigencia << "\nDomicilio: " << Domicilio << endl;
	cout << "**********************************\n";
}