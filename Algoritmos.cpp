#include "Algoritmos.h"
#include <iostream>
#include "Cola.h"
using namespace std;



Algoritmos::Algoritmos(){
}
Algoritmos::~Algoritmos(){
}

int hermanoIzquierdo(Arbol* arbol, Arbol::Nodo nodo){
  int etqta = 0;
  Arbol::Nodo hermanoIzq = arbol->nodoNulo;
  Arbol::Nodo actual = arbol->hijoMasIzq(arbol->padre(nodo));
  if(actual != nodo){
    while(arbol->hermanoDer(actual) != nodo){
      actual = arbol->hermanoDer(actual);
    }
    hermanoIzq = actual;
    etqta = arbol->etiqueta(hermanoIzq);
  }
  if(hermanoIzq == arbol->nodoNulo){
    cout << "No se encontró hermano izquerdo" << endl;
  }
  return etqta;
}

int Algoritmos::hayRepetidos(Arbol* arbol){
	int hayRep = 0;
	int posN = 0;
	int posNh = 0;
	int posRevision = 0;

	if(arbol->numNodos() > 1){
		Arbol::Nodo actual = arbol->raiz();
		Arbol::Nodo vec [arbol->numNodos()];
		vec[posN] = actual;
		Arbol::Nodo nh = arbol->nodoNulo;

		while(actual && !hayRep){
			nh = arbol->hijoMasIzq(actual);
			while(nh != arbol->nodoNulo && !hayRep){
				++posNh;
				posRevision = 0;
				while(posRevision < posNh){
					if(arbol->etiqueta(nh) == arbol->etiqueta(vec[posRevision])){
						hayRep = 1;
					}
					++posRevision;
				}

				if(!hayRep){
					vec[posNh] = nh;
					vec[posNh+1] = arbol->nodoNulo;
					nh = arbol->hermanoDer(nh);
				}
			}
			++posN;
			actual = vec[posN];
		}
	}

	return hayRep;
}

int Algoritmos::averiguarNivelesEnRecorridoPorNiveles(Arbol* arbol){
	int niveles = 0;
	if(!arbol->vacia()){
		Cola<Arbol::Nodo> cola;
		cola.encolar(arbol->raiz());
		Arbol::Nodo actual = arbol->nodoNulo;
		Arbol::Nodo nh = arbol->nodoNulo;

		while(!cola.vacia()){
			actual = cola.desencolar();
			nh = arbol->hijoMasIzq(actual);

			++niveles;
			cout << "B" <<endl;

			while(nh != arbol->nodoNulo){
				cola.encolar(nh);
				nh = arbol->hermanoDer(nh);
			}

			if(!cola.vacia()){
				if(arbol->hermanoDer(actual) == cola.frente()){
					cout << "restar1" <<endl;
					--niveles;
				}else{
					if(arbol->hermanoDer(arbol->padre(nh)) == arbol->padre(cola.frente())){
						cout << "restar2" <<endl;
						--niveles;
					}
				}
			}
		}
	}
	return niveles;
}

int Algoritmos::averiguarNivelsPreOrden(Arbol* arbol){
	int niveles = 0;
	if(!arbol->vacia()){
		averiguarNivelesPreOrdenR(arbol,arbol->raiz(),1,niveles);
	}
	return niveles;
}

void Algoritmos::averiguarNivelesPreOrdenR(Arbol* arbol,Arbol::Nodo actual,int nivAct, int& niveles){
	if(nivAct > niveles){
		niveles = nivAct;
	}

	Arbol::Nodo nh = arbol->hijoMasIzq(actual);

	while(nh != arbol->nodoArbol){
		averiguarNivelesPreOrdenR(arbol,nh,nivAct+1,niveles);
		nh = arbol->hermanoDer(nh);
	}
}

int Algoritmos::profundidadNodo(Arbol* arbol,Arbol::Nodo nodo){
	int niveles = 1;
	Arbol::Nodo act = nodo;

	while(act != arbol->raiz()){
		act = arbol->padre(act);
		++niveles;
	}

	return niveles;
}

Arbol* Algoritmos::copiarArbol(Arbol* arbol1){
    Arbol* arbol2 = new Arbol(); //Iniciamos la copia del árbol 1
    if(!arbol1->vacia()){
        Cola<Arbol::Nodo> cola1;
        Cola<Arbol::Nodo> cola2;
        cola1.encolar(arbol1->raiz());
        arbol2->ponerRaiz(arbol1->etiqueta(arbol1->raiz()));
        cola2.encolar(arbol2->raiz());
        while(!cola1.vacia()){
            Arbol::Nodo nodo1 = cola1.desencolar();
            Arbol::Nodo nodoh1 = arbol1->hijoMasIzq(nodo1);
            Arbol::Nodo nodo2 = cola2.desencolar();
            int contador = 1;
            while(nodoh1 != arbol->nodoNulo){
                cola1.encolar(nodoh1);
                cola2.encolar( arbol2->agregarHijoIesimo(nodo2, arbol1->etiqueta(nodoh1), contador) );
                nodoh1 = arbol1->hermanoDer(nodoh1);
                ++contador;
            }
        }
    }
    return arbol2;
}
void Algoritmos::listarEtiquetasDeNodo(Arbol* arbol, Arbol::Nodo nodo){
    Arbol::Nodo nodoh = arbol->hijoMasIzq(nodo);
    cout << "Los hijos del nodo son:  " <<endl;
    while(nodoh != arbol->nodoNulo){
        cout << "-> " << arbol->etiqueta(nodoh)<<endl;
        nodoh = arbol->hermanoDer(nodoh);
    }
}
void Algoritmos::listarEtiquetas_iesimoNivel(Arbol* arbol,int nivel){
    if(!arbol->vacia()){
        cout << "Los nodos del nivel " << nivel << " son:  "<<endl;
        listarEtiquetas_iesimoNivelRec(arbol, arbol->raiz(), 1, nivel);
    }
}
void Algoritmos::listarEtiquetas_iesimoNivelRec(Arbol* arbol, Arbol::Nodo nodo, int nivelActual, int nivel){
    if(nivelActual == nivel){
        cout << "-> " << arbol->etiqueta(nodo) <<endl;
    }else{
        if(nivelActual < nivel){
            Arbol::Nodo nh;
            nh = arbol->hijoMasIzq(nodo);
            while(nh!= arbol->nodoNulo){
                listarEtiquetas_iesimoNivelRec(arbol, nh, nivelActual+1, nivel);
                nh = arbol->hermanoDer(nh);
            }
        }
    }

}

