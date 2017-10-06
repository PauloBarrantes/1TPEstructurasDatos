#ifndef Menu_Usuario2017
#define Menu_Usuario2017
//#include "ArbolSalPadre.h"
//#include "ArbolHMI_HD_puntHIzq_Padre.h"
//#include "ArbolHMI_HD.h"
#include "ArbolHMI_HD_utimoPadre.h"
//#include ""
#include "Cola.h"
class Menu {
    private:
        Arbol* arbol1;
        Cola* cola1;
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
        void raiz();
        void hijoMasIzq();
        void hermanoDer();
        void padre();
        void esHoja();
        void numNodos();
        void numHijos();
        void modificarEtiq();
        void agregarHijoIesimo();
        void borrarHoja();
        void ponerRaiz();
        void imprimir();
        //Cola
        void iniciarC();
        void destruirC();
        void vaciarC();
        void vaciaC();
        void encolarC();
        void desencolarC();
        void numElementosC();
        void frenteC();
        void ultimoC();
};
// g++ main.cpp cola.cpp arbolsalpadre.cpp menu.cpp -o ejecutable

#endif
