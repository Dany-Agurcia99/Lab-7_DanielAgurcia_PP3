#include "Ofensivo.h"

Ofensivo::Ofensivo()
{
}
Ofensivo::Ofensivo(int rango, int fuerza,string nombre, int nivel) : PoderEspecial(nombre, nivel)
{
    this->rango = rango;
    this->fuerza = fuerza;
}
int Ofensivo::getrango()
{
    return rango;
}
void Ofensivo::setrango(int rango)
{
    this->rango = rango;
}

int Ofensivo::getfuerza()
{
    return fuerza;
}
void Ofensivo::setfuerza(int fuerza)
{
    this->fuerza = fuerza;
}
string Ofensivo::toString()
{
    string OfensivoStr;
    string rango2 = to_string(rango);
    string fuerza2 = to_string(fuerza);
    OfensivoStr = "[" + rango2 + "]" + "[" + fuerza2 + "]";
    return OfensivoStr;
}