#ifndef _HijoMasIzqHermanoDer_conUltAlPad
#define _HijoMasIzqHermanoDer_conUltAlPad
#include <iostream>

class Arbol{
	class NodoArbol; //Declaracion de antemano
	private:
		int nNodos;
		Arbol::NodoArbol* nRaiz;
		
		class NodoArbol{
			public:
				NodoArbol* hijoMasI;
				NodoArbol* hermanoD;
				int etqta;
				int nHijos;
				int senalaP;
				
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
				NodoArbol(int,NodoArbol*);
				
				/*!
					\brief "Destruye el nodo y manda a destruir su hermano derecho y
					su hijo mas izquierdo"
					\param "No tiene parámetros"
					\return "No retorna nada"
				*/
				~NodoArbol();
				
				/*!
					\brief "Imprime el etiqueta actual, y manda a imprimir a sus hijos y hermanos"
					\param "ostream salida"
					\return "Retorna la salida"
				*/
				std::ostream& imprimir(std::ostream&);
		};
	public:
	typedef Arbol::NodoArbol* Nodo;
		/*!
			\brief "Crea un arbol vacio"
			\param "No tiene parámetros"
			\return "No retorna nada"
		*/
		Arbol();
		
		/*!
			\brief "Crea un árbol, al cual se le pone una raiz"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
		Arbol(int);
		
		/*!
			\brief "Destruye el árbol"
			\param "No tiene parámetros"
			\return "No retorna nada"
		*/
        ~Arbol();
		
		/*!
			\brief "Deja el a´rbol vacío para poder volverlo
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
		Nodo raiz();
		
		/*!
			\param "NodoArbol* nodo"
			\return "Retorna el hijo más izquierdo del nodo"
		*/
        Nodo  hijoMasIzq(Arbol::NodoArbol*);
		
		/*!
			\param "NodoArbol* nodo"
			\return "Retorna el hermano derecho del nodo"
		*/
        Nodo  hermanoDer(Arbol::NodoArbol*);
		
		/*!
			\param "NodoArbol* nodo"
			\return "Retorna el padre del nodo"
		*/
        Nodo  padre(Arbol::NodoArbol*);
		
		/*!
			\param "NodoArbol* nodo"
			\return "Retorna verdadero, sí el nodo es hoja"
		*/
        int esHoja(Arbol::NodoArbol*);
		
		/*!
			\param "NodoArbol* nodo"
			\return "Retorna la etiqueta del nodo"
		*/
        int etiqueta(Arbol::NodoArbol*);
		
		/*!
			\param "NodoArbol* etiqueta"
			\return "Retorna el número de nodos"
		*/
        int numNodos();
		
		/*!
			\param "NodoArbol* nodo"
			\return "Retorna el número de hijos del nodo"
		*/
        int numHijos(Arbol::NodoArbol*);
		
		/*!
			\brief "Modifica la etiqueta actual"
			\param "NodoArbol* nodo"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
        void modificarEtiq(Arbol::NodoArbol*, int);
		
		/*!
			\brief "Agrega un hijo en la poscición i-ésima del nodo"
			\param "NodoArbol* nodo"
			\param "int etiqueta"
			\param "int posicion"
			\return "Retorna el nuevo nodo formado"
		*/
        Nodo  agregarHijoIesimo(Arbol::NodoArbol*, int, int);
		
		/*!
			\brief "Borra la hoja, que se recibe como parámetro"
			\param "NodoArbol* nodo"
			\return "No retorna nada"
		*/
        void borrarHoja(Arbol::NodoArbol*);
		
		/*!
			\brief "Crea una raíz con la etiqueta recibida como parámetro"
			\param "int etiqueta"
			\return "No retorna nada"
		*/
        void ponerRaiz(int);
		
		/*!
			\brief "Imprime el arbol"
			\param "ostream salida"
			\return "Retorna la salida"
		*/
		std::ostream& imprimir(std::ostream&);
		
		/*!
			\brief "Busca el nodo que tiene la etiqueta que se recibe como parámetro"
			\param "int etiqueta"
			\return "Retorna el nodo que tiene esa etiqueta"
		*/
		Nodo  buscarNodo(int);
};

#endif