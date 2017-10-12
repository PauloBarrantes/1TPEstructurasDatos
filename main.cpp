#include <iostream>
#include "Cola.h"
#include "ArbolSalPadre.h"
#include "Algoritmos.h"
using namespace std;

int main(){
    Arbol* arbol1 = new Arbol();
    arbol1->ponerRaiz(354);
    arbol1->agregarHijoIesimo(0,20,1);
    arbol1->agregarHijoIesimo(0,30,2);
    arbol1->agregarHijoIesimo(0,45,3);

    arbol1->agregarHijoIesimo(1,11,1);
    arbol1->agregarHijoIesimo(1,10,2);
    arbol1->agregarHijoIesimo(1,15,3);

    arbol1->agregarHijoIesimo(2,22,1);
    arbol1->agregarHijoIesimo(2,60,2);
    arbol1->agregarHijoIesimo(2,666,3);
    arbol1->agregarHijoIesimo(2,115,4);
    arbol1->agregarHijoIesimo(2,8,5);
    arbol1->agregarHijoIesimo(2,10,6);

    arbol1->agregarHijoIesimo(3,11,1);
    arbol1->agregarHijoIesimo(3,90,2);
    arbol1->agregarHijoIesimo(3,100,3);

    arbol1->agregarHijoIesimo(4,303,1);
    arbol1->agregarHijoIesimo(4,130,2);

    arbol1->agregarHijoIesimo(5,451,1);

    arbol1->agregarHijoIesimo(10,84,1);
    arbol1->agregarHijoIesimo(11,25,1);

    arbol1->agregarHijoIesimo(12,83,1);
    arbol1->agregarHijoIesimo(12,84,2);
    arbol1->agregarHijoIesimo(12,85,3);

    arbol1->agregarHijoIesimo(13,21,1);


    arbol1->agregarHijoIesimo(14,39,1);
    arbol1->agregarHijoIesimo(15,69,1);

    std::cout << "Árbol 1" << '\n';
    arbol1->imprimir(cout);

    Algoritmos algo;
    algo.listarEtiquetas_iesimoNivel(arbol1,3);
    Arbol* arbol2 = algo.copiarArbol(arbol1);
    std::cout << "Árbol 2" << '\n';

    arbol2->imprimir(cout);
    cout << "El árbol 1 y 2 son:     " << algo.iguales(arbol1, arbol2) << endl;

    algo.listarEtiquetasDeNodo(arbol1, 2 );
    //Menu menu;
}
