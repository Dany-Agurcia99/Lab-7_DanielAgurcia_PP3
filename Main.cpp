#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "Persona.h"
#include "WaterB.h"
#include "FireB.h"
#include "EarthB.h"
#include "AirB.h"
#include "NonB.h"
#include "PoderEspecial.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curativo.h"
#include "Mascota.h"

void Agregar();
void Listar();
void Eliminar();

vector<Persona *> lista_personas;
vector<WaterB *> lista_water;
vector<FireB *> lista_fire;
vector<EarthB *> lista_earth;
vector<AirB *> lista_air;
vector<NonB *> lista_non;

int main()
{
    int opcion = 0;
    while (opcion != 4)
    {
        cout << "Menu" << endl
             << "1-Agregar" << endl
             << "2-Listar" << endl
             << "3-Eliminar" << endl
             << "4-Salir" << endl;
        cout << "Ingrese una opcion: " << endl;
        cin >> opcion;
        if (opcion == 1)
        {
            cout << "eligio opcion 1" << endl;
            Agregar();
        }
        else if (opcion == 2)
        {
            cout << "eligio opcion 2" << endl;
            Listar();
        }
        else if (opcion == 3)
        {
            cout << "eligio opcion 3" << endl;
            Eliminar();
        }
        else if (opcion == 4)
        {
            cout << "Adios" << endl;
            for (int i = 0; i < lista_personas.size(); i++)
            {
                delete lista_personas[i];
            }

            for (int i = 0; i < lista_water.size(); i++)
            {
                delete lista_water[i];
            }
            for (int i = 0; i < lista_fire.size(); i++)
            {
                delete lista_fire[i];
            }
            for (int i = 0; i < lista_earth.size(); i++)
            {
                delete lista_earth[i];
            }
            for (int i = 0; i < lista_air.size(); i++)
            {
                delete lista_air[i];
            }
            for (int i = 0; i < lista_non.size(); i++)
            {
                delete lista_non[i];
            }
        }
    }
    return 0;
}

