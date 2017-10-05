#import <iostream>
#import "ArbolLDL.h"

using namespace std;

Arbol::Cajita::Cajita(Nodo nodo){
  this->nodo = nodo;
  this->hermanoDerecho = 0;
}

Arbol::Cajita::~Cajita(){
  if(nodo){
    delete this->nodo;
  }
  if(this->hermanoDerecho != 0){
    delete this->hermanoDerecho;
  }
}

ostream& Arbol::Cajita::toString(ostream& salida){
  this->nodo->toString(salida);
  salida<< ", ";
  if(hermanoDerecho){
    this->hermanoDerecho->toString(salida);
  }
  return salida;
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

ostream& Arbol::Caja::toString(ostream& salida){
  salida<< this->etiqueta;
  if(hijoMasIzquierdo){
    salida<<" {";
    hijoMasIzquierdo->toString(salida);
    salida<<"} ";
  }
  return salida;
}

Arbol::Cajita* Arbol::buscarCajita(Nodo nodoRef){
  Cajita* buscado = 0;
  Nodo padreActual = raizArbol;
  Cajita* cajitaActual = padreActual->hijoMasIzquierdo;
  while (padreActual->siguiente != 0) {
    while (cajitaActual != 0){
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
  return numeroNodos == 0;
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
  Cajita* cajitaActual = padreActual->hijoMasIzquierdo;
  while (padreActual->siguiente != 0) {
    while (cajitaActual != 0){
      if(cajitaActual->nodo == nodoRef){
        padre = padreActual;
      }
      cajitaActual = cajitaActual->hermanoDerecho;
    }
    padreActual = padreActual->siguiente;
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
  ++numeroNodos;
  return nuevoNodo;
}

void Arbol::borrarHoja(Nodo hoja){
  Nodo nodoActual = raizArbol;
  while(nodoActual->siguiente != hoja){
    nodoActual = nodoActual->siguiente;
  }
  nodoActual->siguiente = hoja->siguiente;
  hoja->siguiente = 0;
  std::cout << "aisla nodo victima" << '\n';
  Cajita* victima = buscarCajita(hoja);
  std::cout << "encuentra a la cajita victima" << '\n';
  nodoActual = padre(hoja);
  std::cout << "encuentra al padre del nodo victima" << '\n';

  if(nodoActual->hijoMasIzquierdo == victima){
    std::cout << "va a hacer el if" << '\n';
    nodoActual->hijoMasIzquierdo = victima->hermanoDerecho;
    std::cout << "hizo el if" << '\n';

  }
  else{
    std::cout << "va a hacer el else" << '\n';
    Cajita* cajitaActual = nodoActual->hijoMasIzquierdo;
    while(cajitaActual->hermanoDerecho != victima){
      cajitaActual = cajitaActual->hermanoDerecho;
    }
    std::cout << "encuentra al hermano izquierdo de la victima" << '\n';
    cajitaActual->hermanoDerecho = victima->hermanoDerecho;
  }
  victima->hermanoDerecho = 0;
  std::cout << "aisla la cajita" << '\n';
  delete victima;
  --numeroNodos;
}

void Arbol::ponerRaiz(int etiqueta){
  if(vacia()){
    raizArbol = new Caja(etiqueta);
    ++numeroNodos;
  }
}

ostream& Arbol::toString(ostream& salida){
  return raizArbol->toString(salida);
}
