#ifndef _HijoMasIzqHermanoDer
#define _HijoMasIzqHermanoDer
#include <iostream>

class HijoDMasIzqHermanoDer_Ult_puntPadre{
	class NodoArbol; //Declaracion de antemano
	private:
		int nNodos;
		HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* nRaiz;
		
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
		HijoDMasIzqHermanoDer_Ult_puntPadre();
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
		HijoDMasIzqHermanoDer_Ult_puntPadre(int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        ~HijoDMasIzqHermanoDer_Ult_puntPadre();
		
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
		HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* raiz();
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* hijoMasIzq(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* hermanoDer(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* padre(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        int esHoja(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        int etiqueta(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol*);
		
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
        int numHijos(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        void modificarEtiq(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol*, int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* agregarHijoIesimo(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol*, int, int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        void borrarHoja(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol*);
		
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