#ifndef Menu_Usuario2017
#define Menu_Usuario2017
#include "ArbolSalPadre.h"
#include "Cola.h"
class Menu {
    private:
        ArbolSalPadre Arbol;
    public:
        Menu();
        ~Menu();
        void controlador();
        void pruebaArbol();
        void pruebaCola();
        void instruccionesArbol();
        void instruccionesCola();


};

#endif
