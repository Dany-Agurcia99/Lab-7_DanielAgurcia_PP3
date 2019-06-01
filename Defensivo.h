#ifndef DEFENSIVO_H
#define DEFENSIVO_H
#include "PoderEspecial.h"
class Defensivo:public PoderEspecial
{
private:
    int resistencia;
    int duracion;

public:
    Defensivo();
    Defensivo(int, int,string nombre, int nivel);

    int getresistencia();
    void setresistencia(int);

    int getduracion();
    void setduracion(int);

    virtual string toString();
};
#endif
