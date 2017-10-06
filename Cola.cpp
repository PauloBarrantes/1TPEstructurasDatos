#include "Cola.h"
#include <iostream>
using namespace std;

Cola::Cola(){ // Iniciamos la Cola Vacía
    arregloCircular = new int [M];
    tamano = M;
    numElem = 0;
    primera = 1;
    ultima = 0;
}

Cola::~Cola(){ //Destruir de la Cola
    delete arregloCircular;
}
void Cola::vaciar(){ //Vaciamos la cola
    numElem = 0;
    primera = 1;
    ultima=0;

}

int Cola::vacia(){
    return !numElem;
}


void Cola::encolar(int elemento){
    if (tamano != numElem){ // Si la cola no está llena hace el agregado
        if (ultima == tamano-1){
            ultima = 0;
        }else{
            ultima += 1;
        }
        arregloCircular[ultima] = elemento;
        numElem += 1;
    }  else{
        cerr << "La Cola está llena, no se pueden agregar más elementos" << endl;
    }
}

int Cola::desencolar(){
    int frente =0;
    if(!vacia()){
        frente = arregloCircular[primera];
        if (primera == tamano-1){
            primera = 0;
        }else{
            primera += 1;
        }
        numElem -= 1;
    }else{
        cerr << "La Cola está vacía" << endl;
    }
    return frente;

}

int Cola::numElementos(){
    return this->numElem;
}

int Cola::frente(){
    int elemento = 0;
    if(!vacia()){
        elemento = arregloCircular[primera];
    }else{
        std::cerr << "La cola está vacía" << '\n';
    }
    return elemento;
}

int Cola::ultimo(){
    int elemento = 0;
    if(!vacia()){
        elemento = arregloCircular[ultima];
    }else{
        std::cerr << "La cola está vacía" << '\n';
    }
    return elemento;

}
