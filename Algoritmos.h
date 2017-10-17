#ifndef Algoritmos_2017
#define Algoritmos_2017
#include "ArbolLDL.h"
class Algoritmos{
    private:
        int nodoNulo;
        Arbol* arbol1;
        void borrarSubArbolRec(Arbol::Nodo);
    public:
        Algoritmos();
        ~Algoritmos();
		int hayRepetidos(Arbol*);
		int averiguarNivelesEnRecorridoPorNiveles(Arbol*);
		int averiguarNivelsPreOrden(Arbol*);
		void averiguarNivelesPreOrdenR(Arbol*,Arbol::Nodo,int,int&);
		int profundidadNodo(Arbol*,Arbol::Nodo);
        Arbol* copiarArbol(Arbol*);
        void listarEtiquetasDeNodo(Arbol*,Arbol::Nodo);
        void listarEtiquetas_iesimoNivel(Arbol*, int );
        void listarEtiquetas_iesimoNivelRec(Arbol*, Arbol::Nodo, int,int);

        void borrarSubArbol(Arbol*, Arbol::Nodo);
        int iguales(Arbol*, Arbol*);


};

#endif
