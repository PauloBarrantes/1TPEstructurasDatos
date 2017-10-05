#include <iostream>
#include "Cola.h"
#include "ArbolSalPadre.h"
#include <string>
#include "Menu.h"
using namespace std;

int main(){
    string palabra;
    cin >> palabra;
    cout << palabra <<endl;
    if(palabra == "Fa"){
        cout << "Comparar funciona" <<endl;
    }
    
    ArbolSalPadre Arbol;
    Arbol.ponerRaiz(123);
    Arbol.agregarHijoIesimo(0,1,1);
    Arbol.agregarHijoIesimo(0,2,1);
    Arbol.agregarHijoIesimo(0,3,1);
    cout << "numHijos" << Arbol.numHijos(0) <<endl;

    Arbol.borrarHoja(2);
    cout << "Borrando..." <<endl;
    Arbol.imprimir();
    cout<< "nNodos" <<Arbol.numNodos()<< endl;
    cout << "numHijos" << Arbol.numHijos(0) <<endl;
}
