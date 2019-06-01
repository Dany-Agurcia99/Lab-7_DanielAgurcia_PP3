#ifndef AIRB_H
#define AIRB_H

#include "PoderEspecial.h"
#include "Persona.h"

class AirB:public Persona
{
private:
    PoderEspecial* poder;
    int pelo;
    string color;

public:
    AirB();
    ~AirB();
    AirB(PoderEspecial*, int, string,char sexo, int edad, string nombre, string origen);

    PoderEspecial* getpoder();
    void setpoder(PoderEspecial*);

    int getpelo();
    void setpelo(int);

    string getcolor();
    void setcolor(string);

    virtual string toString();
};
#endif