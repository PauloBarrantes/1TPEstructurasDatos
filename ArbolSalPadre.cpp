#include <iostream>
#include "ArbolSalPadre.h"
#define M 1000
using namespace std;



    //Métodos del nodo Arbol //
    ArbolSalPadre::Caja::Caja(int etiqueta, ArbolSalPadre::Nodo padre){
        this->etiqueta = etiqueta;
        this->padre = padre;
    }
    ArbolSalPadre::Caja::Caja(){
        this->etiqueta = 0;
        this->padre = 0;
    }
    void ArbolSalPadre::Caja::setEtiqueta(int etiqueta){
        this->etiqueta = etiqueta;
    }
    //Métodos del árbol //
    ArbolSalPadre::ArbolSalPadre(){ //Iniciamos
        ultima = 0;
        nNodos = 0;
        arreglo = new ArbolSalPadre::Caja[M];
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
    ArbolSalPadre::Nodo ArbolSalPadre::raiz(){
        return 0; // Retorna la celda 0 del array
    }
    /*!
       \brief "Description"
       \param "Param description"s
       \return "Return of the function"
    */
    ArbolSalPadre::Nodo ArbolSalPadre::hijoMasIzq(ArbolSalPadre::Nodo nodoArbol){
        ArbolSalPadre::Nodo hijoMasIzq = nodoArbol;
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
    
    /*!
       \brief "Description"
       \param "Param description"s
       \return "Return of the function"
    */
    ArbolSalPadre::Nodo ArbolSalPadre::hermanoDer(ArbolSalPadre::Nodo nodoArbol){
        ArbolSalPadre::Nodo hermanoDerecho = nodoArbol;
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
    ArbolSalPadre::Nodo ArbolSalPadre::padre(ArbolSalPadre::Nodo nodoArbol){
        return arreglo[nodoArbol].padre;
    }
    /*!
       \brief "Description"
       \param "Param description"s
       \return "Return of the function"
    */
    int ArbolSalPadre::esHoja(ArbolSalPadre::Nodo nodoArbol){
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
    /*!
       \brief "Description"
       \param "Param description"s
       \return "Return of the function"
    */
    int ArbolSalPadre::etiqueta(ArbolSalPadre::Nodo nodoArbol){
        return arreglo[nodoArbol].etiqueta;
    }
    /*!
       \brief "Description"
       \param "Param description"s
       \return "Return of the function"
    */
    int ArbolSalPadre::numNodos(){
        return nNodos;
    }
    /*!
       \brief "Description"
       \param "Param description"s
       \return "Return of the function"
    */
    int ArbolSalPadre::numHijos(ArbolSalPadre::Nodo nodoArbol){
        int contadorHijos = 0;
        for (int i = 0; i < ultima; ++i){
            if (arreglo[i].padre == nodoArbol){
                ++contadorHijos;
            }
        }
        return contadorHijos;
    }
    /*!
       \brief "Description"
       \param "Param description"s
       \return "Return of the function"
    */
    void ArbolSalPadre::modificarEtiq(ArbolSalPadre::Nodo nodoArbol, int etiqueta){
        arreglo[nodoArbol].setEtiqueta(etiqueta);
    }
    /*!
       \brief "Description"
       \param "Param description"
       \return "Return of the function"
    */
    int ArbolSalPadre::agregarHijoIesimo(ArbolSalPadre::Nodo nodoArbol, int etiqueta, int posicion){
        int contador = 0;
            if(tamano > nNodos){ //Vemos si aun queda espacio en el array
                int pos = 0;
                while(contador <= ultima && pos != posicion){
                    if(arreglo[contador].padre == nodoArbol){
                        pos ++;
                    }
                ++contador;
                }
                if(pos == posicion){ // hay que insertar en medio del array lógico
                    for(int i = ultima; i >= contador-1; --i){
                        arreglo[i+1] = arreglo[i];
                    }
                    arreglo[contador-1].padre = nodoArbol;
                    arreglo[contador-1].etiqueta = etiqueta;
                }else{
                    arreglo[contador].padre = nodoArbol;
                    arreglo[contador].etiqueta = etiqueta;
                }
            ++nNodos;
            ++ultima;
            }
        return contador;
    }
    void ArbolSalPadre::imprimir(){
        for (int i = 0; i <= ultima; ++i){
            std::cout << "Indice:" << i <<" " << "Etiqueta: " << arreglo[i].etiqueta << " Padre: " << arreglo[i].padre <<'\n';
        }
    }
    /*!
       \brief "Description"
       \param "Param description"s
       \return "Return of the function"
    */
    void ArbolSalPadre::borrarHoja(ArbolSalPadre::Nodo nodoArbol){
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
        ultima = 0;
        nNodos+= 1;
    }
