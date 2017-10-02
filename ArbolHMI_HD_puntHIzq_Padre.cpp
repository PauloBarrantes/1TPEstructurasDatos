#include "ArbolHMI_HD.h"
#include <queue>
using namespace std;

//Métodos del NodoArbol
HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol::NodoArbol(int etqta){
	this->etqta = etqta;
	this->hijoMasI = 0;
	this->hermanoD = 0;
	this->hermanoI = 0;
	this->nPadre = 0;
	this->nHijos = 0;
}

HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol::NodoArbol(int etqta,NodoArbol* hermanoI,NodoArbol* hermanoD,NodoArbol* nPadre){
	this->etqta = etqta;
	this->hijoMasI = 0;
	this->hermanoD = hermanoD;
	this->hermanoI = hermanoI;
	this->nPadre = nPadre;
	this->nHijos = 0;
}

HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol::~NodoArbol(){
	if(hermanoD){
		delete hermanoD;
	}
	
	if(hijoMasI){
		delete hijoMasI;
	}
}

ostream& HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol::toString(ostream& salida){
	salida<<etqta;
	if(hijoMasI){
		salida<<" { ";
		hijoMasI->toString(salida);
		salida<<" }";
	}
	
	if(hermanoD){
		salida<<" , ";
		hermanoD->toString(salida);
	}
	return salida;
}


//Métodos del ArbolHMI_HD
HijoDMasIzqHermanoDer_puntIzqPadre::HijoDMasIzqHermanoDer_puntIzqPadre(){
	this->nRaiz = 0;
	this->nNodos = 0;
}

HijoDMasIzqHermanoDer_puntIzqPadre::HijoDMasIzqHermanoDer_puntIzqPadre(int etqta){
	ponerRaiz(etqta);
}

HijoDMasIzqHermanoDer_puntIzqPadre::~HijoDMasIzqHermanoDer_puntIzqPadre(){
	delete nRaiz;
}

void HijoDMasIzqHermanoDer_puntIzqPadre::vaciar(){
	delete nRaiz;
	nRaiz = 0;
}

int HijoDMasIzqHermanoDer_puntIzqPadre::vacia(){
	return !nRaiz;
}

HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* HijoDMasIzqHermanoDer_puntIzqPadre::raiz(){
	return nRaiz;
}

HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* HijoDMasIzqHermanoDer_puntIzqPadre::hijoMasIzq(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* nodo){
	return nodo->hijoMasI;
}

HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* HijoDMasIzqHermanoDer_puntIzqPadre::hermanoDer(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* nodo){
	return nodo->hermanoD;
}

HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* HijoDMasIzqHermanoDer_puntIzqPadre::padre(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* nodo){
	return nodo->nPadre;
}

int HijoDMasIzqHermanoDer_puntIzqPadre::esHoja(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* nodo){
	return !hijoMasIzq(nodo);
}

int HijoDMasIzqHermanoDer_puntIzqPadre::etiqueta(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* nodo){
	return nodo->etqta;
}

int HijoDMasIzqHermanoDer_puntIzqPadre::numNodos(){
	return nNodos;
}

int HijoDMasIzqHermanoDer_puntIzqPadre::numHijos(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* nodo){
	return nodo->nHijos;
}

void HijoDMasIzqHermanoDer_puntIzqPadre::modificarEtiq(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* nodo, int etqta){
	nodo->etqta = etqta;
}

HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* HijoDMasIzqHermanoDer_puntIzqPadre::agregarHijoIesimo(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* nodo,int etqta, int posicion){
	NodoArbol* actual = nodo->hijoMasI;
	//Empieza en la dos por el hecho de que la pos 1 es el hijoMasIzq
	for(int i = 2;i < posicion; ++i){
		actual = actual->hermanoD;
	}
	
	NodoArbol* nuevoHijo = new NodoArbol(etqta,actual,actual->hermanoD,nodo);
	actual->hermanoD->hermanoI = nuevoHijo;
	actual->hermanoD = nuevoHijo;
	++nodo->nHijos;
	++nNodos;
	
	return nuevoHijo;
}

void HijoDMasIzqHermanoDer_puntIzqPadre::borrarHoja(HijoDMasIzqHermanoDer_puntIzqPadre::NodoArbol* nodo){
	if(nodo->hermanoI){
		nodo->hermanoI->hermanoD
	}else{
		nodo->nPadre->hijoMasI = hermanoDer(nodo);
	}
	
	if(nodo->hermanoD){
		nodo->hermanoD->hermanoI = nodo->hermanoI;
	}
	
	--nNodos;
	--nodo->nPadre->nHijos;
	
	nodo->hermanoD = 0;
	nodo->hermanoI = 0;
	nodo->nPadre = 0;
	delete nodo;
}

void HijoDMasIzqHermanoDer_puntIzqPadre::ponerRaiz(int etqta){
	if(!nRaiz){
		nRaiz = new NodoArbol(etqta);
		++nNodos;
	}
}

ostream& HijoDMasIzqHermanoDer_puntIzqPadre::toString(ostream& salida){
	return nRaiz->toString(salida);
}