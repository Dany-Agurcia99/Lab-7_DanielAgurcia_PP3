#include "Persona.h"
#include <string>
using std::to_string;

Persona::Persona()
{
}

Persona::Persona(char sexo, int edad, string nombre, string origen)
{
    this->sexo = sexo;
    this->edad = edad;
    this->nombre = nombre;
    this->origen = origen;
}

char Persona::getSexo()
{
    return sexo;
}

void Persona::setSexo(char sexo)
{
    this->sexo = sexo;
}

int Persona::getEdad()
{
    return edad;
}

void Persona::setEdad(int edad)
{
    this->edad = edad;
}

string Persona::getNombre()
{
    return nombre;
}

void Persona::setNombre(string nombre)
{
    this->nombre = nombre;
}

string Persona::getOrigen()
{
    return origen;
}

void Persona::setOrigen(string origen)
{
    this->origen = origen;
}