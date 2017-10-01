#include "ArbolHMI_HD.h"


//Métodos del NodoArbol
HijoDMasIzqHermanoDer::NodoArbol::NodoArbol(int etiqueta){
	this.etiqueta = etiqueta;
	this.hijoMasI = 0;
	this.hermanoD = 0;
}

HijoDMasIzqHermanoDer::NodoArbol::NodoArbol(int etiqueta,NodoArbol* hijoMasIzq,NodoArbol* hermanoDer){
	this.etiqueta = etiqueta;
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
	NodoArbol* padre = 0;
	NodoArbol* actual = raiz;
	queue<NodoArbol*> cola;
	NodoArbol* nHijo = 0;
	
	while(!padre && actual){
		nHijo = hijoMasIzq(actual);
		while(nHijo != 0 && !padre){
			if(nHijo == nodo){
				padre = actual;
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
	return padre;
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

HijoDMasIzqHermanoDer::NodoArbol* HijoDMasIzqHermanoDer::agregarHijoIesimo(HijoDMasIzqHermanoDer::NodoArbol* nodo,int etiqueta, int);

void HijoDMasIzqHermanoDer::borrarHoja(int);

void HijoDMasIzqHermanoDer::ponerRaiz(int etiqueta){
	if(!raiz){
		raiz = new NodoArbol(etiqueta);
	}
}