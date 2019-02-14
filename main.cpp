#include <iostream>
#include"lista.h"
using namespace std;

int main()
{
    string op,autor,cancion,interprete;
    unsigned int duracion;
    int pos;
    Lista nueva;
    Cancion can;
    nueva.Inicializa();
    cout << "Bienvenido a tu playlist" << endl;
    while(true){
        cout << "1)Agregar Nueva Cancion " << endl;
        cout << "2)Eliminar Cancion de la lista " << endl;
        cout << "0)Salir " << endl;
        cin >> op;
        cin.ignore();
        if(op == "1"){
            cout << "Nombre de la cancion: " << endl;
            getline(cin,cancion);
            can.setNombre(cancion);
            cout << "Autor: " << endl;
            getline(cin,autor);
            can.setAutor(autor);
            cout << "Interprete: " << endl;
            getline(cin,interprete);
            can.setInterprete(interprete);
            cout <<"Duracion(segundos): " << endl;
            cin >> duracion;
            can.setDuracion(duracion);
            cout << "Posicion donde desea agregarla: " << endl;
            cin >> pos;
            nueva.Inserta(can,pos);
            system ("cls");
            nueva.Mostrar();
        }
        else if(op == "2"){
            system ("cls");
            nueva.Mostrar();
            cout << "Posicion de la cancion que desea eleiminar: " << endl;
            cin >> pos;
            nueva.Borrar(pos);
            system ("cls");
            nueva.Mostrar();
        }
        else if(op == "0"){
            cout << "Adios" <<  endl << endl;
            break;
        }
    }
}
