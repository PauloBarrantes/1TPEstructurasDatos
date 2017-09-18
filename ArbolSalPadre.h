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
        int numNodos
        class NodoArbol{
            private:
                int etiqueta;
                int padre;
            public:
                NodoArbol(int, int);
                NodoArbol(int);
                ~NodoArbol();
                void setPadre(int);
                void setEtiqueta(int);
                int getPadre();
                int getEtiqueta();
        }
    public:
        Arbol_SalPadre(int);
        ~Arbol_SalPadre();
        void vaciar();
        int vacia();


        NodoArbol raiz();
        NodoArbol hijoMasIzq(NodoArbol);
        NodoArbol hermanoDer(NodoArbol);
        NodoArbol padre(NodoArbol);
        int esHoja(NodoArbol);
        int etiqueta();
        int numNodos();
        int numHijos(NodoArbol);
        void modificarEtiq(NodoArbol, int);
        NodoArbol agregarHijoIesimo(NodoArbol, int, int);
        void borrarHoja(NodoArbol);
        void ponerRaiz(int);
};

#endif
