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

~Cola(){
    delete arregloCircular;
}
void vaciar(){ //Vaciamos la cola
    numElem = 0;
    primera = 1;
    ultima=0;

}
int vacia(){
    return numElem;

}
void encolar(int elemento){
    
    if(primera != ultima+1){
        ultima += 1;
    }

}
int desencolar(){


}
int numElem(){


}
int frente(){


}
int ultimo(){


}
