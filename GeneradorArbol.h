#ifndef Generador_Arbol2017
#define Generador_Arbol2017
//#include "ArbolSalPadre.h"
//#include "ArbolHMI_HD_puntHIzq_Padre.h"
//#include "ArbolHMI_HD.h"
//#include "ArbolHMI_HD_utimoPadre.h"
#include "ArbolLDL.h"

class GeneradorArbol {
  public:
    Arbol* arbolPino(int n);
    Arbol* arbolArbusto(int n);
    Arbol* arbolPromedio(int n);
    Arbol* arbolBinario(int n);
}
