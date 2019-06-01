#include "NonB.h"

NonB::NonB()
{
}
NonB::NonB(double velocidad, int fuerza, string trabajo,char sexo, int edad, string nombre, string origen): Persona(sexo, edad, nombre, origen)
{
    this->velocidad = velocidad;
    this->fuerza = fuerza;
    this->trabajo = trabajo;
}
double NonB::getvelocidad()
{
    return velocidad;
}
void NonB::setvelocidad(double velocidad)
{
    this->velocidad = velocidad;
}

int NonB::getfuerza()
{
    return fuerza;
}
void NonB::setfuerza(int fuerza)
{
    this->fuerza = fuerza;
}

string NonB::gettrabajo()
{
    return trabajo;
}
void NonB::settrabajo(string trabajo)
{
    this->trabajo = trabajo;
}
string NonB::toString()
{
    string NonBStr;
    string fuerza2=to_string(fuerza);
    string velocidad2=to_string(velocidad);
    NonBStr = "["+velocidad2+"]"+"["+fuerza2+"]"+"["+trabajo+"]";
    return NonBStr;
}