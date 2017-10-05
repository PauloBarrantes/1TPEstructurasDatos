#import <iostream>
#import "ArbolLDL.h"

Arbol::Cajita::Cajita(Nodo nodo){
  this->nodo = nodo;
  this->hermanoDerecho = 0;
}

Arbol::Cajita::~Cajita(){
  delete this->nodo;
  if(this->hermanoDerecho != 0){
    delete this->hermanoDerecho;
  }
}

Arbol::Caja::Caja(int etiqueta){
  this->etiqueta = etiqueta;
  this->hijoMasIzquierdo = 0;
  this->siguiente = 0;
}

Arbol::Caja::~Caja(){
  if(this->hijoMasIzquierdo != 0){
    delete hijoMasIzquierdo;
  }
  if(this->siguiente != 0){
    delete siguiente;
  }
}

Arbol::Cajita* Arbol::buscarCajita(Nodo nodoRef){
  Cajita* buscado = 0;
  Nodo padreActual = raizArbol;
  Cajita* cajitaActual = padreActual->hijoMasIzquierdo;
  while (padreActual->siguiente != 0) {
    while (cajitaActual->hermanoDerecho != 0){
      if(cajitaActual->nodo == nodoRef){
        buscado = cajitaActual;
      }
      cajitaActual = cajitaActual->hermanoDerecho;
    }
    padreActual = padreActual->siguiente;
  }
  return buscado;
}

Arbol::Arbol(){
  this->_init();
}

void Arbol::_init(){
  numeroNodos = 0;
  raizArbol = 0;
}

Arbol::~Arbol(){
  delete raizArbol;
}

void Arbol::vaciar(){
  delete this;
  this->_init();
}

int Arbol::vacia(){
  return raizArbol == 0;
}

Arbol::Nodo Arbol::raiz(){
  return this->raizArbol;
}

Arbol::Nodo Arbol::hijoMasIzq(Nodo nodoRef){
  return nodoRef->hijoMasIzquierdo->nodo;
}

Arbol::Nodo Arbol::hermanoDer(Nodo nodoRef){
  return buscarCajita(nodoRef)->hermanoDerecho->nodo;
}

Arbol::Nodo Arbol::padre(Nodo nodoRef){
  Nodo padre = 0;
  Nodo padreActual = raizArbol;
  Cajita* cajitaActual = padre->hijoMasIzquierdo;
  while (padre->siguiente != 0) {
    while (cajitaActual->hermanoDerecho != 0){
      if(cajitaActual->nodo == padre){
        padre = padreActual;
      }
      cajitaActual = cajitaActual->hermanoDerecho;
    }
    padre = padre->siguiente;
  }
  return padre;
}

int Arbol::esHoja(Nodo nodoRef){
  return nodoRef->hijoMasIzquierdo == 0;
}

int Arbol::etiqueta(Nodo nodoRef){
  return nodoRef->etiqueta;
}

int Arbol::numNodos(){
  return numeroNodos;
}

int Arbol::numHijos(Nodo nodoRef){
  int numeroHijos = 0;
  Arbol::Cajita* siguiente = nodoRef->hijoMasIzquierdo;
  while (siguiente != 0) {
    ++numeroHijos;
    siguiente = siguiente->hermanoDerecho;
  }
  return numeroHijos;
}

void Arbol::modificarEtiq(Nodo nodoRef, int nuevaEtiqueta){
  nodoRef->etiqueta = nuevaEtiqueta;
}

Arbol::Nodo Arbol::agregarHijoIesimo(Nodo padre, int etiqueta, int posicion){
  Nodo nuevoNodo = new Caja(etiqueta);
  nuevoNodo->siguiente = raizArbol->siguiente;
  raizArbol->siguiente = nuevoNodo;
  Nodo nodoActual = raizArbol;
  while(nodoActual != padre){
    nodoActual = nodoActual->siguiente;
  }
  Cajita* nuevaCajita = new Cajita(nuevoNodo);
  Cajita* cajitaActual = padre->hijoMasIzquierdo;
  if(posicion > 1){
    for(int i = 1; i < posicion-1; ++i){
      cajitaActual = cajitaActual->hermanoDerecho;
    }
    nuevaCajita->hermanoDerecho = cajitaActual->hermanoDerecho;
    cajitaActual->hermanoDerecho = nuevaCajita;
  }
  else{
    nuevaCajita->hermanoDerecho = cajitaActual;
    padre->hijoMasIzquierdo = nuevaCajita;
  }
  return nuevoNodo;
}

void Arbol::borrarHoja(Nodo hoja){
  Nodo nodoActual = raizArbol;
  while(nodoActual->siguiente != hoja){
    nodoActual = nodoActual->siguiente;
  }
  nodoActual->siguiente = hoja->siguiente;
  hoja->siguiente = 0;
  Cajita* victima = buscarCajita(hoja);
  nodoActual = padre(hoja);
  if(nodoActual->hijoMasIzquierdo == victima){
    nodoActual->hijoMasIzquierdo = victima->hermanoDerecho;
  }
  else{
    Cajita* cajitaActual = nodoActual->hijoMasIzquierdo;
    while(cajitaActual->hermanoDerecho != victima){
      cajitaActual = cajitaActual->hermanoDerecho;
    }
    cajitaActual->hermanoDerecho = victima->hermanoDerecho;
  }
  victima->hermanoDerecho = 0;
  delete victima;
}

void Arbol::ponerRaiz(int etiqueta){
  if(vacia()){
    raizArbol->etiqueta = etiqueta;
  }
}
