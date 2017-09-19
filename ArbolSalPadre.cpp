#include <iostream>
#include "ArbolSalPadre.h"

using namespace std;

    Arbol_SalPadre::Arbol_SalPadre(int M){ //Iniciamos
        ultima = 0;
        arreglo = new int* [3];
        tamano = M;
        for (int i = 0; i < 3; ++i){
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
        return !numNodos;
    }
    int Arbol_SalPadre::raiz(){
        return 0;
    }
    int Arbol_SalPadre::hijoMasIzq(int nodoArbol){
        if (!vacia()){

        }else{

        }

    }
    int Arbol_SalPadre::hermanoDer(int nodoArbol){
        if(){

        }else{

        }
    }
    int Arbol_SalPadre::padre(int nodoArbol){
        if (nodoArbol != 0){
            return arreglo[1][nodoArbol];
        }else{
            std::cerr << "El nodo Raíz no tiene padre" << '\n';
        }
    }
    int Arbol_SalPadre::esHoja(int nodoArbol){
        int esHoja = 1;
        int contador = 0;
        while ( contador > tamano && esHoja) {
            if(arreglo[nodoArbol] == arreglo[contador]){
                esHoja = 0;
            }
            ++contador;
        }
        return esHoja;
    }
    int Arbol_SalPadre::etiqueta(int nodoArbol){
        return arreglo[0][nodoArbol];
    }
    int Arbol_SalPadre::numNodos(){
        return numNodos;
    }
    int Arbol_SalPadre::numHijos(int nodoArbol){
        int contadorHijos = 0;
        for (int i = 0; i < tamano; ++i){
            if (arreglo[1][i] == arreglo[1][nodoArbol]){

            }
        }
        return contadorHijos;
    }
    void Arbol_SalPadre::modificarEtiq(int nodoArbol, int etiqueta){
        arreglo[0][nodoArbol] = etiqueta;
    }
    int Arbol_SalPadre::agregarHijoIesimo(int nodoArbol, int, int){

    }
    void Arbol_SalPadre::borrarHoja(int nodoArbol){

    }
    void Arbol_SalPadre::ponerRaiz(int){

    }
