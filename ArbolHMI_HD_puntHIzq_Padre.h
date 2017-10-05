#ifndef _HijoMasIzqHermanoDer_puntIzqPadre
#define _HijoMasIzqHermanoDer_puntIzqPadre
#include <iostream>

class HijoDMasIzqHermanoDer_puntIzqPadre{
	class NodoArbol; //Declaracion de antemano
	private:
		int nNodos;
		HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* nRaiz;
		
		class NodoArbol{
			public:
				NodoArbol* hijoMasI;
				NodoArbol* hermanoD;
				NodoArbol* hermanoI;
				NodoArbol* nPadre;
				int etqta;
				int nHijos;
				
				/*!
					\brief "Crea un nodo, pero sin hijos ni hermanos"
					\param "int etiqueta"
					\return "No retorna nada"
				*/
				NodoArbol(int);
				
				/*!
					\brief "Crea un nodo, pero sin hijos pero con hermanos"
					\param "int etiqueta"
					\param "NodoArbol* hermanoD"
					\return "No retorna nada"
				*/
				NodoArbol(int,NodoArbol*,NodoArbol*,NodoArbol*);
				
				/*!
					\brief "Destruye el nodo y manda a destruir su hermano derecho y
					su hijo mas izquierdo"
					\param "No tiene parámetros"
					\return "No retorna nada"
				*/
				~NodoArbol();
				
				/*!
					\brief "Crea un nodo, pero sin hijos ni hermanos"
					\param "int etiqueta"
					\return "No retorna nada"
				*/
				std::ostream& toString(std::ostream&);
		};
	public:
		/*!
			\brief "Crea un arbol vacio"
			\param "No tiene parámetros"
			\return "No retorna nada"
		*/
		HijoDMasIzqHermanoDer_puntIzqPadre();
		
		/*!
			\brief "Crea un árbol, al cual se le pone una raiz"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
		HijoDMasIzqHermanoDer_puntIzqPadre(int);
		
		/*!
			\brief "Destruye el árbol"
			\param "No tiene parámetros"
			\return "No retorna nada"
		*/
        ~HijoDMasIzqHermanoDer_puntIzqPadre();
		
		/*!
			\brief "Deja el árbol vacío para poder volverlo
			a usar"
			\param "No tiene parámetros"
			\return "No retorna nada"
		*/
        void vaciar();
		
		/*!
			\brief "Dice si el árbol está vacío"
			\param "No tiene parámetros"
			\return "Retorna verdadero, si el árbol está vacío"
		*/
        int vacia();
	
		/*!
			\param "No tiene parámetros"
			\return "Retorna la raíz"
		*/
		HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* raiz();
		
		/*!
			\param "NodoArbol* nodo"
			\return "Retorna el hijo más izquierdo del nodo"
		*/
        HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* hijoMasIzq(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*!
			\param "NodoArbol* nodo"
			\return "Retorna el hermano derecho del nodo"
		*/
        HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* hermanoDer(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*!
			\param "NodoArbol* nodo"
			\return "Retorna el padre del nodo"
		*/
        HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* padre(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*!
			\param "NodoArbol* nodo"
			\return "Retorna verdadero, sí el nodo es hoja"
		*/
        int esHoja(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*!
			\param "NodoArbol* nodo"
			\return "Retorna la etiqueta del nodo"
		*/
        int etiqueta(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*!
			\param "NodoArbol* etiqueta"
			\return "Retorna el número de nodos"
		*/
        int numNodos();
		
		/*!
			\param "NodoArbol* nodo"
			\return "Retorna el número de hijos del nodo"
		*/
        int numHijos(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*!
			\brief "Modifica la etiqueta actual"
			\param "NodoArbol* nodo"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
        void modificarEtiq(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*, int);
		
		/*!
			\brief "Agrega un hijo en la poscición i-ésima del nodo"
			\param "NodoArbol* nodo"
			\param "int etiqueta"
			\param "int posicion"
			\return "Retorna el nuevo nodo formado"
		*/
        HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* agregarHijoIesimo(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*, int, int);
		
		/*!
			\brief "Borra la hoja, que se recibe como parámetro"
			\param "NodoArbol* nodo"
			\return "No retorna nada"
		*/
        void borrarHoja(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*!
			\brief "Crea una raíz con la etiqueta recibida como parámetro"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
        void ponerRaiz(int);
		
		/*!
			\brief "Crea un nodo, pero sin hijos ni hermanos"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
		std::ostream& toString(std::ostream&);
};

#endif