#include "ArbolHMI_HD.h"
#include <queue>
using namespace std;

//Métodos del NodoArbol
Arbol::NodoArbol::NodoArbol(int etqta){
	this->etqta = etqta;
	this->hijoMasI = 0;
	this->hermanoD = 0;
	this->nHijos = 0;
}

Arbol::NodoArbol::NodoArbol(int etqta,NodoArbol* hermanoDer){
	this->etqta = etqta;
	this->hijoMasI = 0;
	this->hermanoD = hermanoD;
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
	NodoArbol* nuevoHijo = 0;
	int seInserto = 0;
	
	if(posicion == 1){
		nuevoHijo = new NodoArbol(etqta,nodo->hijoMasI);
		nodo->hijoMasI = nuevoHijo;
		seInserto = 1;
	}else{
		NodoArbol* actual = nodo->hijoMasI;
		
		//Empieza en la dos por el hecho de que la pos 1 es el hijoMasIzq
		for(int i = 2;i < posicion && actual; ++i){
			actual = actual->hermanoD;
		}
		
		if(actual){
			nuevoHijo = new NodoArbol(etqta,actual->hermanoD);
			actual->hermanoD = nuevoHijo;
			seInserto = 1;
		}
	}
	
	if(seInserto){
		++nodo->nHijos;
		++nNodos;
	}
	
	return nuevoHijo;
}

void Arbol::borrarHoja(Arbol::NodoArbol* nodo){
	NodoArbol* nPadre = padre(nodo);
	
	if(nPadre){
		if(nPadre->hijoMasI == nodo){
			nPadre->hijoMasI = nodo->hermanoD;
		}else{
			NodoArbol* actual = nPadre->hijoMasI;
			while(actual->hermanoD != nodo){
				actual = hermanoDer(actual);
			}
			actual->hermanoD = nodo->hermanoD;
		}
		nodo->hermanoD = 0;
		
		--nNodos;
		--nPadre->nHijos;
		
	}
	
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