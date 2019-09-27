#include <iostream>
using namespace std;
#include "Lista.h"
#include "numEntero.h"

Lista::Lista() {}

void Lista::crear (numEntero *num) {
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

int* Lista::ordenarArray(int* array, int DIM){
	int temporal;
	
	for (int i = 0;i < DIM; i++){
		for (int j = 0; j< DIM-1; j++){
			if (array[j] > array[j+1]){
			temporal = array[j]; 
			array[j] = array[j+1]; 
			array[j+1] = temporal;
			}
		}
	}
	return array;
}

void Lista::imprimir () {  

    Nodo *tmp = this->raiz;
    int *array;
    int contador = 0;
    int i = 0;
    
    while (tmp != NULL) {
        contador = contador + 1;
        tmp = tmp->sig;
    }
    array = new int[contador];
     
    tmp = this->raiz;
    while (tmp != NULL) {
        array[i] = tmp->num->get_num();
        tmp = tmp->sig;
        i = i + 1;
    }
    array = ordenarArray(array, contador);
    
    for(int k=0; k<contador; k++){
		cout << array[k] << endl;
	}
}
