#include "ArbolHMI_HD_utimoPadre.h"
#include <queue>
using namespace std;

//Métodos del NodoArbol
Arbol::NodoArbol::NodoArbol(int etqta){
	this->etqta = etqta;
	this->hijoMasI = 0;
	this->hermanoD = 0;
	this->nHijos = 0;
	this->senalaP = 0;
}

Arbol::NodoArbol::NodoArbol(int etqta,NodoArbol* hermanoD){
	this->etqta = etqta;
	this->hijoMasI = 0;
	this->hermanoD = hermanoD;
	this->nHijos = 0;
	this->senalaP = 0;
}

Arbol::NodoArbol::~NodoArbol(){
	if(hermanoD && !senalaP){
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
	
	if(hermanoD && !senalaP){
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
	NodoArbol* actual = nodo;
	
	while(actual->senalaP == 0 && actual->hermanoD){
		cout<<actual->etqta<<endl;
		actual = actual->hermanoD;
	}
	cout<<actual->etqta<<endl;
	cout<<actual->hermanoD->etqta<<endl;
	return actual->hermanoD;
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
		if(nodo->hijoMasI){
			nuevoHijo = new NodoArbol(etqta,nodo->hijoMasI);
			nodo->hijoMasI = nuevoHijo;
		}else{
			nuevoHijo = new NodoArbol(etqta,nodo);
			cout<<nuevoHijo->hermanoD->etqta<<endl;
			nuevoHijo->senalaP = 1;
			nodo->hijoMasI = nuevoHijo;
		}
		seInserto = 1;
	}else{
		NodoArbol* actual = nodo->hijoMasI;
		

		//Empieza en la dos por el hecho de que la pos 1 es el hijoMasIzq
		for(int i = 2;i < posicion && actual && actual->senalaP == 0; ++i){
			actual = actual->hermanoD;
		}
		
		if(actual){
			cout<<actual->etqta<<endl;
			cout<<actual->hermanoD->etqta<<endl;
			nuevoHijo = new NodoArbol(etqta,actual->hermanoD);
			actual->hermanoD = nuevoHijo;
			seInserto = 1;
			
			if(actual->senalaP){
				actual->senalaP = 0;
				nuevoHijo->senalaP = 1;
			}
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
	int seBorro = 0;
	
	if(nPadre){
		if(nPadre->hijoMasI == nodo){
			if(nodo->senalaP){
				nPadre->hijoMasI = 0;
			}else{
				nPadre->hijoMasI = nodo->hermanoD;
			}
			seBorro = 1;
		}else{
			NodoArbol* actual = nPadre->hijoMasI;
			
			while(actual->hermanoD && actual->hermanoD != nodo){
				actual = actual->hermanoD;
			}
			
			if(nodo->senalaP){
				actual->senalaP = 1;
			}
			
			actual->hermanoD = nodo->hermanoD;
			seBorro = 1;
		}
	}
	
	if(seBorro){
		--nPadre->nHijos;
		--nNodos;
	}
	
	nodo->hermanoD = 0;
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