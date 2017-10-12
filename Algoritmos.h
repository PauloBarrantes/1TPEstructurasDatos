#ifndef Algoritmos_2017
#define Algoritmos_2017
#include "ArbolSalPadre.h"
class Algoritmos{
    private:
        int nodoNulo;
        Arbol* arbol1;
    public:
        Algoritmos();
        ~Algoritmos();
		int hayRepetidos(Arbol*);
		int averiguarNivelesPorNiveles(Arbol*);
		int averiguarNivelsPreOrden(Arbol*);
		int averiguarNivelesPreOrdenR(Arbol*,int);
		void averiguarNivelesPreOrdenR(Arbol*,Arbol::Nodo,int,int&);
		int profundidadNodo(Arbol*);
        Arbol* copiarArbol(Arbol*);
        void listarEtiquetasDeNodo(Arbol*,Arbol::Nodo);
        void listarEtiquetas_iesimoNivel(Arbol*, int );
        void listarEtiquetas_iesimoNivelRec(Arbol*, Arbol::Nodo, int,int);

        void borrarSubArbol(Arbol::Nodo);
        int iguales(Arbol*, Arbol*);


};

#endif
