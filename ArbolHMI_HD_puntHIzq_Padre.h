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
			\brief "Crea un nodo, pero sin hijos ni hermanos"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
        int vacia();
	
		/*!
			\brief "Crea un nodo, pero sin hijos ni hermanos"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
		HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* raiz();
		
		/*!
			\brief "Crea un nodo, pero sin hijos ni hermanos"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
        HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* hijoMasIzq(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*!
			\brief "Crea un nodo, pero sin hijos ni hermanos"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
        HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* hermanoDer(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*!
			\brief "Crea un nodo, pero sin hijos ni hermanos"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
        HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* padre(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*!
			\brief "Crea un nodo, pero sin hijos ni hermanos"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
        int esHoja(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*!
			\brief "Crea un nodo, pero sin hijos ni hermanos"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
        int etiqueta(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*!
			\brief "Crea un nodo, pero sin hijos ni hermanos"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
        int numNodos();
		
		/*!
			\brief "Crea un nodo, pero sin hijos ni hermanos"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
        int numHijos(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*!
			\brief "Crea un nodo, pero sin hijos ni hermanos"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
        void modificarEtiq(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*, int);
		
		/*!
			\brief "Crea un nodo, pero sin hijos ni hermanos"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
        HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* agregarHijoIesimo(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*, int, int);
		
		/*!
			\brief "Crea un nodo, pero sin hijos ni hermanos"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
        void borrarHoja(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*!
			\brief "Crea un nodo, pero sin hijos ni hermanos"
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