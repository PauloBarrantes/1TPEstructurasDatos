#import <iostream>
#import "ArbolLDL.h"

Arbol_ListaDeListas::Celda::Celda(NodoArbol* nodo){
  this->nodo = nodo;
  this->hermanoDer = 0;
}

Arbol_ListaDeListas::Celda::~Celda(){
  delete nodo;
  if(hermanoDer != 0){
    delete hermanoDer;
  }
}

NodoArbol* Arbol_ListaDeListas::buscar(NodoArbol* nodoRef){}

Arbol_ListaDeListas::Arbol_ListaDeListas(){
  this->_init;
}

void Arbol_ListaDeListas::_init(){
  numNodos = 0;
  raiz = 0;
  listaPrincipal = new Lista();
}

Arbol_ListaDeListas::~Arbol_ListaDeListas(){
  for(int i = 0; i < numNodos; ++i){
    delete listaPrincipal[i];
  }
  delete [] listaPrincipal;
}

void Arbol_ListaDeListas::vaciar(){
  delete this;
  this->_init;
}

int Arbol_ListaDeListas::vacia(){
  return raiz == 0;
}

NodoArbol* Arbol_ListaDeListas::raiz(){
  return raiz;
}

NodoArbol* Arbol_ListaDeListas::hijoMasIzq(NodoArbol* nodoRef){}

NodoArbol* Arbol_ListaDeListas::hermanoDer(NodoArbol* nodoRef){}

NodoArbol* Arbol_ListaDeListas::padre(NodoArbol* nodoRef){}

int Arbol_ListaDeListas::esHoja(NodoArbol* nodo){}

int Arbol_ListaDeListas::etiqueta(){}

int Arbol_ListaDeListas::numNodos(){}

int Arbol_ListaDeListas::numHijos(NodoArbol* nodo){}

void Arbol_ListaDeListas::modificarEtiq(NodoArbol* nodo, int nuevaEtiqueta){}

int Arbol_ListaDeListas::agregarHijoIesimo(NodoArbol* padre, int etiqueta, int posicion){}

void Arbol_ListaDeListas::borrarHoja(NodoArbol* hoja){}

void Arbol_ListaDeListas::ponerRaiz(NodoArbol* nuevaRaiz){
  if(vacia()){
    raiz = nuevaRaiz;
  }
}
