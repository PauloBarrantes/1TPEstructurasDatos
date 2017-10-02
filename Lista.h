#ifndef _LISTA_2017
#define _LISTA_2017

#include<iostream>

using namespace std;

class Lista {

   class NodoArbol;

   private:
     
      NodoArbol * primera;
      int length;

    class NodoArbol {
		 public:
		  int etiqueta;
			NodoArbol * anterior;
			NodoArbol * siguiente;
      NodoArbol(int);
      ~NodoArbol();
	  };

   public:
      Lista();
      ~Lista();
      int getLength();
      void agregar(int etiqueta);
      void borrar();
};

#endif
