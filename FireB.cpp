#include "FireB.h"

FireB::FireB()
{
}
FireB::FireB(PoderEspecial *poder, int cicatrices, int victorias, char sexo, int edad, string nombre, string origen) : Persona(sexo, edad, nombre, origen)
{

    this->poder = poder;
    this->cicatrices = cicatrices;
    this->victorias = victorias;
}
PoderEspecial *FireB::getpoder()
{
    return poder;
}
void FireB::setpoder(PoderEspecial *poder)
{
    this->poder = poder;
}

int FireB::getcicatrices()
{
    return cicatrices;
}
void FireB::setcicatrices(int cicatrices)
{
    this->cicatrices = cicatrices;
}

int FireB::getvictorias()
{
    return victorias;
}
void FireB::setvictorias(int victorias)
{
    this->victorias = victorias;
}
string FireB::toString()
{
    string FireBStr;
    string cicatrices2 = to_string(cicatrices);
    string victorias2 = to_string(victorias);
    string edad2 = to_string(edad);
    FireBStr = "FIRE BENDER[" + nombre + "]" + "[" + edad2 + "]" + "[" + sexo + "]" + "[" + origen + "]" + cicatrices2 + "]" + "[" + victorias2 + "]" + poder->toString();
    return FireBStr;
}
FireB::~FireB()
{
    if (poder != NULL)
    {
        delete poder;
        poder = NULL;
    }
}