#ifndef NONB_H
#define NONB_H
#include "Persona.h"

class NonB:public Persona
{
private:
    double velocidad;
    int fuerza;
    string trabajo;

public:
    NonB();
    ~NonB();
    NonB(double, int, string,char sexo, int edad, string nombre, string origen);

    double getvelocidad();
    void setvelocidad(double);

    int getfuerza();
    void setfuerza(int);

    string gettrabajo();
    void settrabajo(string);

    virtual string toString();
};
#endif