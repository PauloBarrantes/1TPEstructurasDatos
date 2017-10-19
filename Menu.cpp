#include "Menu.h"
#include <iostream>
#include <string>

using namespace std;

Menu::Menu(){
	arbol1 = 0;
	arbol2 = 0;

	cola1 = 0;
	algoritmos = 0;

    controlador();
}
Menu::~Menu(){
    if(arbol1 != 0){
        delete arbol1;
    }
    if(arbol2 != 0){
        delete arbol2;
    }
    if(cola1 != 0){
        delete cola1;
    }
    if(algoritmos != 0){
        delete algoritmos;
    }
}
void Menu::controlador(){

    string respuesta = "";
    do {
        cout << "Bienvenido al menú de pruebas de los modelos Arbol y Cola" <<endl;
        cout<< "Escriba arbol para hacer pruebas con el arbol" <<endl;
        cout<< "Escriba cola para hacer pruebas con la cola"<<endl;
        cout<< "Escriba algoritmos para hacer pruebas con los algoritmos de los árboles"<<endl;
        cout<< "Escriba salir para cuando desee acabar con las pruebas"<<endl;

        cin >>respuesta;
        if( respuesta == "arbol"){
            pruebaArbol();
        }else{
            if(respuesta == "cola"){
                pruebaCola();
            }else{
				if(respuesta == "algoritmos"){
					pruebaAlgoritmos();
				}else{
					if(respuesta != "salir"){
						std::cerr << "No coincide con ninguna palabra" << '\n';
					}
				}
            }
        }
    } while(respuesta != "salir");


}

void Menu::pruebaArbol(){
    cout << "Hola!, te guiaré en la prueba del modelo arbol" <<endl;
    string instruccion;
    do {
        instruccionesArbol();
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
                                                                    }else{
                                                                        if(instruccion == "imprimir"){
                                                                            imprimir();
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
        }
    } while(instruccion != "salir");


}
void Menu::instruccionesArbol(){
    cout << "-------------- Instrucciones --------------" <<endl;
    cout << "Escriba help para ver las instrucciones de nuevo" <<endl;
    cout << "Escriba salir para volver al menú principal" <<endl;
    cout << "Escriba iniciar" <<endl;
    cout << "Escriba destruir" <<endl;
    cout << "Escriba vaciar" <<endl;
    cout << "Escriba vacia" <<endl;
    cout << "Escriba imprimir para mostrar el árbol " <<endl;
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
	cout << "Escriba imprimir para " <<endl;

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
    int nodo = 0;
    cout << "Digite al nodo que desea ver al hijo más izquierdo" <<endl;
    cin >> nodo;
    cout << endl;
    cout << "El hijo más izquierdo de " << nodo << " es " << arbol1->etiqueta(arbol1->hijoMasIzq(arbol1->buscarNodo(nodo)))<<endl;
}
void Menu::hermanoDer(){
    int nodo = 0;
    cout << "Digite al nodo que desea ver al hermano derecho" <<endl;
    cin >> nodo;
    cout << endl;
    cout << "El hermano derecho de " << nodo << " es " << arbol1->etiqueta(arbol1->hermanoDer(arbol1->buscarNodo(nodo)))<<endl;
}
void Menu::padre(){
    int nodo = 0;
    cout << "Digite el nodo que desea buscarle el padre";
    cin >> nodo;
    cout << endl;
    cout<<"El padre de" << nodo << " es:" << arbol1->padre(arbol1->buscarNodo(nodo));
}
void Menu::esHoja(){
    int nodo = 0;
    cout << "Digite el nodo que desea ver si es una hoja" <<endl;
    cin >>nodo;
    cout << endl;

    if(arbol1->esHoja(arbol1->buscarNodo(nodo))){
        cout << "El nodo " << nodo << "es una hoja" <<endl;
    }else{
        cout << "El nodo" << nodo << "no es una hoja" <<endl;
    }

}
void Menu::numNodos(){
    cout << "El árbol tiene  " << arbol1->numNodos() << " nodos"<<endl;
}
void Menu::numHijos(){
    int nodo = 0;
    cout << "Digite el nodo de quien desea ver la cantidad de hijos que tiene" <<endl;
    cin >> nodo;
    cout << endl;

    cout << "El " <<nodo << " tiene  " << arbol1->numHijos(arbol1->buscarNodo(nodo)) << " hijos"<<endl;
}
void Menu::modificarEtiq(){
    int nodo = 0;
    int etiqueta =0;
    cout << "Digite al nodo que desea modificarle la etiqueta" <<endl;
    cin >> nodo;
    cout << endl;
    cout << "Digite la nueva etiqueta de este nodo (Para llamar a este nuevo nodo, tendrá que usar esta nueva etiqueta)" <<endl;
    cin >> etiqueta;
    cout << endl;

    arbol1->modificarEtiq(arbol1->buscarNodo(nodo), etiqueta);
    cout <<"Hemos cambiado la etiqueta satisfactoriamente" <<endl;


}
void Menu::agregarHijoIesimo(){
    int etiqueta = 0;
    int padre = 0;
    int posicion = 0;
    cout << "Digite el PADRE al que le vamos a agregar un hijo" <<endl;
    cin >> padre;
    cout << endl;

    cout << "Digite el nuevo nodo que vamos a agregar" <<endl;
    cin >> etiqueta;
    cout << endl;

    cout << "Digite la posición donde vamos a agregar al hijo" <<endl;
    cin >> posicion;
    cout << endl;



    arbol1->agregarHijoIesimo(arbol1->buscarNodo(padre),etiqueta,posicion);
    cout << "Se ha agregado satisfactoriamente" <<endl;
}
void Menu::borrarHoja(){
    int nodo = 0;
    cout<< "Digite el nodo hoja que desea borrar" <<endl;
    cin >> nodo;
    cout << endl;

    arbol1->borrarHoja(arbol1->buscarNodo(nodo));
    cout << "Hoja borrada satisfactoriamente" <<endl;
}
void Menu::ponerRaiz(){
    int etiqueta = 0;
    cout << "Digite el nodo que desea colocar como raíz" <<endl;
    cin >> etiqueta;
    cout << endl;

    arbol1->ponerRaiz(etiqueta);
    cout << "Raíz colocada satisfactoriamente" <<endl;
}
void Menu::imprimir(){
    arbol1->imprimir(cout);
}

