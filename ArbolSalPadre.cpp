#include <iostream>
#include "ArbolSalPadre.h"

using namespace std;

    //-- Metodos del NodoArbol --
        Arbol_SalPadre::NodoArbol::NodoArbol(int etiqueta, int padre){
            this->etiqueta = etiqueta;
            this->padre = padre;
        }
        Arbol_SalPadre::NodoArbol::NodoArbol(int raiz){
            this->etiqueta = raiz;
            this->padre = -1; //No tiene padre por lo tanto colocamos un indice invalido
        }
        void Arbol_SalPadre::NodoArbol::setEtiqueta(int etiqueta){
            this->etiqueta = etiqueta;
        }
        int Arbol_SalPadre::NodoArbol::getEtiqueta(){
            return this->etiqueta;
        }
        void Arbol_SalPadre::NodoArbol::setPadre(int padre){
            this->padre= padre;
        }
        int Arbol_SalPadre::NodoArbol::getPadre(){
            return this->padre;
        }
    // Acaban los métodos del NodoArbol
    Arbol_SalPadre::Arbol_SalPadre(int M){ //Iniciamos
        ultima = 0;
        arreglo = new int* [2];
        for (int i = 0; i < 2; ++i){
            arreglo[i] = new int[M];
        }

    }
    Arbol_SalPadre::~Arbol_SalPadre(){
        //Borrar el arrglo
    }
    void Arbol_SalPadre::vaciar(){
        ultima = 0;
    }
    int Arbol_SalPadre::vacia(){
        return ultima;
    }
    NodoArbol Arbol_SalPadre::raiz(){

    }
    NodoArbol Arbol_SalPadre::hijoMasIzq(nodoArbol){

    }
    NodoArbol Arbol_SalPadre::hermanoDer(NodoArbol){

    }
    NodoArbol Arbol_SalPadre::padre(NodoArbol){

    }
    int Arbol_SalPadre::esHoja(NodoArbol){

    }
    int Arbol_SalPadre::etiqueta(){

    }
    int Arbol_SalPadre::numNodos(){

    }
    int Arbol_SalPadre::numHijos(NodoArbol){

    }
    void Arbol_SalPadre::modificarEtiq(NodoArbol, int){

    }
    NodoArbol Arbol_SalPadre::agregarHijoIesimo(nodoArbol, int, int){

    }
    void Arbol_SalPadre::borrarHoja(nodoArbol){

    }
    void Arbol_SalPadre::ponerRaiz(int){

    }