void Agregar()
{
    int opcion2 = 0;
    while (opcion2 != 6)
    {
        string nombre, origen;
        int edad;
        char sexo;
        cout << "Ingrese el nombre de la Persona: ";
        cin >> nombre;
        cout << "Ingrese la edad de la Persona: ";
        cin >> edad;
        cout << "Ingrese el sexo de la persona [M/F]: ";
        cin >> sexo;
        cout << "Ingrese el origen de la persona: ";
        cin >> origen;
        PoderEspecial *poder = NULL;
        cout << "1-Agregrar Water Bender" << endl
             << "2-Agregrar Fire Bender" << endl
             << "3-Agregrar Earth Bender" << endl
             << "4-Agregrar Air Bender" << endl
             << "5-Agregrar Non Bender" << endl
             << "6-Salir" << endl;
        cout << "Ingrese una opcion: " << endl;
        cin >> opcion2;
        switch (opcion2)
        {
        case 1:
        {
            string tribu, arma;
            cout << "Ingrese la tribu: ";
            cin >> tribu;
            cout << "Ingrese el Arma: ";
            cin >> arma;
            int opcion3 = 0;
            cout << "Eliga el tipo de poder especial" << endl
                 << "1-Ofensivo" << endl
                 << "2-Defensivo" << endl
                 << "3-Curativo" << endl
                 << "4-Mascota" << endl;
            cout << "Ingrese una opcion: " << endl;
            cin >> opcion3;
            int nivel;
            string nombreP;
            cout << "Ingrese nombre del Poder: ";
            cin >> nombreP;
            cout << "Ingrese el nivel del poder: ";
            cin >> nivel;
            switch (opcion3)
            {
            case 1:
            {
                int rango, fuerza;
                cout << "Ingrese el rango(int): ";
                cin >> rango;
                cout << "Ingrese la fuerza(int): ";
                cin >> fuerza;
                poder = new Ofensivo(rango, fuerza, nombreP, nivel);
            }
            break;
            case 2:
            {
                int resistencia, duracion;
                cout << "Ingrese la resistencia(int): ";
                cin >> resistencia;
                cout << "Ingrese la duracion(int): ";
                cin >> duracion;
                poder = new Defensivo(resistencia, duracion, nombreP, nivel);
            }
            break;
            case 3:
            {
                string tipo;
                cout << "Ingrese el tipo: ";
                cin >> tipo;
                poder = new Curativo(tipo, nombreP, nivel);
            }
            break;
            case 4:
            {
                string tipo, nombre, especie, habilidad;
                cout << "Ingrese el tipo: ";
                cin >> tipo;
                cout << "Ingrese el nombre: ";
                cin >> nombre;
                cout << "Ingrese la especie: ";
                cin >> especie;
                cout << "Ingrese la habilidad: ";
                cin >> habilidad;
                poder = new Mascota(tipo, nombre, especie, habilidad, nombreP, nivel);
            }
            break;
            }
            Persona *WaterBender = new WaterB(poder, tribu, arma, sexo, edad, nombre, origen);
        }
        break;
        case 2:
        {
            int cicatrices, victorias;
            cout << "Ingrese las cicatrices: ";
            cin >> cicatrices;
            cout << "Ingrese las victorias: ";
            cin >> victorias;
            int opcion3 = 0;
            cout << "Eliga el tipo de poder especial" << endl
                 << "1-Ofensivo" << endl
                 << "2-Defensivo" << endl
                 << "3-Curativo" << endl
                 << "4-Mascota" << endl;
            cout << "Ingrese una opcion: " << endl;
            cin >> opcion3;
            int nivel;
            string nombreP;
            cout << "Ingrese nombre del Poder: ";
            cin >> nombreP;
            cout << "Ingrese el nivel del poder: ";
            cin >> nivel;
            switch (opcion3)
            {
            case 1:
            {
                int rango, fuerza;
                cout << "Ingrese el rango(int): ";
                cin >> rango;
                cout << "Ingrese la fuerza(int): ";
                cin >> fuerza;
                poder = new Ofensivo(rango, fuerza, nombreP, nivel);
            }
            break;
            case 2:
            {
                int resistencia, duracion;
                cout << "Ingrese la resistencia(int): ";
                cin >> resistencia;
                cout << "Ingrese la duracion(int): ";
                cin >> duracion;
                poder = new Defensivo(resistencia, duracion, nombreP, nivel);
            }
            break;
            case 3:
            {
                string tipo;
                cout << "Ingrese el tipo: ";
                cin >> tipo;
                poder = new Curativo(tipo, nombreP, nivel);
            }
            break;
            case 4:
            {
                string tipo, nombre, especie, habilidad;
                cout << "Ingrese el tipo: ";
                cin >> tipo;
                cout << "Ingrese el nombre: ";
                cin >> nombre;
                cout << "Ingrese la especie: ";
                cin >> especie;
                cout << "Ingrese la habilidad: ";
                cin >> habilidad;
                poder = new Mascota(tipo, nombre, especie, habilidad, nombreP, nivel);
            }
            break;
            }
            Persona *FireBender = new FireB(poder, cicatrices, victorias, sexo, edad, nombre, origen);
        }
        break;
        case 3:
        {
            int coles, graduacion;
            cout << "Ingrese el numero de coles: ";
            cin >> coles;
            cout << "Ingrese el numero de graduacion: ";
            cin >> graduacion;
            int opcion3 = 0;
            cout << "Eliga el tipo de poder especial" << endl
                 << "1-Ofensivo" << endl
                 << "2-Defensivo" << endl
                 << "3-Curativo" << endl
                 << "4-Mascota" << endl;
            cout << "Ingrese una opcion: " << endl;
            cin >> opcion3;
            int nivel;
            string nombreP;
            cout << "Ingrese nombre del Poder: ";
            cin >> nombreP;
            cout << "Ingrese el nivel del poder: ";
            cin >> nivel;
            switch (opcion3)
            {
            case 1:
            {
                int rango, fuerza;
                cout << "Ingrese el rango(int): ";
                cin >> rango;
                cout << "Ingrese la fuerza(int): ";
                cin >> fuerza;
                poder = new Ofensivo(rango, fuerza, nombreP, nivel);
            }
            break;
            case 2:
            {
                int resistencia, duracion;
                cout << "Ingrese la resistencia(int): ";
                cin >> resistencia;
                cout << "Ingrese la duracion(int): ";
                cin >> duracion;
                poder = new Defensivo(resistencia, duracion, nombreP, nivel);
            }
            break;
            case 3:
            {
                string tipo;
                cout << "Ingrese el tipo: ";
                cin >> tipo;
                poder = new Curativo(tipo, nombreP, nivel);
            }
            break;
            case 4:
            {
                string tipo, nombre, especie, habilidad;
                cout << "Ingrese el tipo: ";
                cin >> tipo;
                cout << "Ingrese el nombre: ";
                cin >> nombre;
                cout << "Ingrese la especie: ";
                cin >> especie;
                cout << "Ingrese la habilidad: ";
                cin >> habilidad;
                poder = new Mascota(tipo, nombre, especie, habilidad, nombreP, nivel);
            }
            break;
            }
            Persona *EarthBender = new EarthB(poder, coles, graduacion, sexo, edad, nombre, origen);
        }
        break;
        case 4:
        {
            int pelo;
            string color;
            cout << "Ingrese el numero de pelo: ";
            cin >> pelo;
            cout << "Ingrese el color: ";
            cin >> color;
            int opcion3 = 0;
            cout << "Eliga el tipo de poder especial" << endl
                 << "1-Ofensivo" << endl
                 << "2-Defensivo" << endl
                 << "3-Curativo" << endl
                 << "4-Mascota" << endl;
            cout << "Ingrese una opcion: " << endl;
            cin >> opcion3;
            int nivel;
            string nombreP;
            cout << "Ingrese nombre del Poder: ";
            cin >> nombreP;
            cout << "Ingrese el nivel del poder: ";
            cin >> nivel;
            switch (opcion3)
            {
            case 1:
            {
                int rango, fuerza;
                cout << "Ingrese el rango(int): ";
                cin >> rango;
                cout << "Ingrese la fuerza(int): ";
                cin >> fuerza;
                poder = new Ofensivo(rango, fuerza, nombreP, nivel);
            }
            break;
            case 2:
            {
                int resistencia, duracion;
                cout << "Ingrese la resistencia(int): ";
                cin >> resistencia;
                cout << "Ingrese la duracion(int): ";
                cin >> duracion;
                poder = new Defensivo(resistencia, duracion, nombreP, nivel);
            }
            break;
            case 3:
            {
                string tipo;
                cout << "Ingrese el tipo: ";
                cin >> tipo;
                poder = new Curativo(tipo, nombreP, nivel);
            }
            break;
            case 4:
            {
                string tipo, nombre, especie, habilidad;
                cout << "Ingrese el tipo: ";
                cin >> tipo;
                cout << "Ingrese el nombre: ";
                cin >> nombre;
                cout << "Ingrese la especie: ";
                cin >> especie;
                cout << "Ingrese la habilidad: ";
                cin >> habilidad;
                poder = new Mascota(tipo, nombre, especie, habilidad, nombreP, nivel);
            }
            break;
            }
            Persona *AirBender = new AirB(poder, pelo, color, sexo, edad, nombre, origen);
        }
        break;
        case 5:
        {
            string trabajo;
            double velocidad;
            int fuerza;
            cout << "Ingrese la velocidad(double): ";
            cin >> velocidad;
            cout << "Ingrese la fuerza(int): ";
            cin >> fuerza;
            cout << "Ingrese el trabajo(str): ";
            cin >> trabajo;
            Persona *NonBender = new NonB(velocidad, fuerza, trabajo, sexo, edad, nombre, origen);
        }
        break;
        }
    }
}

void Listar()
{
    for (int i = 0; i < lista_personas.size(); i++)
    {
        delete lista_personas[i];
    }
    lista_personas.clear();
    for (int i = 0; i < lista_water.size(); i++)
    {
        lista_personas.push_back(lista_water[i]);
    }
    for (int i = 0; i < lista_fire.size(); i++)
    {
        lista_personas.push_back(lista_fire[i]);
    }
    for (int i = 0; i < lista_earth.size(); i++)
    {
        lista_personas.push_back(lista_earth[i]);
    }
    for (int i = 0; i < lista_air.size(); i++)
    {
        lista_personas.push_back(lista_air[i]);
    }
    for (int i = 0; i < lista_non.size(); i++)
    {
        lista_personas.push_back(lista_non[i]);
    }
    for (int i = 0; i < lista_personas.size(); i++)
    {
        cout << lista_personas[i]->toString() + "\n";
    }
}

void Eliminar()
{
}