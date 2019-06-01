#ifndef PODERESPECIAL_H
#define PODERESPECIAL_H

#include <string>
using std::string;
using std::to_string;

class PoderEspecial
{
public:
    string nombre;
    int nivel;

public:
    PoderEspecial();
    PoderEspecial(string,int);

    int getnivel();
    void setnivel(int);

    string getnombre();
    void setnombre(string);
    virtual string toString();
};
#endif