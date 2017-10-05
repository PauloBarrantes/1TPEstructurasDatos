#include "ArbolHMI_HD_utimoPadre.h"
#include <queue>
using namespace std;

//Métodos del NodoArbol
HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol::NodoArbol(int etqta){
	this->etqta = etqta;
	this->hijoMasI = 0;
	this->hermanoD = 0;
	this->nHijos = 0;
	this->senalaP = 0;
}

HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol::NodoArbol(int etqta,NodoArbol* hermanoD){
	this->etqta = etqta;
	this->hijoMasI = 0;
	this->hermanoD = hermanoD;
	this->nHijos = 0;
	this->senalaP = 0;
}

HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol::~NodoArbol(){
	if(hermanoD && !senalaP){
		delete hermanoD;
	}
	
	if(hijoMasI){
		delete hijoMasI;
	}
}

ostream& HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol::toString(ostream& salida){
	salida<<etqta;
	if(hijoMasI){
		salida<<" { ";
		hijoMasI->toString(salida);
		salida<<" }";
	}
	
	if(hermanoD && !senalaP){
		salida<<" , ";
		hermanoD->toString(salida);
	}
	return salida;
}


//Métodos del ArbolHMI_HD
HijoDMasIzqHermanoDer_Ult_puntPadre::HijoDMasIzqHermanoDer_Ult_puntPadre(){
	this->nRaiz = 0;
	this->nNodos = 0;
}

HijoDMasIzqHermanoDer_Ult_puntPadre::HijoDMasIzqHermanoDer_Ult_puntPadre(int etqta){
	ponerRaiz(etqta);
}

HijoDMasIzqHermanoDer_Ult_puntPadre::~HijoDMasIzqHermanoDer_Ult_puntPadre(){
	delete nRaiz;
}

void HijoDMasIzqHermanoDer_Ult_puntPadre::vaciar(){
	delete nRaiz;
	nRaiz = 0;
}

int HijoDMasIzqHermanoDer_Ult_puntPadre::vacia(){
	return !nRaiz;
}

HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* HijoDMasIzqHermanoDer_Ult_puntPadre::raiz(){
	return nRaiz;
}

HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* HijoDMasIzqHermanoDer_Ult_puntPadre::hijoMasIzq(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* nodo){
	return nodo->hijoMasI;
}

HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* HijoDMasIzqHermanoDer_Ult_puntPadre::hermanoDer(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* nodo){
	return nodo->hermanoD;
}

HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* HijoDMasIzqHermanoDer_Ult_puntPadre::padre(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* nodo){
	NodoArbol* actual = nodo;
	
	while(actual->senalaP == 0 && actual->hermanoD){
		cout<<actual->etqta<<endl;
		actual = actual->hermanoD;
	}
	cout<<actual->etqta<<endl;
	cout<<actual->hermanoD->etqta<<endl;
	return actual->hermanoD;
}

int HijoDMasIzqHermanoDer_Ult_puntPadre::esHoja(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* nodo){
	return !hijoMasIzq(nodo);
}

int HijoDMasIzqHermanoDer_Ult_puntPadre::etiqueta(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* nodo){
	return nodo->etqta;
}

int HijoDMasIzqHermanoDer_Ult_puntPadre::numNodos(){
	return nNodos;
}

int HijoDMasIzqHermanoDer_Ult_puntPadre::numHijos(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* nodo){
	return nodo->nHijos;
}

void HijoDMasIzqHermanoDer_Ult_puntPadre::modificarEtiq(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* nodo, int etqta){
	nodo->etqta = etqta;
}

HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* HijoDMasIzqHermanoDer_Ult_puntPadre::agregarHijoIesimo(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* nodo,int etqta, int posicion){

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

void HijoDMasIzqHermanoDer_Ult_puntPadre::borrarHoja(HijoDMasIzqHermanoDer_Ult_puntPadre::NodoArbol* nodo){
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

void HijoDMasIzqHermanoDer_Ult_puntPadre::ponerRaiz(int etqta){
	if(!nRaiz){
		nRaiz = new NodoArbol(etqta);
		++nNodos;
	}
}

ostream& HijoDMasIzqHermanoDer_Ult_puntPadre::toString(ostream& salida){
	return nRaiz->toString(salida);
}