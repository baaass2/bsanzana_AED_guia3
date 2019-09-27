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

Nodo* ordenar(Nodo* pivote){
	Nodo* q = pivote;
	Nodo* actual = NULL;
	int aux = 0;
	
	while (pivote != NULL){
		actual = pivote->sig;
		while(actual != NULL){
			if(pivote->num > actual->num ){
				aux = pivote->num;
				pivote->num = actual->num;
				actual->num = aux;
			}
			actual = actual->sig;
		}
		pivote = pivote->sig;
	}
	return q;
}

int main (void) {

    Lista *lista = new Lista();
    Lista *lista2 = new Lista();
    
    Nodo *pLast = NULL;
    Nodo *p = NULL;
    Nodo *q = NULL;
    Nodo *t = NULL;
    char stop = 'F';
    int num = 0;
    
    cout << "Ingresando datos a lista 1..."<<endl;
    while(stop != 'V'){
		cout << "Ingrese entero a la lista: ";cin >> num;	
		p=lista->crear(num);
		pLast= lista->getUltimo();
		cout << "Para detener escriba V, seguir F: ";cin >> stop;
	}
	stop='F';
	
    cout << "Ingresando datos a lista 2..."<<endl;
    while(stop != 'V'){
		cout << "Ingrese entero a la lista: ";cin >> num;	
		q=lista2->crear(num);
		cout << "Para detener escriba V, seguir F: ";cin >> stop;
	}
	
	cout << "Lista 1..."<<endl;
	imprimirLista(p);
	cout << "Lista 2..."<<endl;
	imprimirLista(q);
	
	//Aqui se concatena el siguente del ultimo nodo con la lista 2//
	pLast->sig = q;
	t=p;
	
	cout << "Lista 3 concatenada..."<<endl;
	imprimirLista(t);
	cout << "Lista 3 mezclada y ordenada..."<<endl;
	t=ordenar(t);
	imprimirLista(t);
	
    return 0;
}
