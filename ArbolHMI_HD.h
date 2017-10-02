#ifndef _HijoMasIzqHermanoDer
#define _HijoMasIzqHermanoDer

class HijoDMasIzqHermanoDer{
	class NodoArbol; //Declaracion de antemano
	private:
		int nNodos;
		HijoDMasIzqHermanoDer::NodoArbol* nRaiz;
		
		class NodoArbol{
			public:
				NodoArbol* hijoMasI;
				NodoArbol* hermanoD;
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
				NodoArbol(int,NodoArbol*);
				
				/*
				** Require:
				** Modifica:
				** Parámetros:
				** Retorna:
				*/
				~NodoArbol();
		};
	public:
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
		HijoDMasIzqHermanoDer();
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
		HijoDMasIzqHermanoDer(int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        ~HijoDMasIzqHermanoDer();
		
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
		HijoDMasIzqHermanoDer::NodoArbol* raiz();
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        HijoDMasIzqHermanoDer::NodoArbol* hijoMasIzq(HijoDMasIzqHermanoDer::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        HijoDMasIzqHermanoDer::NodoArbol* hermanoDer(HijoDMasIzqHermanoDer::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        HijoDMasIzqHermanoDer::NodoArbol* padre(HijoDMasIzqHermanoDer::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        int esHoja(HijoDMasIzqHermanoDer::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        int etiqueta(HijoDMasIzqHermanoDer::NodoArbol*);
		
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
        int numHijos(HijoDMasIzqHermanoDer::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        void modificarEtiq(HijoDMasIzqHermanoDer::NodoArbol*, int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        HijoDMasIzqHermanoDer::NodoArbol* agregarHijoIesimo(HijoDMasIzqHermanoDer::NodoArbol*, int, int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        void borrarHoja(HijoDMasIzqHermanoDer::NodoArbol*);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        void ponerRaiz(int);
};

#endif