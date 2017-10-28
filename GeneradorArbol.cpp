#include <iostream>
#include <cstdlib>
#include "GeneradorArbol.h"

using namespace std;

GeneradorArbol::GeneradorArbol(){}

GeneradorArbol::~GeneradorArbol(){}

Arbol*  GeneradorArbol::arbolPino(int n){
  Arbol * arbol = new Arbol();
  arbol->ponerRaiz(1);
  Arbol::Nodo padre = arbol->raiz();
  for(int i = 2; i <= n; ++i){
    padre = arbol->agregarHijoIesimo(padre,i,1);
  }
  return arbol;
}

Arbol*  GeneradorArbol::arbolArbusto(int n){
  Arbol * arbol = new Arbol();
  arbol->ponerRaiz(1);
  Arbol::Nodo raiz = arbol->raiz();
  for(int i = 2; i <= n; ++i){
    arbol->agregarHijoIesimo(raiz,i,1);
  }
  return arbol;
}

Arbol*  GeneradorArbol::arbolPromedio(int n){
  Arbol * arbol = new Arbol();
  int contador = 1;
  arbol->ponerRaiz(1);
  ++contador;
  if(!arbol->vacia()){
      Cola<Arbol::Nodo> cola;
      cola.encolar(arbol->raiz());
      for(int i = 1; i<=rand()%3+2;++i){
        arbol->agregarHijoIesimo(arbol->raiz(),contador,1);
        ++contador;
      }
      while(!cola.vacia() && contador <= n){
          Arbol::Nodo nodo = cola.desencolar();
          Arbol::Nodo nh = arbol->hijoMasIzq(nodo);
          while(nh != arbol->nodoNulo){
              cola.encolar(nh);
              for(int i = 1; i<=rand()%3+2 && contador <= n;++i){
                arbol->agregarHijoIesimo(nh,contador,1);
                ++contador;
              }
              nh = arbol->hermanoDer(nh);
          }
      }
  }
  return arbol;
}

Arbol*  GeneradorArbol::arbolBinario(int n){
  Arbol * arbol = new Arbol();
  int contador = 1;
  arbol->ponerRaiz(1);
  ++contador;
  if(!arbol->vacia()){
      Cola<Arbol::Nodo> cola;
      cola.encolar(arbol->raiz());
      for(int i = 0; i<2;++i){
        arbol->agregarHijoIesimo(arbol->raiz(),contador,1);
        ++contador;
      }
      while(!cola.vacia() && contador <= n){
          Arbol::Nodo nodo = cola.desencolar();
          Arbol::Nodo nh = arbol->hijoMasIzq(nodo);
          while(nh != arbol->nodoNulo){
              cola.encolar(nh);
              for(int i = 0; i<2 && contador <= n;++i){
                arbol->agregarHijoIesimo(nh,contador,1);
                ++contador;
              }
              nh = arbol->hermanoDer(nh);
          }
      }
  }
  return arbol;
}
