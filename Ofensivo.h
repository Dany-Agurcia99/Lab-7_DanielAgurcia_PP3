#ifndef OFENSIVO_H
#define OFENSIVO_H
#include "PoderEspecial.h"

class Ofensivo:public PoderEspecial
{
private:
    int rango;
    int fuerza;

public:
    Ofensivo();
    Ofensivo(int, int,string nombre, int nivel);

    int getrango();
    void setrango(int);

    int getfuerza();
    void setfuerza(int);

    virtual string toString();
};
#endif