#ifndef _Cola2017
#define _Cola2017

class Cola {
    private:
        int numElem;
        int tamano;
        int* arregloCircular();
        int primera;
        int ultima;
    public:
        Cola(int); //Iniciar - Recibe M, el tamano máximo.
        ~Cola(); // Destruir
        void vaciar();
        int vacia();
        void encolar(int);
        int desencolar();
        int numElem();
        int frente();
        int ultimo();
};


#endif
