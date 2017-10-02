/*!
   \file "Arbol implementado con la E.D. Lista de listas"
   \brief "Arbol con lista de listas"
   \author "André Flastestein"
   \date "01"/"Octubre"/"2017"
*/
#ifndef Arbol_ListaDeListas
#define Arbol_ListaDeListas
#import "Lista.h"

class Arbol_ListaDeListas: {

    class NodoArbol;
    class Celda;

    private:
        int numNodos;
        NodoArbol * raiz;
        void _init();
        NodoArbol * buscar(NodoArbol*);

        class NodoArbol {
         public:
          int etiqueta;
          Celda * hijoMasIzquierdo;
          NodoArbol * siguiente;
          NodoArbol(int);
          ~NodoArbol();
        };

        class Celda {
         public:
          NodoArbol * nodo;
          NodoArbol * hermanoDer;
          Celda(NodoArbol *);
          ~Celda();
        };

    public:
        Arbol_ListaDeListas();
        ~Arbol_ListaDeListas();
        void vaciar();
        int vacia();


        NodoArbol*  raiz();
        NodoArbol*  hijoMasIzq(NodoArbol* );
        NodoArbol*  hermanoDer(NodoArbol* );
        NodoArbol*  padre(NodoArbol* );
        int esHoja(NodoArbol*);
        int etiqueta(NodoArbol*);
        int numNodos();
        int numHijos(NodoArbol*);
        void modificarEtiq(NodoArbol*, int);
        int agregarHijoIesimo(NodoArbol* , int, int);
        void borrarHoja(NodoArbol* );
        void ponerRaiz(NodoArbol* );
};

#endif
