#include <iostream>
using namespace std;
#ifndef LISTA_H
#define LISTA_H

typedef struct _Nodo {
    int num;
    struct _Nodo *sig;
} Nodo;

class Lista {
    private:
        Nodo *raiz = NULL;
        Nodo *ultimo = NULL;

    public:
        Lista();
        void crear (int num);
		void imprimir ();

};
#endif
