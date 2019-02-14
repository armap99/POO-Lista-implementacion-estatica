#ifndef LISTA_H
#define LISTA_H

#include"cancion.h"
#include"listexception.h"

class Lista
{
private:
    Cancion playlist[50];
    int last;
    bool isValidPos(const int&);

public:
    Lista();
    void Inicializa();
    bool Vacia();
    bool Llena();
    void Inserta(const Cancion&, const int&);
    void Borrar(const int&);
    Cancion Recupera(const int&);
    int getPrimero();
    int getUltimo();
    int getSeguiente(const int&);
    int getAnterior(const int&);
    void Anula();
    void Mostrar();

};

#endif // LISTA_H
