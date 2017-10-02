#ifndef _LISTA_2017
#define _LISTA_2017

#include<iostream>

using namespace std;

class Lista {
   // Estas son forward declarations o declaraciones adelantadas
   class NodoArbol;

   private:

      Celda * primera;
	    Celda * ultima;
      int length;

    class NodoArbol {
		 public:
		  int etiqueta;
			NodoArbol * anterior;
			NodoArbol * siguiente;
      Celda(int);
      ~Celda();
	  };

   public:
      Lista();
      ~Lista();
      int getLength();
      void pushFront(int);
      int popFront();
      void pushBack(int);
      int popBack();
      Lista& insertar(Iterador,int);
      Lista& borrar(Iterador);
};

#endif
