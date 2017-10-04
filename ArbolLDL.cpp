#import <iostream>
#import "ArbolLDL.h"

Arbol_ListaDeListas::Cajita::Cajita(Nodo nodo){
  this->nodo = nodo;
  this->hermanoDerecho = 0;
}

Arbol_ListaDeListas::Cajita::~Cajita(){
  delete this->nodo;
  if(this->hermanoDerecho != 0){
    delete this->hermanoDerecho;
  }
}

Arbol_ListaDeListas::Caja::Caja(int etiqueta){
  this->etiqueta = etiqueta;
  this->hijoMasIzquierdo = 0;
  this->siguiente = 0;
}

Arbol_ListaDeListas::Caja::~Caja(){
  if(this->hijoMasIzquierdo != 0){
    delete hijoMasIzquierdo;
  }
  if(this->siguiente != 0){
    delete siguiente;
  }
}

Arbol_ListaDeListas::Cajita* Arbol_ListaDeListas::buscar(Nodo nodoRef){}

Arbol_ListaDeListas::Arbol_ListaDeListas(){
  this->_init();
}

void Arbol_ListaDeListas::_init(){
  numeroNodos = 0;
  raizArbol = 0;
}

Arbol_ListaDeListas::~Arbol_ListaDeListas(){
  delete raizArbol;
}

void Arbol_ListaDeListas::vaciar(){
  delete this;
  this->_init();
}

int Arbol_ListaDeListas::vacia(){
  return raizArbol == 0;
}

Nodo Arbol_ListaDeListas::raiz(){
  return this->raizArbol;
}

Nodo Arbol_ListaDeListas::hijoMasIzq(Nodo nodoRef){
  return nodoRef->hijoMasIzquierdo;
}

Nodo Arbol_ListaDeListas::hermanoDer(Nodo nodoRef){
  return buscar(nodoRef)->hermanoDerecho;
}

Nodo Arbol_ListaDeListas::padre(Nodo nodoRef){
  /*recorrer guardando en cual sublista estoy, si no lo encuentro,
    paso a la siguiente caja
  */
}

int Arbol_ListaDeListas::esHoja(Nodo nodoRef){
  return (nodoRef->hijoMasIzquierdo == 0);
}

int Arbol_ListaDeListas::etiqueta(Nodo nodoRef){
  return nodoRef->etiqueta;
}

int Arbol_ListaDeListas::numNodos(){
  return numeroNodos;
}

int Arbol_ListaDeListas::numHijos(Nodo nodoRef){
  int numeroHijos = 0;
  Arbol_ListaDeListas::Cajita* siguiente = nodoRef->hijoMasIzquierdo;
  while (siguiente != 0) {
    ++numeroHijos;
    siguiente = siguiente->hermanoDerecho;
  }
  return numeroHijos;
}

void Arbol_ListaDeListas::modificarEtiq(Nodo nodoRef, int nuevaEtiqueta){
  nodoRef->etiqueta = nuevaEtiqueta;
}

int Arbol_ListaDeListas::agregarHijoIesimo(Nodo padre, int etiqueta, int posicion){}

void Arbol_ListaDeListas::borrarHoja(Nodo hoja){}

void Arbol_ListaDeListas::ponerRaiz(Nodo nuevaRaiz){
  if(vacia()){
    raizArbol = nuevaRaiz;
  }
}
