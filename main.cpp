#include <iostream>
#include "Cola.h"
#include "ArbolSalPadre.h"
#include "Algoritmos.h"
using namespace std;

int main(){
    Arbol* arbolito = new Arbol();
    arbolito->ponerRaiz(354);
    arbolito->agregarHijoIesimo(0,20,1);
    arbolito->agregarHijoIesimo(0,30,2);
    arbolito->agregarHijoIesimo(0,45,3);
    arbolito->agregarHijoIesimo(1,10,1);
    arbolito->agregarHijoIesimo(1,15,2);
    arbolito->agregarHijoIesimo(2,60,1);
    arbolito->agregarHijoIesimo(2,666,2);
    arbolito->agregarHijoIesimo(3,11,1);
    arbolito->agregarHijoIesimo(3,22,2);
    std::cout << "Árbol 1" << '\n';
    arbolito->imprimir(cout);

    Algoritmos algo;
    Arbol* arbol2 = algo.copiarArbol(arbolito);
    std::cout << "Árbol 2" << '\n';

    arbol2->imprimir(cout);
    //Menu menu;
}
