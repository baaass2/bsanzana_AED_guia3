#include <iostream>
using namespace std;
#include "Lista.h"

int main (void) {

    Lista *lista = new Lista();
    
    char stop = 'F';
    int num = 0;
    
    while(stop != 'V'){
		
		cout << "Ingrese entero a la lista: ";cin >> num;	
		lista->crear(num);
		lista->imprimir();
		cout << "Para detener escriba V, seguir F: ";cin >> stop;
	}
    
    return 0;
}
