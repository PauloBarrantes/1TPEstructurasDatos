#ifndef _LISTA_2017
#define _LISTA_2017

#include<iostream>

using namespace std;

class Lista {
   // Estas son forward declarations o declaraciones adelantadas
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
      void pushFront(NodoArbol*);
      int popFront();
      void pushBack(NodoArbol*);
      int popBack();
};

#endif
