#include <iostream>
#include "ArbolSalPadre.h"
#define M 1000
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
        arreglo = new Arbol::Caja[M];
        tamano = M;
    }
    Arbol::~Arbol(){
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
    /*!
       \brief "Description"
       \param "Param description"s
       \return "Return of the function"
    */
    Arbol::Nodo Arbol::hijoMasIzq(Arbol::Nodo nodoArbol){
        Arbol::Nodo hijoMasIzq = nodoArbol;
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
    Arbol::Nodo Arbol::hermanoDer(Arbol::Nodo nodoArbol){
        Arbol::Nodo hermanoDerecho = nodoArbol;
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
    Arbol::Nodo Arbol::padre(Arbol::Nodo nodoArbol){
        return arreglo[nodoArbol].padre;
    }
    /*!
       \brief "Para determinar si un nodo es hoja o no"
       \param "Entra como parametro un nodo "
       \return "Retorna un entero 1-Si es Hoja 0-Si no es hoja"
    */
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
    /*!
       \brief "Ver la etiqueta de un nodo"
       \param "Recibe un nodo"
       \return "La etiqueta del nodo"
    */
    int Arbol::etiqueta(Arbol::Nodo nodoArbol){
        return arreglo[nodoArbol].etiqueta;
    }
    /*!
       \brief "Ver la cantidad de nodos que tiene el árbol "
       \param "No recibe"
       \return "Retorna el número nodos"
    */
    int Arbol::numNodos(){
        return nNodos;
    }
    /*!
       \brief "Averigua el número de hijos que tiene un nodo"
       \param "Recibe un nodo"
       \return "Retorna el número de hijos que tiene un nodo"
    */
    int Arbol::numHijos(Arbol::Nodo nodoArbol){
        int contadorHijos = 0;
        for (int i = 0; i < ultima; ++i){
            if (arreglo[i].padre == nodoArbol){
                ++contadorHijos;
            }
        }
        return contadorHijos;
    }
    /*!
       \brief "Modifica la etiqueta de un nodo ya creado"
       \param "Recibe un nodo y un entero etiqueta"
       \return "No retorna nada"
    */
    void Arbol::modificarEtiq(Arbol::Nodo nodoArbol, int etiqueta){
        arreglo[nodoArbol].setEtiqueta(etiqueta);
    }
    /*!
       \brief "Le agrega un hijo a un nodo en la iesima posición "
       \param "Recibe un nodo, una etiqueta y un entero posición"
       \return "Retorna el nodo del hijo que se creo"
    */
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
    /*!
       \brief "Imprime las etiquetas y el padre del árbol"
       \param "No recibe"
       \return "No retorna nada"
    */
    std::ostream& Arbol::imprimir(std::ostream& salida){

        for (int i = 0; i <= ultima; ++i){
            salida << "Indice:" << i <<" " << "Etiqueta: " << arreglo[i].etiqueta << " Padre: " << arreglo[i].padre <<'\n';
        }
        return salida;
    }
    /*!
       \brief "Borra la hoja de un árbol"
       \param "Recibe un nodo"
       \return "No retorna nada"
    */
    void Arbol::borrarHoja(Arbol::Nodo nodoArbol){
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
       \brief "Crea la raiz del árbol"
       \param "Recibe una etiqueta"
       \return "No retorna nada"
    */
    void Arbol::ponerRaiz(int etiqueta){
        arreglo[0].etiqueta = etiqueta;
        arreglo[0].padre = -1;
        ultima = 0;
        nNodos+= 1;
    }
    /*!
       \brief "Busca el nodo que contiene esa etiqueta"
       \param "Recibe una etiqueta "
       \return "Un nodo que le corresponde esa etiqueta"
    */
    Arbol::Nodo Arbol::buscarNodo(int etiqueta){
        int nodo = 0;
        int encontrado = 0;
        while(nodo < tamano && !encontrado){
            if(arreglo[nodo].etiqueta == etiqueta){
                encontrado = 1;
            }
            ++nodo;
        }
        if(nodo == tamano){
            nodo = -1;
        }
        return nodo;
    }
