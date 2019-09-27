#include <iostream>
using namespace std;
#include "Lista.h"

Lista::Lista() {}

void Lista::crear (int num) {
    Nodo *tmp;
    
    tmp = new Nodo;
    tmp->num = num;
    tmp->sig = NULL;

    if (this->raiz == NULL) { 
        this->raiz = tmp;
        this->ultimo = this->raiz;
    } else {
        this->ultimo->sig = tmp;
        this->ultimo = tmp;
    }
}
void Lista::imprimir () {  
	Nodo *pivote = this->raiz;
	Nodo *actual = NULL;
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
	
	pivote = this->raiz;
    while (pivote != NULL) {
		cout << pivote->num<< endl;
        
        pivote = pivote->sig;
    }
}

