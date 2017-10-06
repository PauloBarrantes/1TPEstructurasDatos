#include "Menu.h"
#include <iostream>
#include <string>

using namespace std;

Menu::Menu(){
    controlador();
}
Menu::~Menu(){
}
void Menu::controlador(){
    cout << "Bienvenido al menú de pruebas de los modelos Arbol y Cola" <<endl;
    cout<< "Escriba arbol para hacer pruebas con el arbol" <<endl;
    cout<< "Escriba cola para hacer pruebas con la cola"<<endl;
    cout<< "Escriba salir para cuando desee acabar con las pruebas"<<endl;

    string respuesta = "";
    do {
        cin >>respuesta;
        if( respuesta == "arbol"){
            pruebaArbol();
        }else{
            if(respuesta == "cola"){
                pruebaCola();
            }else{
                if(respuesta != "salir"){
                    std::cerr << "No coincide con ninguna palabra" << '\n';
                }
            }
        }
    } while(respuesta != "salir");


}

void Menu::pruebaArbol(){
    cout << "Hola!, te guiaré en la prueba del modelo arbol" <<endl;
    instruccionesArbol();
    string instruccion;
    do {
        cin >> instruccion;

        if(instruccion == "iniciar"){
            iniciar();
        }else{
            if(instruccion == "destruir"){
                destruir();
            }else{
                if(instruccion == "vaciar"){
                    vaciar();
                }else{
                    if(instruccion == "vacia"){
                        vacia();
                    }else{
                        if(instruccion == "raiz"){
                            raiz();
                        }else{
                            if(instruccion == "hijomasizq"){
                                hijoMasIzq();
                            }else{
                                if(instruccion == "hermanoder"){
                                    hermanoDer();
                                }else{
                                    if(instruccion == "padre"){
                                        padre();
                                    }else{
                                        if(instruccion == "eshoja"){
                                            esHoja();
                                        }else{
                                            if(instruccion == "numnodos"){
                                                numNodos();
                                            }else{
                                                if(instruccion == "numhijos"){
                                                    numHijos();
                                                }else{
                                                    if(instruccion == "modificaretiqueta"){
                                                        modificarEtiq();
                                                    }else{
                                                        if(instruccion == "agregarhijoiesimo"){
                                                            agregarHijoIesimo();
                                                        }else{
                                                            if(instruccion == "borrarhoja"){
                                                                borrarHoja();
                                                            }else{
                                                                if( instruccion== "ponerraiz"){
                                                                    ponerRaiz();
                                                                }else{
                                                                    if(instruccion == "help"){
                                                                        instruccionesArbol();
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } while(instruccion != "salir");


}
void Menu::instruccionesArbol(){
    cout << "-------------- Instrucciones --------------" <<endl;
    cout << "Escriba help para ver las instrucciones de nuevo" <<endl;
    cout << "Escriba salir para volver al menú principals" <<endl;
    cout << "Escriba iniciar" <<endl;
    cout << "Escriba destruir" <<endl;
    cout << "Escriba vaciar" <<endl;
    cout << "Escriba vacia" <<endl;

    cout << "Escriba raiz para ver la etiqueta que tiene la raiz " <<endl;
    cout << "Escriba hijomasizq " <<endl;
    cout << "Escriba hermanoder para " <<endl;
    cout << "Escriba padre para " <<endl;
    cout << "Escriba eshoja para " <<endl;
    cout << "Escriba numnodos para " <<endl;
    cout << "Escriba numhijos para " <<endl;
    cout << "Escriba modificaretiqueta para " <<endl;
    cout << "Escriba agregarhijoiesimo para " <<endl;
    cout << "Escriba borrarhoja para " <<endl;
    cout << "Escriba ponerraiz para " <<endl;

}
void Menu::iniciar(){
    arbol1 = new Arbol();
    cout<< "El árbol se ha inicializado satisfactoriamente" <<endl;
}
void Menu::destruir(){

    delete arbol1;
    cout << "El arbol se ha destruido satisfactoriamente" <<endl;
}
void Menu::vaciar(){
    arbol1->vaciar();
    cout << "El árbol se ha vaciado" <<endl;
}
void Menu::vacia(){
    if(arbol1->vacia()){
        cout << "El árbol se encuentra vacío" <<endl;
    }else{
        cout << "El árbol no está vacío" <<endl;
    }
}
void Menu::raiz(){
    cout << "La raiz de el árbol es: " << arbol1->raiz() <<endl;
}
void Menu::hijoMasIzq(){

}
void Menu::hermanoDer(){

}
void Menu::padre(){
    int nodo = 0;
    cout << "El padre de la etiqueta: ";
    cin >> nodo;
    cout << endl;
    cout<<"El padre de" << nodo << " es:" << arbol1->padre(arbol1->buscarNodo(nodo));
}
void Menu::esHoja(){
    int nodo = 0;
    cout << "Digite la etiqueta que deseas ver si es una hoja" <<endl;
    cin >>nodo;


}
void Menu::numNodos(){
    cout << "El árbol tiene  " << arbol1->numNodos() << " nodos";
}
void Menu::numHijos(){
    int nodo = 0;
    cout << "Digite la etiqueta de quien desea ver la cantidad de hijos que tiene" <<endl;
    cin >> nodo;
    cout << "El " <<nodo << " tiene  " << arbol1->numHijos(arbol1->buscarNodo(nodo)) << " hijos";
}
void Menu::modificarEtiq(){
    int nodo = 0;
    cout << "Digite al";
}
void Menu::agregarHijoIesimo(){
    int etiqueta = 0;
    int padre = 0;
    int posicion = 0;
    cout << "Digite el PADRE al que le vamos a agregar un hijo" <<endl;
    cin >> padre;
    cout << "Digite la etiqueta que vamos a agregar" <<endl;
    cin >> etiqueta;
    cout << "Digite la posición donde vamos a agregar el hijo" <<endl;
    cin >> posicion;

    arbol1->agregarHijoIesimo(arbol1->buscarNodo(padre),etiqueta,posicion);
    arbol1->imprimir(cout);

}
void Menu::borrarHoja(){
    int nodo = 0;
    cout<< "Digite la etiqueta que desea borrar" <<endl;
    cin >> nodo;

    arbol1->borrarHoja(arbol1->buscarNodo(nodo));
    cout << "Hoja borrada satisfactoriamente" <<endl;
}
void Menu::ponerRaiz(){
    int etiqueta = 0;
    cout << "Digite la etiqueta que desea colocar como raíz" <<endl;
    cin >> etiqueta;

    arbol1->ponerRaiz(etiqueta);
}
void Menu::imprimir(){
    arbol1->imprimir(cout);
}

/// Métodos de Prueba de la Cola ///
void Menu::pruebaCola(){
    cout << "Hola!, te guiaré en la prueba del modelo cola" <<endl;
    instruccionesCola();
    string instruccion;

    do {
        cin >> instruccion;
        if(instruccion == "iniciar"){
            iniciarC();
        }else{
            if(instruccion == "destruir"){
                destruirC();
            }else{
                if(instruccion == "encolar"){
                    encolarC();
                }else{
                    if(instruccion == "frente"){
                        frenteC();
                    }else{
                        if(instruccion == "vaciar"){
                            vaciarC();
                        }else{
                            if(instruccion == "vacia"){
                                vaciaC();
                            }else{
                                if(instruccion == "desencolar"){
                                    desencolarC();
                                }else{
                                    if(instruccion == "help"){
                                        instruccionesCola();
                                    }else{
                                        if(instruccion == "numelem"){
                                            numElementosC();
                                        }else{
                                            if(instruccion == "ultimo"){
                                                ultimoC();
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }


    } while(instruccion != "salir");
}
void Menu::instruccionesCola(){
    cout << "-------------- Instrucciones --------------" <<endl;
    cout << "Escriba help para ver las instrucciones de nuevo" <<endl;
    cout << "Escriba salir para salir al menú principal " <<endl;
    cout << "Escriba iniciar para inicializar la cola" <<endl;
    cout << "Escriba destruir para destruir la cola " <<endl;
    cout << "Escriba vaciar para vaciar la cola" <<endl;
    cout << "Escriba vacia para ver si la cola está vacía" <<endl;
    cout << "Escriba encolar para encolar un número" <<endl;
    cout << "Escriba desencolar para un número " <<endl;
    cout << "Escriba numElem para ver la cantidad de elementos que tiene la cola " <<endl;
    cout << "Escriba frente para ver el número que está de primero en la cola " <<endl;
    cout << "Escriba ultimo para ver el número que está de último en la cola " <<endl;

}
void Menu::iniciarC(){
    cola1 = new Cola();
    cout << "La cola ha sido inicializada " <<endl;
}
void Menu::destruirC(){
    delete cola1;
    cout <<"La cola ha sido destruida satisfactoriamente" <<endl;
}
void Menu::vaciarC(){
    cola1->vaciar();
    cout<< "La cola se ha vaciado satisfactoriamente" <<endl;
}
void Menu::vaciaC(){
    if(cola1->vacia()){
        cout << "La cola está vacía" <<endl;
    }else{
        cout << "La cola no está vacía"<<endl;
    }
}
void Menu::encolarC(){
    int numero =0;
    cout<< "Digite el número que desea encolar" <<endl;
    cin >> numero;
    cola1->encolar(numero);
}
void Menu::desencolarC(){
    cout << "Desencolamos" <<endl;
    cola1->desencolar();
}
void Menu::numElementosC(){
    cout <<"El número de elementos en la cola es: " << cola1->numElementos() <<endl;
}
void Menu::frenteC(){
    cout <<"El frente de la cola es: " << cola1->frente() <<endl;
}
void Menu::ultimoC(){
    cout << "El último de la cola es: " <<cola1->ultimo() << endl;
}
