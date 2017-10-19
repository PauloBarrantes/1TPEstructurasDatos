#include "ArbolLDL.h"
using namespace std;


/*!
   \brief "Creamos una Cajita a partir de un Nodo"
   \param "Nodo al que va apuntar la Cajita"
   \return ""
*/
Arbol::Cajita::Cajita(Nodo nodo){
  this->nodo = nodo;
  this->hermanoDerecho = 0;
}

/*!
   \brief "Destruye la cajita y sus atributos"
   \param ""
   \return ""
*/
Arbol::Cajita::~Cajita(){
  if(this->hermanoDerecho != 0){
    delete this->hermanoDerecho;
  }
}

/*!
   \brief "Imprime la Caja a la que apunta y a su hermanoDerecho"
   \param "Output stream de donde se van a hacer las impresiones"
   \return "El Output stream"
*/
ostream& Arbol::Cajita::imprimir(ostream& salida){
  this->nodo->imprimir(salida);
  salida<< ", ";
  if(hermanoDerecho){
    this->hermanoDerecho->imprimir(salida);
  }
  return salida;
}

/*!
   \brief "Construye una Caja con una etiqueta"
   \param "Entra una etiqueta"
   \return ""
*/
Arbol::Caja::Caja(int etiqueta){
  this->etiqueta = etiqueta;
  this->hijoMasIzquierdo = 0;
  this->siguiente = 0;
}

/*!
   \brief "Destruye la Caja y sus atributos, si no son nulos"
   \param ""
   \return ""
*/
Arbol::Caja::~Caja(){
  if(this->hijoMasIzquierdo != 0){
    delete hijoMasIzquierdo;
  }
  if(this->siguiente != 0){
    delete siguiente;
  }
}

/*!
   \brief "Imprime la etiqueta y a su hijoMasIzquierdo"
   \param "Ostream de donde se van a hacer las impresiones"
   \return "El ostream"
*/
ostream& Arbol::Caja::imprimir(ostream& salida){
  salida<< this->etiqueta;
  if(hijoMasIzquierdo){
    salida<<" {";
    hijoMasIzquierdo->imprimir(salida);
    salida<<"} ";
  }
  return salida;
}

/*!
   \brief "Busca la Cajita que apunta al nodo que entra como parámetro"
   \param "Entra un Nodo al que hace referencia la Cajita buscada"
   \return "Retorna la Cajita que apunta al Nodo que entró como parámetro"
*/
Arbol::Cajita* Arbol::buscarCajita(Caja* nodoRef){
  Cajita* buscado = 0;
  bool encontro = false;
  Arbol::Nodo padreActual = raizArbol;
  Cajita* cajitaActual = padreActual->hijoMasIzquierdo;
  while (padreActual->siguiente != 0 && !encontro) {
    while (cajitaActual != 0 && !encontro){
      if(cajitaActual->nodo == nodoRef){
        buscado = cajitaActual;
        encontro = true;
      }
      cajitaActual = cajitaActual->hermanoDerecho;
    }
    padreActual = padreActual->siguiente;
  }
  return buscado;
}

/*!
   \brief "Construye un Arbol implementado por Lista de Listas e inicializa sus atributos"
   \param ""
   \return ""
*/
Arbol::Arbol(){
  this->_init();
  nodoNulo = 0;
}

/*!
   \brief "Inicializa nulos los atributos del Arbol"
   \param ""
   \return ""
*/
void Arbol::_init(){
  numeroNodos = 0;
  raizArbol = 0;
}

/*!
   \brief "Destruye el Arbol,"
   \param ""
   \return ""
*/
Arbol::~Arbol(){
  delete raizArbol;
}

/*!
   \brief "Vacía el Arbol"
   \param ""
   \return ""
*/
void Arbol::vaciar(){
  this->_init();
}

/*!
   \brief "Indica si el Arbol está vacío"
   \param ""
   \return "Retrona 1 si está vacía, 0 si no"
*/
int Arbol::vacia(){
  return numeroNodos == 0;
}

