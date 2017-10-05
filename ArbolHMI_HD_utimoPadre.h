#ifndef _HijoMasIzqHermanoDer
#define _HijoMasIzqHermanoDer
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
				
				/*
				** Require:
				** Modifica:
				** Parámetros:
				** Retorna:
				*/
				NodoArbol(int);
				
				/*
				** Require:
				** Modifica:
				** Parámetros:
				** Retorna:
				*/
				NodoArbol(int,NodoArbol*);
				
				/*
				** Require:
				** Modifica:
				** Parámetros:
				** Retorna:
				*/
				~NodoArbol();
				
				/*
				** Require:
				** Modifica:
				** Parámetros:
				** Retorna:
				*/
				std::ostream& toString(std::ostream&);
		};
	public:
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
		Arbol();
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
		Arbol(int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        ~Arbol();
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        void vaciar();
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        int vacia();
	
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
		Arbol::NodoArbol* raiz();
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        Arbol::NodoArbol* hijoMasIzq(Arbol::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        Arbol::NodoArbol* hermanoDer(Arbol::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        Arbol::NodoArbol* padre(Arbol::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        int esHoja(Arbol::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        int etiqueta(Arbol::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        int numNodos();
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        int numHijos(Arbol::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        void modificarEtiq(Arbol::NodoArbol*, int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        Arbol::NodoArbol* agregarHijoIesimo(Arbol::NodoArbol*, int, int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        void borrarHoja(Arbol::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        void ponerRaiz(int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
		std::ostream& toString(std::ostream&);
};

#endif