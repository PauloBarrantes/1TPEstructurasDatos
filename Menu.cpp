#include "Menu.h"
#include <iostream>
#include <string>
#include "ArbolSalPadre.h"
//#include "ArbolHMI_HD_puntHIzq_Padre.h"
//#include "ArbolHMI_HD.h"
//#include "ArbolHMI_HD_utimoPadre.h"
//#include ""
#include ""
#include "Cola.h"
using namespace std;

Menu::Menu(){
    controlador();
}
Menu::~Menu(){
    std::cout << "Hola" << '\n';
}
void Menu::controlador(){
    cout << "Bienvenido al menú de pruebas de los modelos Arbol y Cola" <<endl;
    cout<< "Escriba arbol para hacer pruebas con el arbol" <<endl;
    cout<< "Escriba cola para hacer pruebas con la cola"<<endl;
    string respuesta = "";
    do {
        cin >>respuesta;
        if( respuesta == "arbol"){
            pruebaArbol();
        }else{
            if(respuesta == "cola"){
                pruebaCola();
            }else{
                std::cerr << "No coincide con ninguna palabra" << '\n';
            }
        }
    } while(respuesta != "arbol" && respuesta !="cola");


}

void Menu::pruebaArbol(){
    cout << "Hola!, te guiaré en la prueba del modelo arbol" <<endl;
    instruccionesArbol();
    do {
        string instruccion;
        cin >> instruccion;
        cout <<instruccion <<endl;
        if(instruccion == "ponerraiz"){
            ponerRaiz();
        }else{
            if(instruccion == "agregarhijoiesimo"){
                agregarHijoIesimo();
            }else{

            }
        }

    } while(1);


}
void Menu::instruccionesArbol(){
    cout << "------ Instrucciones ------" <<endl;
    cout << "Escriba help para ver las instrucciones de nuevo" <<endl;
    cout << "Escriba iniciar" <<endl;
    cout << "Escriba destruir" <<endl;
    cout << "Escriba vaciar" <<endl;
    cout << "Escriba vacia" <<endl;

    cout << "Escriba raiz para ver la etiqueta que tiene la raiz " <<endl;
    cout << "Escriba hijomasizq " <<endl;
    cout << "Escriba hermanoder para " <<endl;
    cout << "Escriba padre para " <<endl;
    cout << "Escriba eshoja para " <<endl;
    cout << "Escriba etiqueta para " <<endl;
    cout << "Escriba numnodos para " <<endl;
    cout << "Escriba numhijos para " <<endl;
    cout << "Escriba modificaretiqueta para " <<endl;
    cout << "Escriba agregarhijoiesimo para " <<endl;
    cout << "Escriba borrarhoja para " <<endl;
    cout << "Escriba ponerraiz para " <<endl;

}
void Menu::iniciar(){
    arbol1 = new Arbol();
}
void Menu::destruir(){

    delete arbol1;
}
void Menu::vaciar(){

    arbol1.vaciar();
}
void Menu::vacia(){

}
void Menu::vaciar(){

}
void Menu::raiz(){

}
void Menu::hijoMasIzq(){

}
void Menu::hermanoDer(){

}
void Menu::padre(){

}
void Menu::esHoja(){

}
void Menu::etiqueta(){

}
void Menu::numNodos(){

}
void Menu::numHijos(){

}
void Menu::modificarEtiq(){

}
void Menu::agregarHijoIesimo(){
    int etiqueta = 0;
    int padre = 0;
    int posicion = 0;
    cout << "Digite el padre al que le vamos a agregar un hijo" <<endl;
    cin >> padre;
    cout << "Digite la etiqueta que vamos a agregar" <<endl;
    cin >> etiqueta;
    cout << "Digite la posicion donde vamos a agregar el hijo" <<endl;
    cin >> posicion;

    arbol1.agregarHijoIesimo(arbol1.buscarNodo(padre),etiqueta,posicion)
    arbol1.imprimir();

}
void Menu::borrarHoja(){

}
void Menu::ponerRaiz(){
    int etiqueta = 0;
    cout << "Digite la etiqueta que desea colocar como raíz" <<endl;
    cin >> etiqueta;

    arbol1.ponerRaiz(etiqueta);
    arbol1.imprimir();

}
void Menu::imprimir(){

}

void Menu::pruebaCola(){
    cout << "Hola!, te guiaré en la prueba del modelo cola" <<endl;
    cout << "------ Instrucciones ------" <<endl;
    instruccionesCola();
}
void Menu::instruccionesCola(){
    cout << "------ Instrucciones ------" <<endl;
    cout << "Escriba help para ver las instrucciones de nuevo" <<endl;
    cout << "Escriba -n- para " <<endl;
    cout << "Escriba -n- para " <<endl;
    cout << "Escriba -n- para " <<endl;
    cout << "Escriba -n- para " <<endl;
    cout << "Escriba -n- para " <<endl;
    cout << "Escriba -n- para " <<endl;
}
