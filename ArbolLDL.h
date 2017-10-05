/*!
   \file "Arbol implementado con la E.D. Lista de listas"
   \brief "Arbol con lista de listas"
   \author "André Flastestein"
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
          ostream& toString(ostream&);
        };

        class Caja {
         public:
          int etiqueta;
          Cajita * hijoMasIzquierdo;
          Nodo siguiente;
          Caja(int);
          ~Caja();
          ostream& toString(ostream&);
        };

    public:
        Arbol();
        ~Arbol();
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
        Nodo agregarHijoIesimo(Nodo, int, int);
        void borrarHoja(Nodo);
        void ponerRaiz(int);
        ostream& toString(ostream&);
};

#endif
