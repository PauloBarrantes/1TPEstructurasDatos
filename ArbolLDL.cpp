#import <iostream>
#import "ArbolLDL.h"

Arbol_ListaDeListas::Cajita::Cajita(Caja* nodo){
  this->nodo = nodo;
  this->hermanoDer = 0;
}

Arbol_ListaDeListas::Cajita::~Cajita(){
  delete this->nodo;
  if(this->hermanoDer != 0){
    delete this->hermanoDer;
  }
}

Arbol_ListaDeListas::Caja::Caja(int etiqueta){
}

Arbol_ListaDeListas::Caja::~Caja(){
}

Caja* Arbol_ListaDeListas::buscar(Caja* nodoRef){}

Arbol_ListaDeListas::Arbol_ListaDeListas(){
  this->_init();
}

void Arbol_ListaDeListas::_init(){
  numeroNodos = 0;
  raizArbol = 0;
}

Arbol_ListaDeListas::~Arbol_ListaDeListas(){}

void Arbol_ListaDeListas::vaciar(){
  delete this;
  this->_init();
}

int Arbol_ListaDeListas::vacia(){
  return raizArbol
   == 0;
}

Caja* Arbol_ListaDeListas::raiz(){
  return this->raizArbol;
}

Caja* Arbol_ListaDeListas::hijoMasIzq(Caja* nodoRef){}

Caja* Arbol_ListaDeListas::hermanoDer(Caja* nodoRef){}

Caja* Arbol_ListaDeListas::padre(Caja* nodoRef){}

int Arbol_ListaDeListas::esHoja(Caja* nodo){}

int Arbol_ListaDeListas::etiqueta(){}

int Arbol_ListaDeListas::numNodos(){}

int Arbol_ListaDeListas::numHijos(Caja* nodo){}

void Arbol_ListaDeListas::modificarEtiq(Caja* nodo, int nuevaEtiqueta){}

int Arbol_ListaDeListas::agregarHijoIesimo(Caja* padre, int etiqueta, int posicion){}

void Arbol_ListaDeListas::borrarHoja(Caja* hoja){}

void Arbol_ListaDeListas::ponerRaiz(Caja* nuevaRaiz){
  if(vacia()){
    raizArbol = nuevaRaiz;
  }
}