/// Métodos de Prueba de la Cola ///
void Menu::pruebaCola(){
    cout << "Hola!, te guiaré en la prueba del modelo cola" <<endl;

    string instruccion;

    do {
        instruccionesCola();
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
    cola1 = new Cola <int>();
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


/// Métodos de Prueba de los algoritmos ///
void Menu::llenarArbol1(){
    arbol1 = new Arbol();

	arbol1->ponerRaiz(06);
    arbol1->agregarHijoIesimo(arbol1->buscarNodo( 6),  4,1);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo( 6), 21,2);
    arbol1->agregarHijoIesimo(arbol1->buscarNodo(21), 56,1);
    arbol1->agregarHijoIesimo(arbol1->buscarNodo(56), 14,1);
    arbol1->agregarHijoIesimo(arbol1->buscarNodo(21), 98,1);
    arbol1->agregarHijoIesimo(arbol1->buscarNodo( 6), 18,3);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo( 4),  2,1);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo( 4),  5,2);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo(18), 20,1);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo( 5),  7,1);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo( 5), 91,2);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo(91), 40,1);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo(91), 41,2);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo(41), 30,1);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo(41), 31,2);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo(41), 32,3);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo(14),  1,1);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo(14), 23,1);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo( 1), 75,1);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo( 1), 78,2);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo(78), 70,1);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo(23), 51,1);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo(20), 60,1);
	arbol1->agregarHijoIesimo(arbol1->buscarNodo(20), 32,2);
    arbol1->imprimir(cout);
}

