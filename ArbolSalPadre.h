/*!
   \file "Arbol con senalador al padre"
   \brief "Arbol con un arreglo con senalador al padre"
   \author "Paulo Barrantes"
   \date "18"/"Septiembre"/"2017"
*/
#ifndef ArbolSalPadre2017
#define ArbolSalPadre2017
#define M 1000
class ArbolSalPadre {

    class NodoArbol; //Forward declaration

    private:
        class NodoArbol{
            public:
                int etiqueta;
                int padre;
                NodoArbol();
                NodoArbol(int, int);
                void setEtiqueta(int);
        };
        NodoArbol* arreglo;
        int ultima;
        int nNodos;
        int tamano;

    public:
        ArbolSalPadre();
        ~ArbolSalPadre();
        void vaciar();
        int vacia();
        int raiz();
        int hijoMasIzq(int);
        int hermanoDer(int);
        int padre(int);
        int esHoja(int);
        int etiqueta(int);
        int numNodos();
        int numHijos(int);
        void modificarEtiq(int, int);
        int agregarHijoIesimo(int, int, int);
        void borrarHoja(int);
        void ponerRaiz(int);
        void imprimir();
};

#endif
