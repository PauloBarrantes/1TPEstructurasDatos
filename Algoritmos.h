#ifndef Algoritmos_2017
#define Algoritmos_2017
#include "ArbolSalPadre.h"
class Algoritmos{
    private:

    public:
        Algoritmos();
        ~Algoritmos();
		int hayRepetidos(Arbol*);
		int averiguarNivelesPorNiveles(Arbol*);
		int averiguarNivelsPreOrden(Arbol*);
		int averiguarNivelesPreOrdenR(Arbol*,int);
		int profundidadNodo(Arbol*,);
        Arbol* copiarArbol(Arbol*);
        void listarEtiquetasDeNodo(Arbol::Nodo);
        void listarEtiquetasiesimoNivel(int);
        void borrarSubArbol(Arbol::Nodo);
        int iguales(Arbol*, Arbol*);


};

#endif