void Menu::llenarArbol2(){
    arbol2 = new Arbol();
    arbol2->ponerRaiz(10);
    arbol2->agregarHijoIesimo(arbol2->buscarNodo(10), 35,1);
    arbol2->agregarHijoIesimo(arbol2->buscarNodo(10), 20,2);
    arbol2->agregarHijoIesimo(arbol2->buscarNodo(10), 18,3);
    arbol2->agregarHijoIesimo(arbol2->buscarNodo(35),  4,1);
    arbol2->agregarHijoIesimo(arbol2->buscarNodo( 4),  9,1);
    arbol2->agregarHijoIesimo(arbol2->buscarNodo(20), 65,1);
	arbol2->agregarHijoIesimo(arbol2->buscarNodo(65), 12,1);
	arbol2->agregarHijoIesimo(arbol2->buscarNodo(18), 76,1);
	arbol2->agregarHijoIesimo(arbol2->buscarNodo(76), 58,1);
	arbol2->agregarHijoIesimo(arbol2->buscarNodo(76), 26,2);
	arbol2->agregarHijoIesimo(arbol2->buscarNodo(76), 24,2);


}
void Menu::pruebaAlgoritmos(){
    cout << "Hola!, te guiaré en la prueba de los algoritmos del modelo árbol" <<endl;
    if(arbol1 == 0){
        llenarArbol1();
    }
    if(arbol2 == 0){
        llenarArbol2();
    }
    instruccionesAlgoritmos();
    int instruccion;

    do {
        cin >> instruccion;
        if(instruccion == 1){
            hermanoIzquierdo();
        }else{
            if(instruccion == 2){
                hayRepetidos();
            }else{
                if(instruccion == 3){
                    averiguarNivelesEnRecorridoPorNiveles();
                }else{
                    if(instruccion == 4){
                        averiguarNivelsPreOrden();
                    }else{
                        if(instruccion == 5){
                            profundidadNodo();
                        }else{
                            if(instruccion == 6){
                                listarEtiquetas_iesimoNivel();
                            }else{
                                if(instruccion == 7){
                                    listarEtiquetasDeNodo();
                                }else{
                                    if(instruccion == 8){
                                        borrarSubArbol();
                                    }else{
                                        if(instruccion == 9){
                                            copiarArbol();
                                        }else{
                                            if(instruccion == 10){
                                                iguales();
                                            }else{
                                                if(instruccion == 11){
                                                    listarArbolPreorden();
                                                }else{
                                                    if(instruccion == 12){
                                                        listarArbolPostOrden();
                                                    }else{
                                                        if(instruccion == 13){
                                                            listarArbolNiveles();
                                                        }else{
                                                            if(instruccion == 14){
                                                                buscarEtiquetaRetNodo();
                                                            }else{
                                                                if(instruccion == 0){
                                                                    instruccionesAlgoritmos();
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


    } while(instruccion != 15);
}
void Menu::instruccionesAlgoritmos(){
    cout << "-------------- Instrucciones --------------" <<endl;
    cout << "Escriba (0) para desplegar la lista de instrucciones nuevamente" <<endl;
    cout << "Escriba (1) para averiguar el hermano izquierdo de un nodo" <<endl;
    cout << "Escriba (2) para averiguar si el árbol tiene etiquetas repetidas" <<endl;
    cout << "Escriba (3) para averiguar cuántos niveles tiene el árbol haciendo un recorrido por niveles" <<endl;
    cout << "Escriba (4) para averiguar cuántos niveles tiene el árbol haciendo un recorridoen pre-orden " <<endl;
    cout << "Escriba (5) para averiguar la profundidad del nodo n" <<endl;
    cout << "Escriba (6) para listar las etiquetas del i- ́esimo nivel del  ́arbol" <<endl;
    cout << "Escriba (7) para listar las etiquetas	de los hijos del nodo n" <<endl;
    cout << "Escriba (8) para borrar el sub-árbol que se genera a partir del nodo n " <<endl;
    cout << "Escriba (9) para copiar un árbol " <<endl;
    cout << "Escriba (10) para averiguar si dos árboles son iguales" <<endl;
    cout << "Escriba (11) para listar el árbol en pre-orden" <<endl;
    cout << "Escriba (12) para listar el árbol en post-orden " <<endl;
    cout << "Escriba (13) para listar el árbol por niveles " <<endl;
    cout << "Escriba (14) para buscar una etiqueta y devolver el nodo correspondiente" <<endl;
    cout << "Escriba (15) para volver al menú principal " <<endl;
}

void Menu::hermanoIzquierdo(){
    int nodo = 0;
    cout << "Digite el nodo que desea averiguar su hijo izquierdo" << endl;
    cin >> nodo;
		cout << "El hermano izquierdo de " << nodo << " es: "<< algoritmos->hermanoIzquierdo(arbol1,arbol1->buscarNodo(nodo)) << endl;
}
void Menu::hayRepetidos(){
    if(algoritmos->hayRepetidos(arbol1)){
        cout << "En el árbol hay repetidos" <<endl;
    }else{
        cout<< "En el árbol no hay repetidos"<<endl;
    }

}
void Menu::averiguarNivelesEnRecorridoPorNiveles(){
    cout << "La cantidad de niveles del árbol es: " << algoritmos->averiguarNivelesEnRecorridoPorNiveles(arbol1)<<endl;

}
void Menu::averiguarNivelsPreOrden(){
    cout << "La cantidad de niveles del árbol es: " << algoritmos->averiguarNivelsPreOrden(arbol1)<<endl;

}
void Menu::profundidadNodo(){
    int nodo = 0;
    int profundidad =0;
    cout << "Digite el nodo al que le desea averiguar la profundidad" <<endl;
    cin >>nodo;
    cout<<"La profundidad del nodo es: "<<endl;
    profundidad = algoritmos->profundidadNodo(arbol1, arbol1->buscarNodo(nodo));
    cout << " " <<profundidad <<endl;
}
void Menu::listarEtiquetas_iesimoNivel(){
    int nivel = 0;
    cout << "Digite el nivel que desea desplegar " <<endl;
    cin >> nivel;
    algoritmos->listarEtiquetas_iesimoNivel(arbol1, nivel);
}
void Menu::listarEtiquetasDeNodo(){
    int nodo = 0;
    cout << "Digite el nodo que desea listar todas las etiquetas de sus hijos" <<endl;
    cin >>nodo;
    algoritmos->listarEtiquetasDeNodo(arbol1, arbol1->buscarNodo(nodo));
}
void Menu::borrarSubArbol(){
    int nodo = 0;
    cout << "Digite el nodo donde desea borrar el subArbol" <<endl;
    cin >>nodo;
    algoritmos->borrarSubArbol(arbol1, arbol1->buscarNodo(nodo));
    cout<< "El subárbol se ha borrado satisfactoriamente" <<endl;
}
void Menu::copiarArbol(){
    if(arbol2 == 0){ //No está inicializado
        arbol2 = new Arbol();
    }else{
        delete arbol1;
    }
    arbol1 = algoritmos->copiarArbol(arbol2);
    cout << "El árbol ha sido copiado satisfactoriamente"<<endl;
}
void Menu::iguales(){
    if (algoritmos->iguales(arbol1,arbol2)){
        cout << "Los árboles son iguales" <<endl;
    }else{
        cout << "Los árboles no son iguales" <<endl;
    }
}

void Menu::listarArbolPreorden(){
    algoritmos->listarArbolPreOrden(arbol1);
}
void Menu::listarArbolPostOrden(){
    algoritmos->listarArbolPostOrden(arbol1);
}
void Menu::listarArbolNiveles(){
    algoritmos->listarArbolNiveles(arbol1);

}
void Menu::buscarEtiquetaRetNodo(){
    int etiqueta = 0;
    cout << "Digite el nodo que desea listar todas las etiquetas de sus hijos" <<endl;
    cin >>etiqueta;
		arbol1->etiqueta(algoritmos->buscarEtiquetaRetNodo(arbol1, etiqueta));
    cout << "Se encontró el nodo correspondiente a la etiqueta: "<<etiqueta<< endl;
}
