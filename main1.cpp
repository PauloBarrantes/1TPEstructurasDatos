#include <iostream>
//#include "ArbolHMI_HD_puntHIzq_Padre.h"
#include "ArbolHMI_HD.h"
//#include "ArbolHMI_HD_utimoPadre.h"

using namespace std;

//Metodo para overse por el arbol

//

int main(int argN, char** argV){
	Arbol Arbol;
    Arbol.ponerRaiz(123);
	
    Arbol.agregarHijoIesimo(Arbol.raiz(),1,1);
	Arbol.toString(cout)<<endl;
	
    Arbol.agregarHijoIesimo(Arbol.raiz(),2,2);
	Arbol.toString(cout)<<endl;
	
    Arbol.agregarHijoIesimo(Arbol.raiz(),3,2);
	Arbol.toString(cout)<<endl;
	
    cout << "numHijos" << Arbol.numHijos(Arbol.raiz()) <<endl;
	cout<<"Etiqueta"<<Arbol.etiqueta(Arbol.hijoMasIzq(Arbol.raiz()))<<endl;
	
	
    Arbol.borrarHoja(Arbol.hermanoDer(Arbol.hermanoDer(Arbol.hijoMasIzq(Arbol.raiz()))));
    cout << "Borrando..." <<endl;
    Arbol.toString(cout)<<endl;
    cout<< "nNodos" <<Arbol.numNodos()<< endl;
    cout << "numHijos" << Arbol.numHijos(Arbol.raiz()) <<endl;
	Arbol.toString(cout)<<endl;
	
	cout<<Arbol.etiqueta(Arbol.hermanoDer(Arbol.hijoMasIzq(Arbol.raiz())))<<endl;
	
	cout<<"Fin"<<endl;
	return 0;
}