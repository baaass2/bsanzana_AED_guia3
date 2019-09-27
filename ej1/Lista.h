#include <iostream>
using namespace std;
#include "numEntero.h"

#ifndef LISTA_H
#define LISTA_H

typedef struct _Nodo {
    numEntero *num;
    struct _Nodo *sig;
} Nodo;

class Lista {
    private:
        Nodo *raiz = NULL;
        Nodo *ultimo = NULL;

    public:
        /* constructor*/
        Lista();
        
        /* crea un nuevo nodo, recibe una instancia de la clase Persona. */
        void crear (numEntero *num);
        /* imprime la lista. */
        void imprimir ();
        int* ordenarArray(int* array, int DIM);
};
#endif
