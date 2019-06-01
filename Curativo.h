#ifndef CURATIVO_H
#define CURATIVO_H
#include "PoderEspecial.h"

class Curativo:public PoderEspecial
{
private:
    string tipo;

public:
    Curativo();
    Curativo(string,string nombre, int nivel);

    string gettipo();
    void settipo(string);

    virtual string toString();
};
#endif