/*!
   \brief "Pide la raiz del Arbol"
   \param ""
   \return "Retorna el nodo raiz raizArbol"
*/
Arbol::Nodo Arbol::raiz(){
  return this->raizArbol;
}

/*!
   \brief "Pide el hijoMasIzquierdo de un Nodo pasado por parámetro"
   \param "Entra un Nodo para buscar su hijoMasIzquierdo"
   \return "Retorna el hijoMasIzquierdo del Nodo que entró como parámetro"
*/
Arbol::Nodo Arbol::hijoMasIzq(Arbol::Nodo nodoRef){
  Arbol::Nodo hijoMasI = 0;
  if (nodoRef->hijoMasIzquierdo != 0) {
    hijoMasI = nodoRef->hijoMasIzquierdo->nodo;
  }
  return hijoMasI;
}

/*!
   \brief "Busca la Cajita que apunta al Nodo que entra como parámetro y accede a su hermanoDerecho"
   \param "Entra un Nodo de referencia del que se busa el hermanoDerecho"
   \return "Retorna el hermanoDerecho del Nodo que entró como parámetro"
*/
Arbol::Nodo Arbol::hermanoDer(Arbol::Nodo nodoRef){
  Arbol::Nodo hermanoDer = 0;
  Cajita* cajita = buscarCajita(nodoRef);
  if(cajita && cajita->hermanoDerecho != 0){
    hermanoDer = cajita->hermanoDerecho->nodo;
  }
  return hermanoDer;
}

/*!
   \brief "Devolvemos el padre del Nodo que entro como parámetro"
   \param "Entra el Nodo del que se va a buscar el padre"
   \return "Retorna el nodo padre"
*/
Arbol::Nodo Arbol::padre(Arbol::Nodo nodoRef){
  Arbol::Nodo padre = 0;
  bool encontro = false;
  Arbol::Nodo padreActual = raizArbol;
  Cajita* cajitaActual = padreActual->hijoMasIzquierdo;
  while (padreActual->siguiente != 0 && !encontro) {
    while (cajitaActual != 0 && !encontro){
      if(cajitaActual->nodo == nodoRef){
        encontro = true;
      }
      padre = padreActual;
      cajitaActual = cajitaActual->hermanoDerecho;
    }
    padreActual = padreActual->siguiente;
  }
  return padre;
}

/*!
   \brief "Revisa si un Nodo tiene hijos para ver si es una hoja"
   \param "Entra un Nodo a verificar si es hoja"
   \return "Retorna 1 si es hoja, 0 si no"
*/
int Arbol::esHoja(Arbol::Nodo nodoRef){
  return nodoRef->hijoMasIzquierdo == 0;
}

/*!
   \brief "Accede a la etiqueta de un Nodo pasado por parámetro"
   \param "Entra un Nodo del que se quiere obtener la etiqueta"
   \return "Retorna la etiqueta del Nodo"
*/
int Arbol::etiqueta(Arbol::Nodo nodoRef){
    return nodoRef->etiqueta;
}

/*!
   \brief "Accede al atributo numeroNodos para dar la cantidad de Nodos del Arbol"
   \param ""
   \return "Retorna la cantidad de Nodos que tiene el Arbol"
*/
int Arbol::numNodos(){
  return numeroNodos;
}

/*!
   \brief "Cuenta el número de hijos que tiene un Nodo"
   \param "Entra el Nodo del que se quieren contar los hijos"
   \return "Retorna la cantidad de hijos"
*/
int Arbol::numHijos(Arbol::Nodo nodoRef){
  int numeroHijos = 0;
  Arbol::Cajita* siguiente = nodoRef->hijoMasIzquierdo;
  while (siguiente != 0) {
    ++numeroHijos;
    siguiente = siguiente->hermanoDerecho;
  }
  return numeroHijos;
}

