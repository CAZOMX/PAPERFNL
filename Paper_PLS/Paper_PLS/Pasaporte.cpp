#include "Pasaporte.h"
#include <string>
#include <iostream> 

using namespace std;

Pasaporte::Pasaporte(string Nombre, string Apellido, string Edad, char Sexo, char Terrorista, string Nacionalidad, string Vigencia, string Num_Pas, string Domicilio) : Persona (Nombre, Apellido, Edad, Sexo, Terrorista) {
	this-> Nacionalidad = Nacionalidad;
	this-> Vigencia = Vigencia;
	this-> Num_Pas = Num_Pas;
	this->Domicilio = Domicilio;
}

void Pasaporte::Mostrar() {
	cout << "\n\n*****************************************PASAPORTE*************************************\n";
	Persona::Mostrar();
	cout << "Nacionalidad: " << Nacionalidad << "\nVigencia: " << Vigencia << "\nNumero Pasaporte: " << Num_Pas << "\nDomicilio: " << Domicilio << endl;
	cout << "\n\n***************************************************************************************\n";
}