#include "cancion.h"

Cancion::Cancion()
{

}

void Cancion::setDuracion(const unsigned int &d)
{
    duracion = d;
}

void Cancion::setNombre(const string &c)
{
    nombre = c;
}

void Cancion::setAutor(const string &a)
{
    autor = a;
}

void Cancion::setInterprete(const string &i)
{
    interprete = i;
}

unsigned int Cancion::getDuracion()
{
    return duracion;
}

string Cancion::getNombre()
{
    return nombre;
}

string Cancion::getAutor()
{
    return autor;
}

string Cancion::getInterprete()
{
    return interprete;
}
