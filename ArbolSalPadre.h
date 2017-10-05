/*!
   \file "Arbol con senalador al padre"
   \brief "Arbol con un arreglo con senalador al padre"
   \author "Paulo Barrantes"
   \date "18"/"Septiembre"/"2017"
*/
#ifndef ArbolSalPadre2017
#define ArbolSalPadre2017
#define M 1000
class Arbol {
    typedef int Nodo;
    class Caja; //Forward declaration

    private:
        class Caja{
            public:
                int etiqueta;
                int padre;
                Caja();
                Caja(int, int);
                void setEtiqueta(int);
        };
        Caja* arreglo;
        int ultima;
        int nNodos;
        int tamano;

    public:
        Arbol();
        ~Arbol();
        void vaciar();
        int vacia();
        Nodo raiz();
        Nodo hijoMasIzq(Nodo);
        Nodo hermanoDer(Nodo);
        Nodo padre(Nodo);
        int esHoja(Nodo);
        int etiqueta(Nodo);
        int numNodos();
        int numHijos(Nodo);
        void modificarEtiq(Nodo, int);
        Nodo agregarHijoIesimo(Nodo, int, int);
        void borrarHoja(Nodo);
        void ponerRaiz(int);
        void toString();
        Nodo buscarNodo(int);
};

#endif
