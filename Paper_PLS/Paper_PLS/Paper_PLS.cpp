
#include <iostream>
#include <fstream>
#include "INE.h"
#include "Pasaporte.h"
#include <windows.h>
#include <MMSystem.h>
#pragma comment(lib,"Winmm.lib")

using namespace std; 

ifstream Lec;
string nom, ape, edad;
char sexo, terror;

void Carlos(ifstream &Lec) {
    system("cls");
    Lec.open("C:/Users/jeffc/Documents/SEMESTRE II/POO/PAPERS_PLS_PROY-main/Paper_PLS/Carlos.txt", ios::in);
    bool leido = false;
    while (!Lec.eof() && !leido) {
        Lec >> nom;
        Lec >> ape;
        Lec >> edad;
        Lec >> sexo;
        Lec >> terror;
        leido = true;
    }
    Lec.close();

    if (!leido) {
        system("pause");
    }

}

void Andres(ifstream& Lec) {
    Lec.open("C:/Users/jeffc/Documents/SEMESTRE II/POO/PAPERS_PLS_PROY-main/Paper_PLS/Andres.txt", ios::in);
    bool leido = false;
    while (!Lec.eof() && !leido) {
        Lec >> nom;
        Lec >> ape;
        Lec >> edad;
        Lec >> sexo;
        Lec >> terror;
        leido = true;
    }
    Lec.close();

    if (!leido) {
        system("pause");
    }

}


int main()
{
    int pas, error, punt = 0;
    cout << "ZUNIGA OJEDA CARLOS ANDRES \n -----------PAPERS PLEASE-----------\n\n";
    system("pause");
    system("cls");
    cout << "\n**********************************************DIA 1**********************************************\n";
    cout << "\n Bienvenido a  ARZTORZKA en este tu primer dia tendras que cuida la entrada de posibles amenazas el futuro de este soberano pais depende de tiy no quiero decir del cuidado de tu familia que tambien depenede tu desempeno en el trabajo suerte y !GLORIA A ARZTORZKA!\n";
    system("pause");
    system("cls");
    Carlos(Lec);
    Persona* Carlos;
    cout << "\n-----------------------------------------Persona 1----------------------------------------------------- \n";
    Carlos = new INE(nom, ape, edad, sexo, terror, "ZUOCRA124XJC", "08/09/01", "Rio la Barca 1424");
    Carlos->Mostrar();
    Carlos = new Pasaporte(nom, ape, edad, sexo, terror, "Kolechia", "08/09/01", "4658", "Rio la Barca 1444");
    Carlos->Mostrar();
    delete Carlos;
    system("pause");
    cout << "\n";
    cout << "\nPuede ingresar al terreno soberano de ARZTOZKA?\n0.Si\n1.No\n";
    cin >> pas;
    if (pas > 0) {
        cout << "\nEn que parte de la Documentacion se encuentra la incongruencia?\n0-> Nombres\n1-> Apellidos\n2-> Edad\n3-> Sexo\n4-> Domicilio\n5->Nacionalidad\n\nIngrese opcion:\n";
        cin >> error;
        if (error == 0 || error == 1 || error == 2 || error == 3 || error == 5) {
            punt = punt - 1;
            system("cls");
        }
        else {
            punt = punt + 1;
            system("cls");
        }
    }
    else {
        punt = punt - 2;
    }
    system("cls");
    cout << "\n-----------------------------------------Persona 2----------------------------------------------------- \n";
    cout << "\nPuntaje: " << punt << "\n\n";
    Andres(Lec);
    Persona* Andres;
    Andres = new INE(nom, ape, edad, sexo, terror, "REJ2FA344JHC", "04/05/97", "Rio Lagos 1224");
    Andres->Mostrar();
    Andres = new Pasaporte(nom, ape, edad, sexo, terror, "Antegria", "04/05/97", "2222", "Rio Lagos 1224");
    Andres->Mostrar();
    delete Andres;
    cout << "\n";
    system("pause");
    cout << "\n";
    cout << "\n Puede ingresar al terreno soberano de ARZTOZKA?\n0-> Si\n1-> No\n";
    cin >> pas;
    if (pas > 0) {
        cout << "\n¿En que parte de la Documentacion se encuentra la incongruencia?\n0-> Nombres\n1-> Apellidos\n2-> Edad\n3-> Sexo\n4-> Domicilio\n5->Nacionalidad\n\nIngrese opcion:\n";
        cin >> error;
        if (error == 0 || error == 1 || error == 2 || error == 3) {
            punt = punt - 1;

        }
        else {
            punt = punt + 1;

        }
    }
    else {
        punt = punt - 2;

    }
    system("cls");

}