#include "ArbolHMI_HD.h"
#include <queue>
using namespace std;

//Métodos del NodoArbol
HijoDMasIzqHermanoDer::NodoArbol::NodoArbol(int etqta){
	this->etqta = etqta;
	this->hijoMasI = 0;
	this->hermanoD = 0;
	this->nHijos = 0;
}

HijoDMasIzqHermanoDer::NodoArbol::NodoArbol(int etqta,NodoArbol* hermanoDer){
	this->etqta = etqta;
	this->hijoMasI = 0;
	this->hermanoD = hermanoD;
	this->nHijos = 0;
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
	this->nRaiz = 0;
	this->nNodos = 0;
}

HijoDMasIzqHermanoDer::HijoDMasIzqHermanoDer(int etqta){
	ponerRaiz(etqta);
}

HijoDMasIzqHermanoDer::~HijoDMasIzqHermanoDer(){
	delete nRaiz;
}

void HijoDMasIzqHermanoDer::vaciar(){
	delete nRaiz;
	nRaiz = 0;
}

int HijoDMasIzqHermanoDer::vacia(){
	return !nRaiz;
}

HijoDMasIzqHermanoDer::NodoArbol* HijoDMasIzqHermanoDer::raiz(){
	return nRaiz;
}

HijoDMasIzqHermanoDer::NodoArbol* HijoDMasIzqHermanoDer::hijoMasIzq(HijoDMasIzqHermanoDer::NodoArbol* nodo){
	return nodo->hijoMasI;
}

HijoDMasIzqHermanoDer::NodoArbol* HijoDMasIzqHermanoDer::hermanoDer(HijoDMasIzqHermanoDer::NodoArbol* nodo){
	return nodo->hermanoD;
}

HijoDMasIzqHermanoDer::NodoArbol* HijoDMasIzqHermanoDer::padre(HijoDMasIzqHermanoDer::NodoArbol* nodo){
	NodoArbol*nPadre = 0;
	NodoArbol* actual = nRaiz;
	queue<NodoArbol*> cola;
	NodoArbol* nHijo = 0;
	
	while(!nPadre && actual){
		nHijo = hijoMasIzq(actual);
		while(nHijo != 0 && !nPadre){
			if(nHijo == nodo){
				nPadre = actual;
			}else{
				cola.push(nHijo);
				nHijo = hermanoDer(nHijo);
			}
		}
		
		if(cola.size() != 0){
			actual = cola.front();
			cola.pop();
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
	return nodo->etqta;
}

int HijoDMasIzqHermanoDer::numNodos(){
	return nNodos;
}

int HijoDMasIzqHermanoDer::numHijos(HijoDMasIzqHermanoDer::NodoArbol* nodo){
	return nodo->nHijos;
}

void HijoDMasIzqHermanoDer::modificarEtiq(HijoDMasIzqHermanoDer::NodoArbol* nodo, int etqta){
	nodo->etqta = etqta;
}

HijoDMasIzqHermanoDer::NodoArbol* HijoDMasIzqHermanoDer::agregarHijoIesimo(HijoDMasIzqHermanoDer::NodoArbol* nodo,int etqta, int posicion){
	NodoArbol* actual = hijoMasIzq(nodo);
	//Empieza en la dos por el hecho de que la pos 1 es el hijoMasIzq
	for(int i = 2;i < posicion; ++i){
		actual = hermanoDer(actual);
	}
	
	NodoArbol* nuevoHijo = new NodoArbol(etqta,hermanoDer(actual));
	actual->hermanoD = nuevoHijo;
	return nuevoHijo;
}

void HijoDMasIzqHermanoDer::borrarHoja(HijoDMasIzqHermanoDer::NodoArbol* nodo){
	NodoArbol* nPadre = padre(nodo);
	
	
	if(hijoMasIzq(nPadre) == nodo){
		nPadre->hijoMasI = hermanoDer(nodo);
		nodo->hermanoD = 0;
	}else{
		NodoArbol* actual = hijoMasIzq(nPadre);
		while(hermanoDer(actual) != nodo){
			actual = hermanoDer(actual);
		}
		actual->hermanoD = nodo->hermanoD;
		nodo->hermanoD = 0;
	}
	delete nodo;
}

void HijoDMasIzqHermanoDer::ponerRaiz(int etqta){
	if(!nRaiz){
		nRaiz = new NodoArbol(etqta);
		++nNodos;
	}
}