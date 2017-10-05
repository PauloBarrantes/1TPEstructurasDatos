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


};
// g++ main.cpp cola.cpp arbolsalpadre.cpp menu.cpp -o ejecutable

#endif
