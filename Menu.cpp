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
    cout << "hola" <<endl;
    do {
        cin >>respuesta;
        if( respuesta == "arbol"){
            pruebaArbol();
        }else{
            if(respuesta == "cola"){
                pruebaCola();
            }else{
                std::cerr << "Número Invalido" << '\n';
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

        if()

    } while(1);


}
void Menu::instruccionesArbol(){
    cout << "------ Instrucciones ------" <<endl;
    cout << "Escriba help para ver las instrucciones de nuevo" <<endl;
    cout << "Escriba -n- para " <<endl;
    cout << "Escriba -n- para " <<endl;
    cout << "Escriba -n- para " <<endl;
    cout << "Escriba -n- para " <<endl;
    cout << "Escriba -n- para " <<endl;
    cout << "Escriba -n- para " <<endl;
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
