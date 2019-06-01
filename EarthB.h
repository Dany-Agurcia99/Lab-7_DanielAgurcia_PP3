#ifndef EARTHB_H
#define EARTHB_H

#include "PoderEspecial.h"
#include "Persona.h"

class EarthB:public Persona
{
private:
    PoderEspecial* poder;
    int coles;
    int graduacion;

public:
    EarthB();
    EarthB(PoderEspecial*, int, int,char sexo, int edad, string nombre, string origen);

    PoderEspecial* getpoder();
    void setpoder(PoderEspecial*);

    int getcoles();
    void setcoles(int);

    int getgraduacion();
    void setgraduacion(int);

    virtual string toString();
};
#endif
