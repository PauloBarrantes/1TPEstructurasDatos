#include <iostream>

//#include "Test.h"
#include "GeneradorArbol.h"
//#include "ArbolHMI_HD.h"
#include "ArbolSalPadre.h"

#include <time.h>
using namespace std;

int main(){
    time_t timer;
    cout << "Tiempo:" << time(&timer)<<endl;
	
	GeneradorArbol generador;
	Arbol * arbol = generador.arbolPino(10);
	arbol->imprimir(cout);
	
	delete arbol;
	
	arbol = generador.arbolArbusto(10);
	arbol->imprimir(cout);
	
	delete arbol;
	
	arbol = generador.arbolPromedio(10);
	arbol->imprimir(cout);
	
	delete arbol;
	
	arbol = generador.arbolBinario(10);
	arbol->imprimir(cout);
	
	delete arbol;
	
    //Test* test = new Test();
    //test->testGeneral();

	return 0;
}
