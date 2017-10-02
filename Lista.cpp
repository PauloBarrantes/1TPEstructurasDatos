#include "Lista.h"
using namespace std;

Lista::NodoArbol::NodoArbol(int etiqueta){
	this->etiqueta = etiqueta;
	this->anterior = 0;
	this->siguiente = 0;
}

Lista::NodoArbol::~NodoArbol(){
	if(this->siguiente){
		delete this->siguiente;
	}
}

Lista::Lista(){
	primera = 0;
	ultima = 0;
	length=0;
}

Lista::~Lista(){
  if(primera){
	 delete primera;
  }
}

int Lista::getLength(){
    return this->length;
}

void Lista::pushFront(int etiqueta){
	NodoArbol * nuevaPtr = new NodoArbol(etiqueta);

	if(this->primera){
		nuevaPtr->siguiente = this->primera;
     	this->primera->anterior = nuevaPtr;
	    this->primera= nuevaPtr;
    }
	else {
	   primera = ultima = nuevaPtr;
	}
	++length;
}

int Lista::popFront(){
	int respuesta = 0;
	if(this->primera){
		respuesta = this->primera->etiqueta;
		NodoArbol * victima = this->primera;
		this->primera->anterior = 0;
		this->primera = this->primera->siguiente;
		victima->siguiente = 0;
		delete victima;
	    --length;

		if(this->primera==0){
		   this->ultima = 0;
		}
	}
	else {
	   cerr << "popFront warning --lista vacia--" << endl;
	}
	return respuesta;
}

void Lista::pushBack(int etiqueta){
	NodoArbol * nuevaPtr = new NodoArbol(etiqueta);

	if(this->ultima){
		nuevaPtr->anterior = this->ultima;
     	this->ultima->siguiente = nuevaPtr;
	    this->ultima = nuevaPtr;
    }
	else {
	   primera = ultima = nuevaPtr;
	}
	++length;
}

int Lista::popBack(){
	int respuesta = 0;
	if(this->ultima){
		respuesta = this->ultima->etiqueta;
		NodoArbol * victima = this->ultima;
		this->ultima->siguiente = 0;
		this->ultima = this->ultima->anterior;
		delete victima;
	    --length;
		if(this->ultima==0){
		   this->primera = 0;
		}
	}
	else {
	   cerr << "popBack warning --lista vacia--" << endl;
	}
	return respuesta;
}
