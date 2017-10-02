#include "ArbolHMI_HD.h"
#include <queue>
using namespace std;

//Métodos del NodoArbol
HijoDMasIzqHermanoDer::NodoArbol::NodoArbol(int etqta){
	this->etqta = etqta;
	this->hijoMasI = 0;
	this->hermanoD = 0;
	this->nHijos = 0;
	this->senalaP = 0;
}

HijoDMasIzqHermanoDer::NodoArbol::NodoArbol(int etqta,NodoArbol* hermanoDer){
	this->etqta = etqta;
	this->hijoMasI = 0;
	this->hermanoD = hermanoD;
	this->nHijos = 0;
	this->senalaP = 0;
}

HijoDMasIzqHermanoDer::NodoArbol::~NodoArbol(){
	if(hermanoD){
		delete hermanoD;
	}
	
	if(hijoMasI){
		delete hijoMasI;
	}
}

ostream& HijoDMasIzqHermanoDer::NodoArbol::toString(ostream& salida){
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
	NodoArbol* actual = nodo;
	
	while(actual->senalaP == 0){
		actual = actual->hermanoD;
	}
	
	return actual->hermanoD;
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
	NodoArbol* actual = nodo->hijoMasI;
	
	//Empieza en la dos por el hecho de que la pos 1 es el hijoMasIzq
	for(int i = 2;i < posicion; ++i){
		actual = actual->hermanoD;
	}
	
	NodoArbol* nuevoHijo = new NodoArbol(etqta,actual->hermanoD);
	
	if(actual->senalaP){
		actual->senalaP = 0;
		nuevoHijo->senalaP = 1;
	}
	
	actual->hermanoD = nuevoHijo;
	++nodo->nHijos;
	++nNodos;
	
	return nuevoHijo;
}

void HijoDMasIzqHermanoDer::borrarHoja(HijoDMasIzqHermanoDer::NodoArbol* nodo){
	NodoArbol* nPadre = padre(nodo);
	
	
	if(nPadre->hijoMasI == nodo ){
		if(nodo->senalaP){
			nPadre->hijoMasI = 0;
		}else{
			nPadre->hijoMasI = nodo->hermanoD;
		}
	}else{
		NodoArbol* actual = nPadre->hijoMasI;
		while(actual->hermanoD != nodo){
			actual = actual->hermanoD;
		}
		
		actual->hermanoD = nodo->hermanoD;
		
		if(nodo->senalaP){
			actual->senalaP = 1;
		}
	}
	
	--nNodos;
	--nPadre->nHijos;
	
	nodo->hermanoD = 0;
	delete nodo;
}

void HijoDMasIzqHermanoDer::ponerRaiz(int etqta){
	if(!nRaiz){
		nRaiz = new NodoArbol(etqta);
		++nNodos;
	}
}

ostream& HijoDMasIzqHermanoDer::toString(ostream& salida){
	return nRaiz->toString(salida);
}