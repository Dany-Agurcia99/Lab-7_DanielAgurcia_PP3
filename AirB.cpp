#include "AirB.h"

AirB::AirB()
{
}
AirB::AirB(PoderEspecial *poder, int pelo, string color, char sexo, int edad, string nombre, string origen) : Persona(sexo, edad, nombre, origen)
{

    this->poder = poder;
    this->pelo = pelo;
    this->color = color;
}
PoderEspecial *AirB::getpoder()
{
    return poder;
}
void AirB::setpoder(PoderEspecial *poder)
{
    this->poder = poder;
}

int AirB::getpelo()
{
    return pelo;
}
void AirB::setpelo(int pelo)
{
    this->pelo = pelo;
}

string AirB::getcolor()
{
    return color;
}
void AirB::setcolor(string color)
{
    this->color = color;
}
string AirB::toString()
{
    string AirBStr;
    string pelo2 = to_string(pelo);
    string edad2 = to_string(edad);
    AirBStr = "AIR BENDER[" + nombre + "]" + "[" + edad2 + "]" + "[" + sexo + "]" + "[" + origen + "]" + pelo2 + "]" + "[" + color + "]" + poder->toString();
    return AirBStr;
}
AirB::~AirB()
{
    if (poder != NULL)
    {
        delete poder;
        poder = NULL;
    }
}