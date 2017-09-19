/*!
   \file "Arbol con senalador al padre"
   \brief "Arbol con un arreglo con senalador al padre"
   \author "Paulo Barrantes"
   \date "18"/"Septiembre"/"2017"
*/
#ifndef Arbol_SalPadre
#define Arbol_SalPadre

class Arbol_SalPadre: public ModeloArbol {
    private:
        NodoArbol * arreglo;
        int ultima;
        int numNodos;
        int tamano;

    public:
        Arbol_SalPadre(int);
        ~Arbol_SalPadre();
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
