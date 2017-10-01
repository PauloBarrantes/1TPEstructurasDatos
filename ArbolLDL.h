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
        //int numNodos;
        //int tamano;

    public:
        Arbol_ListaDeListas();
        ~Arbol_ListaDeListas();
        void vaciar();
        int vacia();


        int raiz();
        int hijoMasIzq(int);
        int hermanoDer(int);
        int padre(int);
        int esHoja(int);
        int etiqueta();
        int numNodos();
        int numHijos(int);
        void modificarEtiq(int, int);
        int agregarHijoIesimo(int, int, int);
        void borrarHoja(int);
        void ponerRaiz(int);
};

#endif
