#include <iostream>
using namespace std;
#include "Lista.h"

Lista::Lista() {}

void Lista::crear (int num) {
    Nodo *tmp;
    Nodo *aux;
    Nodo *aux2;
    
    tmp = new Nodo;
    tmp->num = num;

    if (this->raiz == NULL) { 
        this->raiz = tmp;
        tmp->sig = NULL;
    }else {
		aux = this->raiz;
        while( aux != NULL ){
			aux2 = aux->sig;
			if(tmp->num <= aux->num){
				tmp->sig = this->raiz;
				this->raiz = tmp;
				break;
			}
			else if(aux->num < tmp->num and aux2 == NULL){
				aux->sig= tmp;
				tmp->sig=NULL;
				break;	
			}
			else if(aux->num < tmp->num and aux2->num >= tmp->num){
				aux->sig = tmp;
				tmp->sig = aux2;
				break;
			}else{
				aux = aux->sig;
			}
		}
    }
}
void Lista::imprimir () {  
	Nodo *pivote = this->raiz;
    while (pivote != NULL) {
		cout << pivote->num<< endl;
        
        pivote = pivote->sig;
    }
}

