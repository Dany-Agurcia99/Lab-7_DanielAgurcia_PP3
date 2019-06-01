#include "Mascota.h"

Mascota::Mascota()
{
}

Mascota::Mascota(string tipo, string nombre, string especie, string habilidad,string nombreP, int nivel) : PoderEspecial(nombre, nivel)
{
    this->tipo = tipo;
    this->nombre = nombre;
    this->especie = especie;
    this->habilidad = habilidad;
}

string Mascota::gettipo()
{
    return tipo;
}

void Mascota::settipo(string tipo)
{
    this->tipo = tipo;
}

string Mascota::getnombre()
{
    return nombre;
}

void Mascota::setnombre(string nombre)
{
    this->nombre = nombre;
}

string Mascota::getespecie()
{
    return especie;
}

void Mascota::setespecie(string especie)
{
    this->especie = especie;
}

string Mascota::gethabilidad()
{
    return habilidad;
}

void Mascota::sethabilidad(string habilidad)
{
    this->habilidad = habilidad;
}

string Mascota::toString()
{
    string MascotaStr;
    MascotaStr = "["+tipo+"]"+"["+nombre+"]"+"["+especie+"]"+"["+habilidad+"]";
    return MascotaStr;
}