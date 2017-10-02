#import <iostream>
#import "ArbolLDL.h"

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

int Arbol_ListaDeListas::hijoMasIzq(NodoArbol* nodoRef){}

int Arbol_ListaDeListas::hermanoDer(NodoArbol* nodoRef){}

int Arbol_ListaDeListas::padre(NodoArbol* nodoRef){}

int Arbol_ListaDeListas::esHoja(NodoArbol* nodo){}

int Arbol_ListaDeListas::etiqueta(){}

int Arbol_ListaDeListas::numNodos(){}

int Arbol_ListaDeListas::numHijos(NodoArbol* nodo){}

void Arbol_ListaDeListas::modificarEtiq(NodoArbol* nodo, int nuevaEtiqueta){}

int Arbol_ListaDeListas::agregarHijoIesimo(NodoArbol* nodo, int etiqueta, int posicion){}

void Arbol_ListaDeListas::borrarHoja(NodoArbol* hoja){}

void Arbol_ListaDeListas::ponerRaiz(NodoArbol* nuevaRaiz){
  if(vacia()){
    raiz = nuevaRaiz;
  }
}
