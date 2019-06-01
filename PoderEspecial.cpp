#include "PoderEspecial.h"

PoderEspecial::PoderEspecial()
{
}

PoderEspecial::PoderEspecial(string nombre, int nivel)
{
    this->nivel = nivel;
}

int PoderEspecial::getnivel()
{
    return nivel;
}

void PoderEspecial::setnivel(int nivel)
{
    this->nivel = nivel;
}

string PoderEspecial::getnombre()
{
    return nombre;
}

void PoderEspecial::setnombre(string nombre)
{
    this->nombre = nombre;
}