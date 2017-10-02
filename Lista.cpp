#include "Lista.h"
using namespace std;

Lista::NodoArbol::NodoArbol(int etiqueta){
	this->etiqueta = etiqueta;
	this->hijos = 0;
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

void Lista::agregar(int etiqueta){
	NodoArbol * nuevaPtr = new NodoArbol(etiqueta);

}

void Lista::borrar(){

/*	int respuesta = 0;
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
*/
}