/*!
   \brief "Modifica la etiqueta de un Nodo"
   \param "El Nodo al que se quiere modificar y su nueva etiqueta"
   \return ""
*/
void Arbol::modificarEtiq(Arbol::Nodo nodoRef, int nuevaEtiqueta){
  nodoRef->etiqueta = nuevaEtiqueta;
}

/*!
   \brief "Devolvemos el padre del nodoarbol que entro como parametro"
   \param "Entra un Nodo padre, la etiqueta del nuevo nodo y su posicion en la sublista de hijos"
   \return "Retorna el Nodo creado"
*/
Arbol::Nodo Arbol::agregarHijoIesimo(Arbol::Nodo padre, int etiqueta, int posicion){
  Arbol::Nodo nuevoNodo = new Caja(etiqueta);
  nuevoNodo->siguiente = raizArbol->siguiente;
  raizArbol->siguiente = nuevoNodo;
  Arbol::Nodo nodoActual = raizArbol;
  while(nodoActual != padre){
    nodoActual = nodoActual->siguiente;
  }
  Cajita* nuevaCajita = new Cajita(nuevoNodo);
  Cajita* cajitaActual = padre->hijoMasIzquierdo;
  if(posicion > 1){
    for(int i = 1; i < posicion-1 && cajitaActual->hermanoDerecho != 0; ++i){
      cajitaActual = cajitaActual->hermanoDerecho;
    }
    nuevaCajita->hermanoDerecho = cajitaActual->hermanoDerecho;
    cajitaActual->hermanoDerecho = nuevaCajita;
  }
  else{
    nuevaCajita->hermanoDerecho = cajitaActual;
    padre->hijoMasIzquierdo = nuevaCajita;
  }
  ++numeroNodos;
  return nuevoNodo;
}

/*!
   \brief "Borra la Cajita que apunta al Nodo y el Nodo que entra como parámetro"
   \param "Nodo hoja que se quiere borrar"
   \return ""
*/
void Arbol::borrarHoja(Arbol::Nodo hoja){
  Arbol::Nodo nodoActual = raizArbol;
  while(nodoActual->siguiente != hoja){
    nodoActual = nodoActual->siguiente;
  }
  nodoActual->siguiente = hoja->siguiente;
  hoja->siguiente = 0;
  Cajita* victima = buscarCajita(hoja);
  nodoActual = padre(hoja);
  if(nodoActual->hijoMasIzquierdo == victima){
    nodoActual->hijoMasIzquierdo = victima->hermanoDerecho;
  }
  else{
    Cajita* cajitaActual = nodoActual->hijoMasIzquierdo;
    while(cajitaActual->hermanoDerecho != victima){
      cajitaActual = cajitaActual->hermanoDerecho;
    }
    cajitaActual->hermanoDerecho = victima->hermanoDerecho;
  }
  victima->hermanoDerecho = 0;
  delete victima;
  --numeroNodos;
}

/*!
   \brief "Coloca la raiz del Arbol, cuando este está vacío"
   \param "Etiqueta que se le quiere poner a la raíz"
   \return ""
*/
void Arbol::ponerRaiz(int etiqueta){
  if(vacia()){
    raizArbol = new Caja(etiqueta);
    ++numeroNodos;
  }
}

/*!
   \brief "Busca el nodo que tiene la etiqueta que entra como parámetro"
   \param "Una etiqueta"
   \return "No retorna nada"
*/
Arbol::Nodo Arbol::buscarNodo(int etiqueta){
  Arbol::Nodo buscado = raizArbol;
  while(buscado->etiqueta != etiqueta && buscado){
    buscado = buscado->siguiente;
  }
  return buscado;
}

/*!
   \brief "Imprime el Arbol"
   \param "Ostream"
   \return "Ostream con el que se imprimió el raizArbol"
*/
ostream& Arbol::imprimir(ostream& salida){
  return raizArbol->imprimir(salida);
}
