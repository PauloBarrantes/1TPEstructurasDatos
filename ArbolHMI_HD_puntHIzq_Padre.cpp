#include "ArbolHMI_HD_puntHIzq_Padre.h"
#include <queue>
using namespace std;

//Métodos del NodoArbol
Arbol::NodoArbol::NodoArbol(int etqta){
	this->etqta = etqta;
	this->hijoMasI = 0;
	this->hermanoD = 0;
	this->hermanoI = 0;
	this->nPadre = 0;
	this->nHijos = 0;
}

Arbol::NodoArbol::NodoArbol(int etqta,NodoArbol* hermanoI,NodoArbol* hermanoD,NodoArbol* nPadre){
	this->etqta = etqta;
	this->hijoMasI = 0;
	this->hermanoD = hermanoD;
	this->hermanoI = hermanoI;
	this->nPadre = nPadre;
	this->nHijos = 0;
}

Arbol::NodoArbol::~NodoArbol(){
	if(hermanoD){
		delete hermanoD;
	}
	
	if(hijoMasI){
		delete hijoMasI;
	}
}

ostream& Arbol::NodoArbol::imprimir(ostream& salida){
	salida<<etqta;
	if(hijoMasI){
		salida<<" { ";
		hijoMasI->imprimir(salida);
		salida<<" }";
	}
	
	if(hermanoD){
		salida<<" , ";
		hermanoD->imprimir(salida);
	}
	return salida;
}


//Métodos del ArbolHMI_HD
Arbol::Arbol(){
	this->nRaiz = 0;
	this->nNodos = 0;
}

Arbol::Arbol(int etqta){
	ponerRaiz(etqta);
}

Arbol::~Arbol(){
	delete nRaiz;
}

void Arbol::vaciar(){
	delete nRaiz;
	nRaiz = 0;
}

int Arbol::vacia(){
	return !nRaiz;
}

Arbol::NodoArbol* Arbol::raiz(){
	return nRaiz;
}

Arbol::NodoArbol* Arbol::hijoMasIzq(Arbol::NodoArbol* nodo){
	return nodo->hijoMasI;
}

Arbol::NodoArbol* Arbol::hermanoDer(Arbol::NodoArbol* nodo){
	return nodo->hermanoD;
}

Arbol::NodoArbol* Arbol::padre(Arbol::NodoArbol* nodo){
	return nodo->nPadre;
}

int Arbol::esHoja(Arbol::NodoArbol* nodo){
	return !hijoMasIzq(nodo);
}

int Arbol::etiqueta(Arbol::NodoArbol* nodo){
	return nodo->etqta;
}

int Arbol::numNodos(){
	return nNodos;
}

int Arbol::numHijos(Arbol::NodoArbol* nodo){
	return nodo->nHijos;
}

void Arbol::modificarEtiq(Arbol::NodoArbol* nodo, int etqta){
	nodo->etqta = etqta;
}

Arbol::NodoArbol* Arbol::agregarHijoIesimo(Arbol::NodoArbol* nodo,int etqta, int posicion){
	NodoArbol* actual = nodo->hijoMasI;
	NodoArbol* nuevoHijo = 0;
	int seInserto = 0;
	
	if(posicion == 1){
		nuevoHijo = new NodoArbol(etqta);
		nuevoHijo->hermanoD = actual;
		nuevoHijo->nPadre = nodo;
		nodo->hijoMasI = nuevoHijo;
		seInserto = 1;
	}else{
		for(int i = 2; i < posicion && actual; ++i){
			actual = actual->hermanoD;
		}
		
		if(actual){
			nuevoHijo = new NodoArbol(etqta);
			nuevoHijo->hermanoD = actual->hermanoD;
			nuevoHijo->nPadre = nodo;
			nuevoHijo->hermanoI = actual;
			actual->hermanoD = nuevoHijo;
			seInserto = 1;
		}
	}
	
	if(seInserto){
		if(nuevoHijo->hermanoD){
			nuevoHijo->hermanoD->hermanoI = nuevoHijo;			
		}
		
		++nodo->nHijos;
		++nNodos;
	}
	
	return nuevoHijo;
}

void Arbol::borrarHoja(Arbol::NodoArbol* nodo){
	if(nodo->hermanoI){
		cout<<"1"<<endl;
		nodo->hermanoI->hermanoD = nodo->hermanoD;
	}else{
		nodo->nPadre->hijoMasI = nodo->hermanoD;
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

void Arbol::ponerRaiz(int etqta){
	if(!nRaiz){
		nRaiz = new NodoArbol(etqta);
		++nNodos;
	}
}

ostream& Arbol::imprimir(ostream& salida){
	return nRaiz->imprimir(salida);
}