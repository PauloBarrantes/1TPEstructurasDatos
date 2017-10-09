#include <iostream>
#include "Cola.h"
#include "ArbolSalPadre.h"
#include "Algoritmos.h"
using namespace std;

int main(){
    Arbol* arbolito = new Arbol();
    arbolito->ponerRaiz(354);
    for(int i = 1; i < 4 ; ++i){
        arbolito->agregarHijoIesimo(0, 14, i);
    }
    for(int i = 1; i < 3 ; ++i){
        arbolito->agregarHijoIesimo(i, 1, i);
    }
    arbolito->imprimir(cout);
    Algoritmos algo;
    Arbol* arbol2 = algo.copiarArbol(arbolito);
    arbol2->imprimir(cout);
    //Menu menu;
}
