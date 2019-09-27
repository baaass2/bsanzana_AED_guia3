#include <iostream>
using namespace std;

#ifndef numEntero_H
#define numEntero_H

class numEntero {
    private:
        int num = 0;

    public:
        /* constructor */
        numEntero(int num);
        
        /* métodos get */
        int get_num();
};
#endif
