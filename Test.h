/*!
   \file "Test"
   \brief "Clase que hace un test de tiempo de 2 estructuras de datos con ciertos algoritmos y operadores básicos"
   \author "Paulo Barrantes"
   \date "26"/"10"/"2017"
*/
#ifndef Test_2017
#define Test_2017
//#include "ArbolSalPadre.h"
#include <time.h>

#include "ArbolHMI_HD.h"
#include "GeneradorArbol.h"
#include "Algoritmos.h"

class Test {
    private:
		Algoritmos * algoritmo;
        //Clase time
        time_t timer;
        //arbolPino
        Arbol * arbolN1A1;
        Arbol * arbolN2A1;
        Arbol * arbolN3A1;
        Arbol * arbolN4A1;
        //árbolArbusto
        Arbol * arbolN1A2;
        Arbol * arbolN2A2;
        Arbol * arbolN3A2;
        Arbol * arbolN4A2;
        //árbolBinario
        Arbol* arbolN1A3;
        Arbol* arbolN2A3;
        Arbol* arbolN3A3;
        Arbol* arbolN4A3;
        //árbolPromedio
        Arbol* arbolN1A4;
        Arbol* arbolN2A4;
        Arbol* arbolN3A4;
        Arbol* arbolN4A4;

        GeneradorArbol* genArbol;

        void testPino();
        void testArbusto();
        void testPromedio();
        void testBinario();

    public:
        Test();
        ~Test();
        void testGeneral();
        void testOpBasico1(Arbol*);
        void testOpBasico2(Arbol*);
        void testOpBasico3(Arbol*);
        void testAlgoritmo1(Arbol*);
        void testAlgoritmo2(Arbol*);
        void testAlgoritmo3(Arbol*);
        void testAlgoritmo4(Arbol*);
};



#endif
