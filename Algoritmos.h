/*!
   \file "Algoritmos.h"
   \brief "Clase que contiene los algoritmos para el modelo árbol"
   \author "Paulo B - Fabian A - André F"
   \date "17"/"10"/"2017"
*/

#ifndef Algoritmos_2017
#define Algoritmos_2017
//#include "ArbolHMI_HD_puntHIzq_Padre.h"
//#include "ArbolHMI_HD.h"
//#include "ArbolHMI_HD_utimoPadre.h"
#include "ArbolLDL.h"
#include "Cola.h"
class Algoritmos{
    private:
        int nodoNulo;
        Arbol* arbol1;
    public:
        Algoritmos();
        ~Algoritmos();
<<<<<<< HEAD
    /*!
       \brief "Averigua la etiqueta del hermano izquierdo de un nodo"
       \param "Entra el Árbol en el que está el nodo"
       \param "Entra el nodo del que se quiere buscar el hermano izquierdo"
       \return "Return of the function"
    */
    int hermanoIzquierdo(Arbol*, Arbol::Nodo);
=======
		
>>>>>>> 51342b660f421271dc4f0b7fa7cbb74d496ad959
		/*!
			\brief "Verifica si el árbol tiene etiquetas repetidos"
			\param "Entra el Árbol en el cual se buscaran etiquetas repetidas"
			\return "1 sí el árbol tiene repetidos"
		*/
		int hayRepetidos(Arbol*);
		
		/*!
			\brief "Averigua la cantidad de niveles que tiene el Árbol, en recorrido por niveles"
			\param "Entra el Árbol al que le vamos a contar los niveles"
			\return "Número de niveles que tiene el Árbol"
		*/
		int averiguarNivelesEnRecorridoPorNiveles(Arbol*);
		
		/*!
			\brief "Averigua el número de niveles del Árbol, en pre orden"
			\param "Entra el Árbol al que le vamos a contar los niveles"
			\return "Número de niveles que tiene el Árbol"
		*/
		int averiguarNivelsPreOrden(Arbol*);
		
		/*!
			\brief "Crea un nodo, pero sin hijos ni hermanos"
			\param "Entra el Árbol al que le vamos a contar los niveles"
			\param "Entra el Nodo actual, sobre el cual vamos recorriendo el Árbol"
			\param "Entra el nivel actual, por el que vamos en el Árbol"
			\param "Entra el nivel máximo que lleva el Árbol"
			\return "Número de niveles que tiene el árbol"
		*/
		void averiguarNivelesPreOrdenR(Arbol*,Arbol::Nodo,int,int&);
		
		/*!
			\brief "Dice  que profundidad está el nodo"
			\param "Entra el Árbol donde se buscara el nivel del nodo"
			\param "Entra el nodo al que se le va a averiguar el nivel"
			\return "Nivel en el que se encuentra el nodo"
		*/
		int profundidadNodo(Arbol*,Arbol::Nodo);
		
		/*!
			\brief "Realiza una copia del Árbol resivido como parámetro"
			\param "Entra el Árbol que va a ser copiado"
			\return "Retorna una copia del Árbol"
		*/
        Arbol* copiarArbol(Arbol*);
		
		/*!
			\brief "Lista las etiquetas de los hijos del Nodo"
			\param "Entra el Árbol donde se encuentra el nodo recibido como parámetro"
			\param "Nodo al que le vamos a listar las etiquetas de sus hijos"
			\return "No retorna nada"
		*/
        void listarEtiquetasDeNodo(Arbol*,Arbol::Nodo);
		
		/*!
			\brief "Lista las etiquetas del Árbol que se encuentran en el iésimo nivel"
			\param "Entra el Árbol al que le vamos a listar las etiquetas del iésimo nivel"
			\param "Entra el nivel del cual se quieren listar las etiquetas"
			\return "No retorna nada"
		*/
        void listarEtiquetas_iesimoNivel(Arbol*, int );
		
		/*!
			\brief "Lista las etiquetas del Árbol que se encuentran en el iésimo nivel"
			\param "Entra el Árbol al que le vamos a listar las etiquetas del iésimo nivel"
			\param "Entra el Nodo actual por el que va el recorrido del Árbol"
			\param "Entra el nivel actual por el que va en el Árbol"
			\param "Entra el nivel del cual se quieren listar las etiquetas"
			\return "No retorna nada"
		*/
        void listarEtiquetas_iesimoNivelRec(Arbol*, Arbol::Nodo, int,int);

		/*!
			\brief "Borra el su Árbol, que se forma apartir dl nodo que se recibe como parámetro"
			\param "Entra el Árbol al que le vamos a borrar el Sub Árbol"
			\param "Entra el Nodo donde comienza el sub Árbol a borrar"
			\return "No retorna nada"
		*/
        void borrarSubArbol(Arbol*, Arbol::Nodo);
		
		/*!
			\brief "Borra el su Árbol, que se forma apartir dl nodo que se recibe como parámetro"
			\param "Entra el Árbol al que le vamos a borrar el Sub Árbol"
			\param "Entra el Nodo donde comienza el sub Árbol a borrar"
			\return "No retorna nada"
		*/
        void borrarSubArbolRec(Arbol*, Arbol::Nodo);
		
		/*!
			\brief "Dice sí los Árboles que se reciben como parámetros son iguales"
			\param "Entra el primero de los Árbles que se va a comparar"
			\param "Entra el segundo de los Árboles que se va a comparar"
			\return "N1 si los Árboles son iguales"
		*/
        int iguales(Arbol*, Arbol*);

<<<<<<< HEAD
    /*!
       \brief "Description"
       \param "Param description"
       \return "Return of the function"
    */
        int listarArbolPreOrden(Arbol*)

=======
>>>>>>> 51342b660f421271dc4f0b7fa7cbb74d496ad959

};

#endif
