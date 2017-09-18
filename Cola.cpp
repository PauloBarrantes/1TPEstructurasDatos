#include "Cola.h"
#include <iostream>
using namespace std;

Cola::Cola(int M){ // Iniciamos la Cola Vacía
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
/*!
   \brief "Description"
   \param "Param description"
   \return "Return of the function"
*/
int Cola::vacia(){
    return !numElem;
}

/*!
   \brief "Coloca en la cola (al final) un elemento"
   \param "Un número entero"
   \return "No retorna nada"
*/
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
/*!
   \brief "Sacamos el elemento que está de primero en la cola"
   \param "No recibe"
   \return "Retorna al elemento que sacamos"
*/
int Cola::desencolar(){
    if(!vacia()){
        int frente = arregloCircular[primera];
        if (primera == tamano-1){
            primera = 0;
        }else{
            primera += 1;
        }
        numElem -= 1;
        return frente;
    }else{
        cerr << "La Cola está vacía" << endl;
        return NULL;
    }

}
/*!
   \brief "Retorna el número de elementos"
   \param "No recibe"
   \return "Retorna un entero"
*/
int Cola::numElementos(){
    return this->numElem;
}
/*!
   \brief "Retorna al que esté al frente de la cola"
   \param "No recibe"
   \return "Retorna un entero"
*/
int Cola::frente(){
    if(!vacia()){
        return arregloCircular[primera];
    }
}
/*!
   \brief "Retorna al que esté de último de la cola"
   \param "No recibe"
   \return "Retorna un entero"
*/
int Cola::ultimo(){
    if(!vacia()){
        return arregloCircular[ultima];
    }

}
