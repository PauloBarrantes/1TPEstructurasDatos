#include <iostream>
#include "ArbolSalPadre.h"
#define M 1000
using namespace std;

    //Métodos del nodo Arbol //
    ArbolSalPadre::NodoArbol::NodoArbol(int etiqueta, int padre){
        this->etiqueta = etiqueta;
        this->padre = padre;
    }
    ArbolSalPadre::NodoArbol::NodoArbol(){
        this->etiqueta = 0;
        this->padre = 0;
    }
    void ArbolSalPadre::NodoArbol::setEtiqueta(int etiqueta){
        this->etiqueta = etiqueta;
    }
    //Métodos del árbol //
    ArbolSalPadre::ArbolSalPadre(){ //Iniciamos
        ultima = 0;
        nNodos = 0;
        arreglo = new ArbolSalPadre::NodoArbol[M];
        tamano = M;
    }
    ArbolSalPadre::~ArbolSalPadre(){
        delete arreglo;
    }
    void ArbolSalPadre::vaciar(){
        ultima = 0;
    }
    int ArbolSalPadre::vacia(){
        return !nNodos;
    }
    int ArbolSalPadre::raiz(){
        return 0; // Retorna la celda 0 del array
    }
    int ArbolSalPadre::hijoMasIzq(int nodoArbol){
        int hijoMasIzq = nodoArbol;
        int encontrado = 0;
        while (hijoMasIzq < ultima && !encontrado) {
            if(arreglo[hijoMasIzq].padre == nodoArbol){
                encontrado = 1;
            }else{
                ++hijoMasIzq;
            }
        }
        return hijoMasIzq;
    }
    int ArbolSalPadre::hermanoDer(int nodoArbol){
        int hermanoDerecho = nodoArbol;
        int encontrado = 0;
        while (hermanoDerecho < ultima && !encontrado) {
            if(arreglo[hermanoDerecho].padre == nodoArbol){
                encontrado = 1;
            }else{
                ++hermanoDerecho;
            }
        }
        return hermanoDerecho;
    }
    /*!
       \brief "Devolvemos el padre del nodoarbol que entro como parametro"
       \param "Entra un nodo arbol"
       \return "Retorna el nodo padre"
    */
    int ArbolSalPadre::padre(int nodoArbol){
        return arreglo[nodoArbol].padre;
    }
    int ArbolSalPadre::esHoja(int nodoArbol){
        int esHoja = 1;
        int contador = 0;
        while ( contador < ultima && esHoja) {
            if(arreglo[contador].padre == nodoArbol){
                esHoja = 0;
            }
            ++contador;
        }
        return esHoja;
    }
    int ArbolSalPadre::etiqueta(int nodoArbol){
        return arreglo[nodoArbol].etiqueta;
    }
    int ArbolSalPadre::numNodos(){
        return nNodos;
    }
    int ArbolSalPadre::numHijos(int nodoArbol){
        int contadorHijos = 0;
        for (int i = 0; i < ultima; ++i){
            if (arreglo[i].padre == nodoArbol){
                ++contadorHijos;
            }
        }
        return contadorHijos;
    }
    void ArbolSalPadre::modificarEtiq(int nodoArbol, int etiqueta){
        arreglo[nodoArbol].setEtiqueta(etiqueta);
    }
    /*!
       \brief "Description"
       \param "Param description"
       \return "Return of the function"
    */
    int ArbolSalPadre::agregarHijoIesimo(int nodoArbol, int etiqueta, int posicion){
        int contador = 0;
        if(vacia()){
            ponerRaiz(etiqueta);
        }else{
            if(nNodos < M){ //Vemos si el arreglo está lleno
                int numHijo = 0;
                cout << "Bueno acá genial" << endl;
                while (contador < ultima && numHijo != posicion ) {
                    if(arreglo[contador].padre == nodoArbol){
                        numHijo++;
                    }else{
                        ++contador;
                    }
                }

                if(numHijo < numHijos(nodoArbol)){
                    int contador2 = ultima;
                    while(contador2 > contador ){
                        arreglo[contador2+1] = arreglo[contador];
                        contador2--;
                    }
                    arreglo[contador].padre = nodoArbol;
                    arreglo[contador].etiqueta = etiqueta;
                    ultima++;
                    nNodos++;
                }else{
                    ultima++;
                    arreglo[ultima].padre = nodoArbol;
                    arreglo[ultima].etiqueta = etiqueta;
                    nNodos++;
                }

            }else{
                std::cerr << "El arreglo está lleno" << '\n';
            }
        }

        return contador;

    }
    void ArbolSalPadre::imprimir(){
        for (int i = 0; i < ultima; ++i){
            std::cout << "Indice:" << i <<" " << "Etiqueta: " << arreglo[i].etiqueta << " Padre: " << arreglo[i].padre <<'\n';
        }
    }
    /*!
       \brief "Description"
       \param "Param description"s
       \return "Return of the function"
    */
    void ArbolSalPadre::borrarHoja(int nodoArbol){
        if (vacia()){
            std::cerr << "El arbol está vacio" << '\n';
        }else{
            for(int i = nodoArbol; i < ultima; ++i){
                arreglo[i] = arreglo[i+1];
            }
            ultima -= 1;
            nNodos -= 1;
        }
    }
    /*!
       \brief "Description"
       \param "Param description"s
       \return "Return of the function"
    */
    void ArbolSalPadre::ponerRaiz(int etiqueta){
        arreglo[0].etiqueta = etiqueta;
        arreglo[0].padre = -1;
        ultima += 1;
        nNodos+= 1;
    }
