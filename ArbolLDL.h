/*!
   \file "Arbol implementado con la E.D. Lista de listas"
   \brief "Arbol con lista de listas"
   \author "André Flastestein"
   \date "01"/"Octubre"/"2017"
*/
#ifndef Arbol_ListaDeListas
#define Arbol_ListaDeListas

class Arbol_ListaDeListas: public ModeloArbol {
    private:
        //NodoArbol * arreglo;
        //int ultima;
        int numNodos;
        //int tamano;

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
        void modificarEtiq(int, int);
        int agregarHijoIesimo(NodoArbol* , int, int);
        void borrarHoja(NodoArbol* );
        void ponerRaiz(NodoArbol* );
};

#endif
