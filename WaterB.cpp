#include "WaterB.h"

WaterB::WaterB()
{
}
WaterB::WaterB(PoderEspecial *poder, string tribu, string arma,char sexo, int edad, string nombre, string origen) : Persona(sexo, edad, nombre, origen)
{
    this->poder = poder;
    this->tribu = tribu;
    this->arma = arma;
}
PoderEspecial *WaterB::getpoder()
{
    return poder;
}
void WaterB::setpoder(PoderEspecial *poder)
{
    this->poder = poder;
}

string WaterB::gettribu()
{
    return tribu;
}
void WaterB::settribu(string tribu)
{
    this->tribu = tribu;
}

string WaterB::getarma()
{
    return arma;
}
void WaterB::setarma(string arma)
{
    this->arma = arma;
}
string WaterB::toString()
{
    string WaterBStr;
    WaterBStr = "[" + tribu + "]" + "[" + arma + "]" + poder->toString();
    return WaterBStr;
}
WaterB::~WaterB()
{
    if (poder != -NULL)
    {
        delete poder;
        poder = NULL;
    }
}