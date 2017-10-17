/*!
   \file "Arbol implementado con la E.D. Lista de listas"
   \brief "Arbol con lista de listas"
   \author "André Flasterstein"
   \date "01"/"Octubre"/"2017"
*/
#ifndef Arbol_ListaDeListas_2017
#define Arbol_ListaDeListas_2017
#import <iostream>

using namespace std;

class Arbol {

    class Caja;
    class Cajita;
    typedef Caja* Nodo;

    private:
        int numeroNodos;
        Nodo raizArbol;
        void _init();
        Cajita* buscarCajita(Nodo);

        class Cajita {
         public:
          Nodo nodo;
          Cajita * hermanoDerecho;
          Cajita(Nodo);
          ~Cajita();
          ostream& imprimir(ostream&);
        };

        class Caja {
         public:
          int etiqueta;
          Cajita * hijoMasIzquierdo;
          Nodo siguiente;
          Caja(int);
          ~Caja();
          ostream& imprimir(ostream&);
        };

    public:
        typedef Caja* Nodo;

        Arbol();
        ~Arbol();
        void vaciar();
        int vacia();


        int  raiz();
        Nodo  hijoMasIzq(Nodo);
        Nodo  hermanoDer(Nodo);
        Nodo  padre(Nodo);
        int esHoja(Nodo);
        int etiqueta(Nodo);
        int numNodos();
        int numHijos(Nodo);
        void modificarEtiq(Nodo, int);
        Nodo agregarHijoIesimo(Nodo, int, int);
        void borrarHoja(Nodo);
        void ponerRaiz(int);
        Nodo buscarNodo(int);
        ostream& imprimir(ostream&);
};

#endif
