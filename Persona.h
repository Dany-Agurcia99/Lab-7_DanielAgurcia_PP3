#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using std::string;
using std::to_string;

class Persona{
    public:
        char sexo;
        int edad;
        string nombre;
        string origen;
    public:
        Persona();
        Persona(char, int, string, string);

        char getSexo();
        void setSexo(char);

        int getEdad();
        void setEdad(int);

        string getNombre();
        void setNombre(string);

        string getOrigen();
        void setOrigen(string);

        virtual string toString()=0;
};
#endif