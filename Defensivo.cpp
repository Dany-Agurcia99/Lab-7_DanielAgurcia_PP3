#include "Defensivo.h"

Defensivo::Defensivo()
{
}
Defensivo::Defensivo(int resistencia, int duracion,string nombre, int nivel) : PoderEspecial(nombre, nivel)
{
    this->resistencia = resistencia;
    this->duracion = duracion;
}
int Defensivo::getresistencia()
{
    return resistencia;
}
void Defensivo::setresistencia(int resistencia)
{
    this->resistencia = resistencia;
}

int Defensivo::getduracion()
{
    return duracion;
}
void Defensivo::setduracion(int duracion)
{
    this->duracion = duracion;
}
string Defensivo::toString()
{
    string DefensivoStr;
    string duracion2 = to_string(duracion);
    string resistencia2 = to_string(resistencia);
    DefensivoStr = "[" + resistencia2 + "]" + "[" + duracion2 + "]";
    return DefensivoStr;
}