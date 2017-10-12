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
    arbolito->agregarHijoIesimo(3,90,1);
    arbolito->agregarHijoIesimo(3,100,2);
    arbolito->agregarHijoIesimo(4,303,1);
    arbolito->agregarHijoIesimo(5,451,1);
    arbolito->agregarHijoIesimo(4,130,2);
    arbolito->agregarHijoIesimo(2,115,1);
    arbolito->agregarHijoIesimo(7,8,1);
    arbolito->agregarHijoIesimo(8,10,1);
    arbolito->agregarHijoIesimo(1,11,3);
    arbolito->agregarHijoIesimo(2,22,4);
    std::cout << "Árbol 1" << '\n';
    arbolito->imprimir(cout);

    Algoritmos algo;
    algo.listarEtiquetas_iesimoNivel(arbolito,2);
    //Arbol* arbol2 = algo.copiarArbol(arbolito);
    //std::cout << "Árbol 2" << '\n';

    //arbol2->imprimir(cout);
    //Menu menu;
}
