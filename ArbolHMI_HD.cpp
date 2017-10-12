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

Arbol::NodoArbol::NodoArbol(int etqta,NodoArbol* hermanoD){
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

Arbol::Nodo Arbol::raiz(){
	return nRaiz;
}

Arbol::Nodo Arbol::hijoMasIzq(Arbol::Nodo nodo){
	return nodo->hijoMasI;
}

Arbol::Nodo Arbol::hermanoDer(Arbol::Nodo nodo){
	return nodo->hermanoD;
}

Arbol::Nodo Arbol::padre(Arbol::Nodo nodo){
	NodoArbol* nPadre = 0;
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

int Arbol::esHoja(Arbol::Nodo nodo){
	return !hijoMasIzq(nodo);
}

int Arbol::etiqueta(Arbol::Nodo nodo){
	return nodo->etqta;
}

int Arbol::numNodos(){
	return nNodos;
}

int Arbol::numHijos(Arbol::Nodo nodo){
	return nodo->nHijos;
}

void Arbol::modificarEtiq(Arbol::Nodo nodo, int etqta){
	nodo->etqta = etqta;
}

Arbol::Nodo Arbol::agregarHijoIesimo(Arbol::Nodo nodo,int etqta, int posicion){
	NodoArbol* nuevoHijo = 0;
	int seInserto = 0;
	cout<<nodo->etqta<<endl;
	cout<<etqta<<endl;
	cout<<posicion<<endl;
	
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

void Arbol::borrarHoja(Arbol::Nodo nodo){
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
	return nRaiz->imprimir(salida)<<endl;
}

Arbol::Nodo Arbol::buscarNodo(int etqta){
	NodoArbol* nBuscado = 0;
	NodoArbol* actual = 0;
	queue<NodoArbol*> cola;
	NodoArbol* nHijo = 0;
	
	cola.push(nRaiz);
	if(etqta != nRaiz->etqta){
		while(!nBuscado && cola.size() != 0){
			actual = cola.front();
			cola.pop(); 
			nHijo = hijoMasIzq(actual);
			while(nHijo != 0 && !nBuscado){
				if(nHijo->etqta == etqta){
					nBuscado = nHijo;
				}else{
					cola.push(nHijo);
					nHijo = hermanoDer(nHijo);
				}
			}
		}
	}else{
		nBuscado = nRaiz;
	}
	return nBuscado;
}