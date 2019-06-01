#include "EarthB.h"

EarthB::EarthB()
{
}
EarthB::EarthB(PoderEspecial *poder, int coles, int graduacion, char sexo, int edad, string nombre, string origen) : Persona(sexo, edad, nombre, origen)
{

    this->poder = poder;
    this->coles = coles;
    this->graduacion = graduacion;
}
PoderEspecial *EarthB::getpoder()
{
    return poder;
}
void EarthB::setpoder(PoderEspecial *poder)
{
    this->poder = poder;
}

int EarthB::getcoles()
{
    return coles;
}
void EarthB::setcoles(int coles)
{
    this->coles = coles;
}

int EarthB::getgraduacion()
{
    return graduacion;
}
void EarthB::setgraduacion(int graduacion)
{
    this->graduacion = graduacion;
}
string EarthB::toString()
{
    string EarthBStr;
    string coles2 = to_string(coles);
    string graduacion2 = to_string(graduacion);
    EarthBStr = "[" + coles2 + "]" + "[" + graduacion2 + "]" + poder->toString();
    return EarthBStr;
}
EarthB::~EarthB()
{
    if (poder != -NULL)
    {
        delete poder;
        poder = NULL;
    }
}