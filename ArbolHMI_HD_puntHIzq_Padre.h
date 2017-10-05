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
				NodoArbol(int,NodoArbol*,NodoArbol*,NodoArbol*);
				
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
		HijoDMasIzqHermanoDer_puntIzqPadre();
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
		HijoDMasIzqHermanoDer_puntIzqPadre(int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        ~HijoDMasIzqHermanoDer_puntIzqPadre();
		
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
		HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* raiz();
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* hijoMasIzq(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* hermanoDer(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* padre(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        int esHoja(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        int etiqueta(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
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
        int numHijos(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        void modificarEtiq(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*, int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* agregarHijoIesimo(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*, int, int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        void borrarHoja(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol*);
		
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