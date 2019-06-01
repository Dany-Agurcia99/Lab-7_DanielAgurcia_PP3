#include "Curativo.h"

Curativo::Curativo()
{
}
Curativo::Curativo(string tipo,string nombre, int nivel) : PoderEspecial(nombre, nivel)
{
    this->tipo = tipo;
}
string Curativo::gettipo()
{
    return tipo;
}
void Curativo::settipo(string tipo)
{
    this->tipo = tipo;
}
string Curativo::toString()
{
    string CurativoStr;
    CurativoStr = "["+tipo+"]";
    return CurativoStr;
}