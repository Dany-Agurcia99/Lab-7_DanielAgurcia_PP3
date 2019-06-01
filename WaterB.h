#ifndef WATERB_H
#define WATERB_H

#include "PoderEspecial.h"
#include "Persona.h"

class WaterB:public Persona
{
private:
    PoderEspecial* poder;
    string tribu;
    string arma;
public:
    WaterB();
    WaterB(PoderEspecial*, string, string,char sexo, int edad, string nombre, string origen);

    PoderEspecial* getpoder();
    void setpoder(PoderEspecial*);

    string gettribu();
    void settribu(string);

    string getarma();
    void setarma(string);

    virtual string toString();
};
#endif