void Algoritmos::borrarSubArbol(Arbol* arbol,Arbol::Nodo nodo){
    borrarSubArbolRec(arbol,nodo);
}
void Algoritmos::borrarSubArbolRec(Arbol* arbol, Arbol::Nodo nodo){
	Arbol::Nodo nh = arbol->hijoMasIzq(nodo);
	while (nh != arbol->nodoNulo){
		borrarSubArbolRec(arbol,nh);
		nh = arbol->hijoMasIzq(nodo);
	}
	arbol->borrarHoja(nodo);

}

int Algoritmos::iguales(Arbol* arbol1, Arbol* arbol2){
    int iguales = 0;
    if(arbol1->vacia() && arbol2->vacia()){
        iguales = 1;
    }else{
        if(arbol1->numNodos() == arbol2->numNodos()){
            if(arbol1->etiqueta(arbol1->raiz()) == arbol2->etiqueta(arbol2->raiz()) ){
                Cola<Arbol::Nodo> cola1;
                Cola<Arbol::Nodo> cola2;
                cola1.encolar(arbol1->raiz());
                cola2.encolar(arbol2->raiz());
                while (!cola1.vacia() && !cola2.vacia() && !iguales) {
                    Arbol::Nodo nodo1 = cola1.desencolar();
                    Arbol::Nodo nodoh1 = arbol1->hijoMasIzq(nodo1);
                    Arbol::Nodo nodo2 = cola2.desencolar();
                    Arbol::Nodo nodoh2 = arbol2->hijoMasIzq(nodo1);
                    while(nodoh1 != arbol->nodoNulo && nodoh2 != arbol->nodoNulo && !iguales){
                        if(nodoh1 == nodoh2){
                            cola1.encolar(nodoh1);
                            nodoh1 = arbol1->hermanoDer(nodoh1);
                            cola2.encolar(nodoh2);
                            nodoh2 = arbol2->hermanoDer(nodo2);
                        }else{
                            iguales = 1;
                        }
                    }
                }
            }
        }
    }
    return iguales;
}

void Algoritmos::listarArbolPreOrden(Arbol* arbol) {
  listarArbolPreOrdenRec(arbol,arbol->raiz());
}

void Algoritmos::listarArbolPreOrdenRec(Arbol* arbol, Arbol::Nodo nodoActual) {
  if(nodoActual != arbol->nodoNulo){
    cout << "-> "<< arbol->etiqueta(nodoActual) <<endl;
    Arbol::Nodo nh = arbol->hijoMasIzq(nodoActual);
    while(nh != arbol->nodoNulo){
      listarArbolPreOrdenRec(arbol,nh);
      nh = arbol->hermanoDer(nh);
    }
  }
}

void Algoritmos::listarArbolPostOrden(Arbol* arbol) {
  listarArbolPostOrdenRec(arbol,arbol->raiz());
}

void Algoritmos::listarArbolPostOrdenRec(Arbol* arbol, Arbol::Nodo nodoActual) {
  if(nodoActual != arbol->nodoNulo){
    Arbol::Nodo nh = arbol->hijoMasIzq(nodoActual);
    while(nh != arbol->nodoNulo){
      listarArbolPostOrdenRec(arbol, nh);
      nh = arbol->hermanoDer(nh);
    }
    cout << "-> " << arbol->etiqueta(nodoActual) <<endl;
  }
}

void Algoritmos::listarArbolNiveles(Arbol* arbol){
  if(!arbol->vacia()){
      Cola<Arbol::Nodo> cola;
      cola.encolar(arbol->raiz());
      cout << arbol->etiqueta(arbol->raiz()) << endl;
      while(!cola.vacia()){
          Arbol::Nodo nodo = cola.desencolar();
          Arbol::Nodo nh = arbol->hijoMasIzq(nodo);
          while(nh != arbol->nodoNulo){
              cout << "-> " << arbol->etiqueta(nh)<<endl;
              cola.encolar(nh);
              nh = arbol->hermanoDer(nh);
          }
      }
  }
}

Arbol::Nodo Algoritmos::buscarEtiquetaRetNodo(Arbol* arbol, int etqta){
  Arbol::Nodo buscado = arbol->nodoNulo;
  bool encontrado = false;
  if(!arbol->vacia()){
      Cola<Arbol::Nodo> cola;
      cola.encolar(arbol->raiz());
      while(!cola.vacia()){
          Arbol::Nodo nodo = cola.desencolar();
          Arbol::Nodo nh = arbol->hijoMasIzq(nodo);
          while(nh != arbol->nodoNulo && !encontrado){
              if(arbol->etiqueta(nh) == etqta){
                  buscado = nh;
                  encontrado = true;
              }
              cola.encolar(nh);
              nh = arbol->hermanoDer(nh);
          }
      }
  }
  return buscado;
}
