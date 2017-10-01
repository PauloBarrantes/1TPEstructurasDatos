#include "ArbolHMI_HD.h"


//Métodos del NodoArbol
HijoDMasIzqHermanoDer::NodoArbol::NodoArbol(int elemento){
	this.elemento = elemento;
	this.hijoMasI = 0;
	this.hermanoD = 0;
}

HijoDMasIzqHermanoDer::NodoArbol::NodoArbol(int elemento,NodoArbol* hijoMasIzq,NodoArbol* hermanoDer){
	this.elemento = elemento;
	this.hijoMasI = hijoMasI;
	this.hermanoD = hermanoD;
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
}

HijoDMasIzqHermanoDer::HijoDMasIzqHermanoDer(int elemento){
	ponerRaiz(elemento);
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
	while(){
		while(){
			
		}
	}
}

int HijoDMasIzqHermanoDer::esHoja(int);

int HijoDMasIzqHermanoDer::etiqueta();

int HijoDMasIzqHermanoDer::numNodos();

int HijoDMasIzqHermanoDer::numHijos(int);

void HijoDMasIzqHermanoDer::modificarEtiq(int, int);

HijoDMasIzqHermanoDer::NodoArbol* HijoDMasIzqHermanoDer::agregarHijoIesimo(int, int, int);

void HijoDMasIzqHermanoDer::borrarHoja(int);

void HijoDMasIzqHermanoDer::ponerRaiz(int elemento){
	raiz = new NodoArbol(elemento);
}