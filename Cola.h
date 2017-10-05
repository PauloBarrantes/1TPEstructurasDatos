/*!
   \file "Cola.h"
   \brief "Description"
   \author "PauloBarrantes"
   \date "17"/"septiembre"/"2017"
*/

#ifndef _Cola2017
#define _Cola2017

#define M 1000
class Cola {
    private:
        int numElem;
        int tamano;
        int* arregloCircular;
        int primera;
        int ultima;
    public:
        Cola(); //Iniciar
        ~Cola(); // Destruir
        void vaciar();
        int vacia();
        void encolar(int);
        int desencolar();
        int numElementos();
        int frente();
        int ultimo();
};


#endif
