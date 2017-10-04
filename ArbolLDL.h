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
    class Cajita;
    typedef Caja* Nodo;

    private:
        int numeroNodos;
        Nodo raizArbol;
        void _init();
        Cajita* buscar(Nodo);

        class Cajita {
         public:
          Nodo nodo;
          Cajita * hermanoDerecho;
          Cajita(Nodo);
          ~Cajita();
        };

        class Caja {
         public:
          int etiqueta;
          Cajita * hijoMasIzquierdo;
          Nodo siguiente;
          Caja(int);
          ~Caja();
        };

    public:
        Arbol_ListaDeListas();
        ~Arbol_ListaDeListas();
        void vaciar();
        int vacia();


        Nodo  raiz();
        Nodo  hijoMasIzq(Nodo);
        Nodo  hermanoDer(Nodo);
        Nodo  padre(Nodo);
        int esHoja(Nodo);
        int etiqueta(Nodo);
        int numNodos();
        int numHijos(Nodo);
        void modificarEtiq(Nodo, int);
        int agregarHijoIesimo(Nodo, int, int);
        void borrarHoja(Nodo);
        void ponerRaiz(Nodo);
};

#endif
