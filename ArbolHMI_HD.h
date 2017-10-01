#ifndef _HijoMasIzqHermanoDer
#define _HijoMasIzqHermanoDer

class HijoDMasIzqHermanoDer{
	class NodoArbol; //Declaracion de antemano
	private:
		NodoArbol raiz;
		
		class NodoArbol{
			public:
				NodoArbol* hijoMasI;
				NodoArbol* hermanoD;
				int elemento;
				
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
				NodoArbol(int,NodoArbol*,NodoArbol*);
				
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
				toString();
				*/
		}
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
		int raiz();
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        int hijoMasIzq(int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        int hermanoDer(int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        int padre(int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        int esHoja(int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        int etiqueta();
		
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
        int numHijos(int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        void modificarEtiq(int, int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        int agregarHijoIesimo(int, int, int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        void borrarHoja(int);
		
		/*
		** Require:
		** Modifica:
		** Parámetros:
		** Retorna:
		*/
        void ponerRaiz(int);
}

#endif