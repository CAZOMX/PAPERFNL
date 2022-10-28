#include "Persona.h"
#include <string>
#include <iostream>

using namespace std;

Persona::Persona(string Nombre, string Apellido, string Edad, char Sexo, char Terrorista) {
	this->Nombre = Nombre;
	this->Apellido = Apellido;
	this->Edad = Edad;
	this->Sexo = Sexo;
	this->Terrorista = Terrorista;
}

void Persona::Mostrar() {
	cout << "Persona\nNombre: " << Nombre << "\nApellido: " << Apellido << "\nEdad: " << Edad << "\nSexo: " << Sexo << endl;
}