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

    class Caja;
    class Celda;

    private:
        int numNodos;
        Caja * raiz;
        void _init();
        Caja * buscar(Caja*);

        class Caja {
         public:
          int etiqueta;
          Celda * hijoMasIzquierdo;
          Caja * siguiente;
          Caja(int);
          ~Caja();
        };

        class Cajita {
         public:
          Caja * nodo;
          Cajita * hermanoDer;
          Celda(Caja *);
          ~Celda();
        };

    public:
        Arbol_ListaDeListas();
        ~Arbol_ListaDeListas();
        void vaciar();
        int vacia();


        Caja*  raiz();
        Caja*  hijoMasIzq(Caja* );
        Caja*  hermanoDer(Caja* );
        Caja*  padre(Caja* );
        int esHoja(Caja*);
        int etiqueta(Caja*);
        int numNodos();
        int numHijos(Caja*);
        void modificarEtiq(Caja*, int);
        int agregarHijoIesimo(Caja* , int, int);
        void borrarHoja(Caja* );
        void ponerRaiz(Caja* );
};

#endif
