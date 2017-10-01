#ifndef _ModeloArbol2017
#define _ModeloArbol2017

class ModeloArbol{
	protected:
		int numNodos;

		class NodoArbol{
			private:
				int etiqueta;
			public:

		}
	public:
		ModeloArbol();
		~ModeloArbol();

		void vaciar();
		int vacia();

		virtual void ponerRaiz(int) = 0;
		virtual NodoArbol* agregarHijoIesimo(NodoArbol*,int,int) = 0;
		virtual void borrarHoja(NodoArbol*) = 0;
		virtual void modificarEtiqueta(NodoArbol*,int) = 0;
		virtual NodoArbol* raiz() = 0;
		virtual NodoArbol* padre(NodoArbol*) = 0;
		virtual NodoArbol* hijoMasIzquierdo(NodoArbol*) = 0;
		virtual NodoArbol* hermanoDerecho(NodoArbol*) = 0;
		virtual int etiqueta(NodoArbol*) = 0;
		int numNodos();
		virtual int numHijos(NodoArbol*) = 0;
		virtual int esHoja(NodoArbol*) = 0;
};

#endif
