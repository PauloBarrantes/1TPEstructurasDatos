/*!
   \file "Arbol implementado con la E.D. Lista de listas"
   \brief "Arbol con lista de listas"
   \author "André Flastestein"
   \date "01"/"Octubre"/"2017"
*/
#ifndef Arbol_ListaDeListas_2017
#define Arbol_ListaDeListas_2017

class Arbol_ListaDeListas {

    class Caja;

    private:
        int numeroNodos;
        Caja * raizArbol;
        void _init();
        Caja * buscar(Caja*);

        class Cajita {
         public:
          Caja * nodo;
          Cajita * hermanoDer;
          Cajita(Caja *);
          ~Cajita();
        };

        class Caja {
         public:
          int etiqueta;
          Cajita * hijoMasIzquierdo;
          Caja * siguiente;
          Caja(int);
          ~Caja();
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
