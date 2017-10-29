#include <iostream>
#include "ArbolSalPadre.h"
using namespace std;



    //Métodos del nodo Arbol //
    Arbol::Caja::Caja(int etiqueta, Arbol::Nodo padre){
        this->etiqueta = etiqueta;
        this->padre = padre;
    }
    Arbol::Caja::Caja(){
        this->etiqueta = 0;
        this->padre = 0;
    }
    void Arbol::Caja::setEtiqueta(int etiqueta){
        this->etiqueta = etiqueta;
    }
    //Métodos del árbol //
    Arbol::Arbol(){ //Iniciamos
        ultima = 0;
        nNodos = 0;
        nodoNulo = -1;
        arreglo = new Arbol::Caja[M];
        tamano = M;
    }
    Arbol::~Arbol(){ //destruimos
        delete arreglo;
    }
    void Arbol::vaciar(){
        ultima = 0;
    }
    int Arbol::vacia(){
        return !nNodos;
    }
    Arbol::Nodo Arbol::raiz(){
        return 0; // Retorna la celda 0 del array
    }

    Arbol::Nodo Arbol::hijoMasIzq(Arbol::Nodo nodoArbol){
        Arbol::Nodo hijoMasIzq = nodoArbol;
        int encontrado = 0;
        while (hijoMasIzq <= ultima && !encontrado) {
            if(arreglo[hijoMasIzq].padre == nodoArbol){
                encontrado = 1;
            }else{
                ++hijoMasIzq;
            }
        }
        if(hijoMasIzq > ultima){
            hijoMasIzq = -1;
        }
        return hijoMasIzq;
    }

    Arbol::Nodo Arbol::hermanoDer(Arbol::Nodo nodoArbol){
        Arbol::Nodo hermanoDerecho = nodoArbol+1;
        int encontrado = 0;
        while (hermanoDerecho <= ultima && !encontrado) {
            if( arreglo[hermanoDerecho].padre ==  arreglo[nodoArbol].padre){
                encontrado = 1;
            }else{
                ++hermanoDerecho;
            }
        }
        if(hermanoDerecho >ultima ){
            hermanoDerecho = -1;
        }
        return hermanoDerecho;
    }

    Arbol::Nodo Arbol::padre(Arbol::Nodo nodoArbol){
        return arreglo[nodoArbol].padre;
    }

    int Arbol::esHoja(Arbol::Nodo nodoArbol){
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

    int Arbol::etiqueta(Arbol::Nodo nodoArbol){
        return arreglo[nodoArbol].etiqueta;
    }

    int Arbol::numNodos(){
        return nNodos;
    }

    int Arbol::numHijos(Arbol::Nodo nodoArbol){
        int contadorHijos = 0;
        for (int i = 0; i < ultima; ++i){
            if (arreglo[i].padre == nodoArbol){
                ++contadorHijos;
            }
        }
        return contadorHijos;
    }

    void Arbol::modificarEtiq(Arbol::Nodo nodoArbol, int etiqueta){
        arreglo[nodoArbol].setEtiqueta(etiqueta);
    }

    Arbol::Nodo Arbol::agregarHijoIesimo(Arbol::Nodo nodoArbol, int etiqueta, int posicion){
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
                        if(arreglo[i].padre >= contador-1){
                            arreglo[i].padre = arreglo[i].padre +1;
                        }
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

    std::ostream& Arbol::imprimir(std::ostream& salida){

        for (int i = 0; i <= ultima; ++i){
            salida << "Indice:" << i <<" " << "Etiqueta: " << arreglo[i].etiqueta << " Padre: " << arreglo[arreglo[i].padre].etiqueta <<'\n';
        }
        return salida;
    }

    void Arbol::borrarHoja(Arbol::Nodo nodoArbol){
        if (vacia()){
            std::cerr << "El arbol está vacio" << '\n';
        }else{
            for(int i = nodoArbol; i <= ultima; ++i){
                arreglo[i] = arreglo[i+1];
            }
            ultima -= 1;
            nNodos -= 1;
        }
    }

    void Arbol::ponerRaiz(int etiqueta){
        arreglo[0].etiqueta = etiqueta;
        arreglo[0].padre = -1;
        ultima = 0;
        nNodos+= 1;
    }

    Arbol::Nodo Arbol::buscarNodo(int etiqueta){
        int nodo = 0;
        int encontrado = 0;
        while(nodo < tamano && !encontrado){
            if(arreglo[nodo].etiqueta == etiqueta){
                encontrado = 1;
            }else{
                ++nodo;
            }
        }
        if(nodo == tamano){
            nodo = -1;
        }
        return nodo;
    }
