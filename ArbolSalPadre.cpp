#include <iostream>
#include "ArbolSalPadre.h"
#define M 1000
using namespace std;

    Arbol_SalPadre::Arbol_SalPadre(){ //Iniciamos
        typedef Arbol_SalPadre::NodoArbol NodoArbol;
        ultima = 0;
        arreglo = new NodoArbol* [M];
        tamano = M;
    }
    Arbol_SalPadre::~Arbol_SalPadre(){
        delete arreglo[];
    }
    void Arbol_SalPadre::vaciar(){
        ultima = 0;
    }
    int Arbol_SalPadre::vacia(){
        return !numNodos;
    }
    int Arbol_SalPadre::raiz(){
        return 0; // Retorna la celda 0 del array
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
    /*!
       \brief "Devolvemos el padre del nodoarbol que entro como parametro"
       \param "Entra un nodo arbol"
       \return "Retorna el nodo padre"
    */
    int Arbol_SalPadre::padre(int nodoArbol){
        if (nodoArbol != 0){
            return arreglo[nodoArbol].getPadre();
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
    /*!
       \brief "Description"
       \param "Param description"
       \return "Return of the function"
    */
    int Arbol_SalPadre::agregarHijoIesimo(int nodoArbol, int etiqueta, int posicion){
        if(vacia()){
            ponerRaiz(etiqueta);
        }else{
            if(numElem < M){ //Vemos si el arreglo está lleno

                while (/* condition */) {
                    /* code */
                }
                arreglo[ultima][0] = etiqueta;
                arreglo[ultima][1] = nodoArbol;
                arreglo[ultima][2] = posicion;
            }else{
                std::cerr << "El arreglo está lleno" << '\n';
            }


        }
    }
    void Arbol_SalPadre::borrarHoja(int nodoArbol){
        if (vacia()){
            std::cerr << "El arbol está vacio" << '\n';
        }else{

        }
    }
    void Arbol_SalPadre::ponerRaiz(int etiqueta){
        arreglo[0][0] = etiqueta;
        arreglo[0][1] = -1;
        arreglo[0][2] = -1;
    }
