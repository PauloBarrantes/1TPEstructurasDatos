#include "ArbolHMI_HD.h"


//Métodos del NodoArbol
HijoDMasIzqHermanoDer::NodoArbol::NodoArbol(int etiqueta){
	this.etiqueta = etiqueta;
	this.hijoMasI = 0;
	this.hermanoD = 0;
	numHijos = 0;
}

HijoDMasIzqHermanoDer::NodoArbol::NodoArbol(int etiqueta,NodoArbol* hermanoDer){
	this.etiqueta = etiqueta;
	this.hijoMasI = 0;
	this.hermanoD = hermanoD;
	numHijos = 0;
}

HijoDMasIzqHermanoDer::NodoArbol::~NodoArbol(){
	if(hermanoD){
		delete hermanoD;
	}
	
	if(hijoMasI){
		delete hijoMasI;
	}
}


//Métodos del ArbolHMI_HD
HijoDMasIzqHermanoDer::HijoDMasIzqHermanoDer(){
	raiz = 0;
	numNodos = 0;
}

HijoDMasIzqHermanoDer::HijoDMasIzqHermanoDer(int etiqueta){
	ponerRaiz(etiqueta);
}

HijoDMasIzqHermanoDer::~HijoDMasIzqHermanoDer(){
	delete raiz;
}

void HijoDMasIzqHermanoDer::vaciar(){
	delete raiz;
	raiz = 0;
}

int HijoDMasIzqHermanoDer::vacia(){
	return !raiz;
}

HijoDMasIzqHermanoDer::NodoArbol* HijoDMasIzqHermanoDer::raiz(){
	return raiz;
}

HijoDMasIzqHermanoDer::NodoArbol* HijoDMasIzqHermanoDer::hijoMasIzq(HijoDMasIzqHermanoDer::NodoArbol* nodo){
	return nodo.hijoMasI;
}

HijoDMasIzqHermanoDer::NodoArbol* HijoDMasIzqHermanoDer::hermanoDer(HijoDMasIzqHermanoDer::NodoArbol* nodo){
	return nodo.hermanoD;
}

HijoDMasIzqHermanoDer::NodoArbol* HijoDMasIzqHermanoDer::padre(HijoDMasIzqHermanoDer::NodoArbol* nodo){
	NodoArbol*nPadre = 0;
	NodoArbol* actual = raiz;
	queue<NodoArbol*> cola;
	NodoArbol* nHijo = 0;
	
	while(!nPadre && actual){
		nHijo = hijoMasIzq(actual);
		while(nHijo != 0 && !nPadre){
			if(nHijo == nodo){
				nPadre = actual;
			}else{
				cola.push_back(nHijo);
				nHijo = hermanoDer(nHijo);
			}
		}
		
		if(cola.size != 0){
			actual = cola.pop_front();
		}else{
			actual = 0;
		}
	}
	return nPadre;
}

int HijoDMasIzqHermanoDer::esHoja(HijoDMasIzqHermanoDer::NodoArbol* nodo){
	return !hijoMasIzq(nodo);
}

int HijoDMasIzqHermanoDer::etiqueta(HijoDMasIzqHermanoDer::NodoArbol* nodo){
	return nodo.etiqueta;
}

int HijoDMasIzqHermanoDer::numNodos(){
	return numNodos;
}

int HijoDMasIzqHermanoDer::numHijos(HijoDMasIzqHermanoDer::NodoArbol* nodo){
	return nodo.numHijos;
}

void HijoDMasIzqHermanoDer::modificarEtiq(HijoDMasIzqHermanoDer::NodoArbol* nodo, int etiqueta){
	nodo.etiqueta = etiqueta;
}

HijoDMasIzqHermanoDer::NodoArbol* HijoDMasIzqHermanoDer::agregarHijoIesimo(HijoDMasIzqHermanoDer::NodoArbol* nodo,int etiqueta, int posicion){
	NodoArbol* actual = hijoMasIzq(nodo);
	//Empieza en la dos por el hecho de que la pos 1 es el hijoMasIzq
	for(int i = 2;i < posicion; ++i){
		actual = hermanoDer(actual);
	}
	
	NodoArbol* nuevoHijo = new NodoArbol(etiqueta,hermanoDer(actual));
	actual.hermanoD = nuevoHijo;
}

void HijoDMasIzqHermanoDer::borrarHoja(HijoDMasIzqHermanoDer::NodoArbol* nodo){
	NodoArbol* nPadre = padre(nodo);
	
	
	if(hijoMasIzq(nPadre) == nodo){
		nPadre.hijoMasI = hermanoDer(nodo);
		nodo.hermanoD = 0;
	}else{
		NodoArbol* actual = hijoMasIzq(nPadre);
		while(hermanoDer(actual) != nodo){
			actual = hermanoDer(actual);
		}
		actual.hermanoD = nodo.hermanoD;
		nodo.hermanoD = 0;
	}
	delete nodo;
}

void HijoDMasIzqHermanoDer::ponerRaiz(int etiqueta){
	if(!raiz){
		raiz = new NodoArbol(etiqueta);
		++numNodos;
	}
}