/*!
   \file "Algoritmos.h"
   \brief "Clase que contiene los algoritmos para el modelo árbol"
   \author "Paulo B - Fabian A - André F"
   \date "17"/"10"/"2017"
*/
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
		int averiguarNivelesEnRecorridoPorNiveles(Arbol*);
		int averiguarNivelsPreOrden(Arbol*);
		void averiguarNivelesPreOrdenR(Arbol*,Arbol::Nodo,int,int&);
		int profundidadNodo(Arbol*,Arbol::Nodo);

        /*!
           \brief "Description"
           \param "Param description"s
           \return "Return of the function"
        */
        Arbol* copiarArbol(Arbol*);
        /*!
           \brief "Description"
           \param "Param description"s
           \return "Return of the function"
        */
        void listarEtiquetasDeNodo(Arbol*,Arbol::Nodo);
        /*!
           \brief "Description"
           \param "Param description"s
           \return "Return of the function"
        */
        void listarEtiquetas_iesimoNivel(Arbol*, int );
        /*!
           \brief "Description"
           \param "Param description"s
           \return "Return of the function"
        */
        void listarEtiquetas_iesimoNivelRec(Arbol*, Arbol::Nodo, int,int);
        /*!
           \brief "Description"
           \param "Param description"s
           \return "Return of the function"
        */
        void borrarSubArbol(Arbol::Nodo);
        /*!
           \brief "Description"
           \param "Param description"s
           \return "Return of the function"
        */
        int iguales(Arbol*, Arbol*);


};

#endif
