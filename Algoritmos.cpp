#include "Algoritmos.h"
#include <iostream>
#include "Cola.h"
#include "ArbolSalPadre.h"
using namespace std;
#define nodoNulo -1


Algoritmos::Algoritmos(){
}
Algoritmos::~Algoritmos(){
}
Arbol* Algoritmos::copiarArbol(Arbol* arbol1){
    Arbol* arbol2 = new Arbol(); //Iniciamos la copia del árbol 1
    if(!arbol1->vacia()){
        Cola<Arbol::Nodo> cola1;
        Cola<Arbol::Nodo> cola2;
        cola1.encolar(arbol1->raiz());
        arbol2->ponerRaiz(arbol1->etiqueta(arbol1->raiz()));
        cola2.encolar(arbol2->raiz());
        while(!cola1.vacia()){
            Arbol::Nodo nodo1 = cola1.desencolar();
            Arbol::Nodo nodoh1 = arbol1->hijoMasIzq(nodo1);
            Arbol::Nodo nodo2 = cola2.desencolar();
            int contador = 1;
            while(nodoh1 != nodoNulo){
                cola1.encolar(nodoh1);
                cola2.encolar( arbol2->agregarHijoIesimo(nodo2, arbol1->etiqueta(nodoh1), contador) );
                nodoh1 = arbol1->hermanoDer(nodoh1);
                ++contador;
            }
        }
    }
    return arbol2;
}
void Algoritmos::listarEtiquetasDeNodo(Arbol::Nodo nodo){

}
void Algoritmos::listarEtiquetas_iesimoNivel(Arbol* arbol,int nivel){
    if(!arbol->vacia()){

    }
}
void Algoritmos::listarEtiquetas_iesimoNivelRec(int nivelActual){

}

void Algoritmos::borrarSubArbol(Arbol::Nodo nodo){

}
int Algoritmos::iguales(Arbol* arbol1, Arbol* arbol2){
    int iguales = 0;
    if(arbol1->numNodos() == arbol2->numNodos()){
        if(arbol1->etiqueta(arbol1->raiz()) == arbol2->etiqueta(arbol2->raiz()) ){
            Cola<Arbol::Nodo> cola1;
            Cola<Arbol::Nodo> cola2;
            cola1.encolar(arbol1->raiz());
            cola2.encolar(arbol2->raiz());
            while (!cola1.vacia() && !iguales) {
                Arbol::Nodo nodo1 = cola1.desencolar();
                Arbol::Nodo nodoh1 = arbol1->hijoMasIzq(nodo1);
                Arbol::Nodo nodo2 = cola2.desencolar();
                Arbol::Nodo nodoh2 = arbol2->hijoMasIzq(nodo1);
                while(nodoh1 != nodoNulo && !iguales){
                    if(nodoh1 == nodoh2){
                        cola1.encolar(nodoh1);
                        nodoh1 = arbol1->hermanoDer(nodoh1);
                        cola2.encolar(nodoh2);
                        nodoh2 = arbol->hermanoDer(nodo2);
                    }else{
                        iguales
                    }
                }
            }
        }
    }
    return iguales;
}
