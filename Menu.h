#ifndef Menu_Usuario2017
#define Menu_Usuario2017
#include "ArbolSalPadre.h"
#include "Cola.h"
class Menu {
    private:
        ArbolSalPadre Arbol;
        Cola cola1;
    public:
        Menu();
        ~Menu();
        void controlador();
        void pruebaArbol();
        void pruebaCola();
        void instruccionesArbol();
        void instruccionesCola();

        //Arbol
        void iniciar();
        void destruir();
        void vaciar();
        void vacia();
        void vaciar();
        void raiz();
        void hijoMasIzq();
        void hermanoDer();
        void padre();
        void esHoja();
        void etiqueta();
        void numNodos();
        void numHijos();
        void modificarEtiq();
        void agregarHijoIesimo();
        void borrarHoja();
        void ponerRaiz();
        void imprimir();
        //Cola
        void iniciar();
        void destruir();
        void vaciar();
        void vacia();
        void encolar();
        void desencolar();
        void numElementos();
        void frente();
        void ultimo();
};
// g++ main.cpp cola.cpp arbolsalpadre.cpp menu.cpp -o ejecutable

#endif
