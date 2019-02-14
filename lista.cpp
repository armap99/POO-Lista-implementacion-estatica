#include "lista.h"

bool Lista::isValidPos(const int &p)
{
    return p > -2 && p <= last;
}

Lista::Lista()
{

}

void Lista::Inicializa()
{
    last = -1;
}

bool Lista::Vacia()
{
    return last == -1;
}

bool Lista::Llena()
{
    return last == 499;
}

void Lista::Inserta(const Cancion &e, const int &pos)
{
    if(!isValidPos(pos) or pos< -1 or Llena()){
        throw ListException("Desbordamineto de datos,Inserta nueva1");
    }
    int i(last);
    while(i>pos){
        playlist[i+1] = playlist[i];
        i--;
    }
    playlist[pos+1] = e;
    last++;
}

void Lista::Borrar(const int &pos)
{
    if(!isValidPos(pos)){
        throw ListException("Posicion a eleminar no valida,borrar");
    }
    if(Vacia()){
        throw ListException("Lista vacia,borrar");
    }
    int i(pos);
    while (i < last) {
        playlist[i]=playlist[i+1];
        i++;
    }
    last--;
}

Cancion Lista::Recupera(const int &pos)
{
    if(!isValidPos(pos)){
        throw ListException("Posicion Invalida,Recupera");
    }
    return playlist[pos];
}

int Lista::getPrimero()
{
    if(Vacia()){
        throw ListException("La playlist esta vacia,getprimero");
    }
    return 0;
}

int Lista::getUltimo()
{
    if(Vacia()){
        throw ListException("La playlist esta vacia,getultimo");
    }
 return last;
}

int Lista::getSeguiente(const int &pos)
{
    if(!isValidPos(pos)){
        throw ListException("Posicion invalida,getSiguiente");
    }
    if(Vacia()){
        throw ListException("La lista esta vacia,getsiguiente");
    }
    return pos+1;
}

int Lista::getAnterior(const int &pos)
{
    if(!isValidPos(pos)){
        throw ListException("Posicion invalida,getanterior");
    }
    if(Vacia()){
        throw ListException("La lista esta vacia,getanterior");
    }
    return pos+1;
}

void Lista::Anula()
{
    last = -1;
}

void Lista::Mostrar()
{
    if(Vacia()){
        throw ListException("Datos insuficientes,mostrar");
    }
    Cancion a;
    cout << "Numero - Cancion - Autor - Interprte - duracio" << endl;
    for (int i=0;i <= last;i++) {
        a=playlist[i];
        cout << i <<"-" << a.getNombre() << " - " << a.getAutor() << " - " << a.getInterprete() << " - "<< a.getDuracion() << endl;
    }
}


