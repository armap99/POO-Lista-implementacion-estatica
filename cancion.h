#ifndef CANCION_H
#define CANCION_H

#include <iostream>
#include<string.h>
using namespace std;

class Cancion
{
private:
    unsigned int duracion;
    string nombre,autor,interprete;

public:
    Cancion();
    void setDuracion(const unsigned int&);
    void setNombre(const string&);
    void setAutor(const string&);
    void setInterprete(const string&);

    unsigned int getDuracion();
    string getNombre();
    string getAutor();
    string getInterprete();
};

#endif // CANCION_H
