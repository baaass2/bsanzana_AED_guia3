#include <iostream>
using namespace std;
#include "Lista.h"

void imprimirLista(Nodo* tmp){
    while (tmp != NULL) {
		cout << tmp->num << " - ";
        
        tmp = tmp->sig;
    }
    cout << "" << endl;
}
int main (void) {

    Lista *lista = new Lista();

    Nodo *p = NULL;
    char stop = 'F';
    int num = 0;
    int max = 0;
    
    cout << "Ingresando datos a lista 1..."<<endl;
    while(stop != 'V'){
		cout << "Ingrese entero a la lista: ";cin >> num;	
		lista->crear(num);
		cout << "Para detener escriba V, seguir F: ";cin >> stop;
	}
	cout << "Lista sin rellanar..."<<endl;
	lista->imprimir();
	p = lista->getUltimo();
	p = lista->rellenar(p->num);
	
	cout << ""<<endl;
	cout << "Lista rellanada..."<<endl;
	imprimirLista(p);
    return 0;
}
