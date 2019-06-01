#ifndef MASCOTA_H
#define MASCOTA_H
#include "PoderEspecial.h"
#include <string>
using std::string;
using std::to_string;
class Mascota:public PoderEspecial
{
private:
    string tipo;
    string nombre;
    string especie;
    string habilidad;

public:
    Mascota();
    Mascota(string, string, string, string,string nombre, int nivel);

    string gettipo();
    void settipo(string);

    string getnombre();
    void setnombre(string);

    string getespecie();
    void setespecie(string);

    string gethabilidad();
    void sethabilidad(string);

    virtual string toString();
};
#endif