#ifndef FIREB_H
#define FIREB_H

#include "PoderEspecial.h"
#include "Persona.h"

class FireB:public Persona
{
private:
    PoderEspecial* poder;
    int cicatrices;
    int victorias;

public:
    FireB();
    FireB(PoderEspecial*, int, int,char sexo, int edad, string nombre, string origen);

    PoderEspecial* getpoder();
    void setpoder(PoderEspecial*);

    int getcicatrices();
    void setcicatrices(int);

    int getvictorias();
    void setvictorias(int);

    virtual string toString();
};
#endif
