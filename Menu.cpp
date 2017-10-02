#include "Menu.h"
#include <iostream>

using namespace std;

Menu::Menu(){
    controlador();
}
Menu::~Menu(){

}
void Menu::controlador(){
    cout << "Bienvenido al menú de pruebas de los modelos Arbol y Cola" <<endl;
    cout<< "Presiona 1 para hacer pruebas con el arbol" <<endl;
    cout<< "Presiona 2 para hacer pruebas con la cola"<<endl;
    do {
        int res = 0;
        cin >>res;
        if(res == 1){
            pruebaArbol();
        }else{
            if(res == 2){
                pruebaCola();
            }else{
                std::cerr << "Número Invalido" << '\n';
            }
        }
    } while(res != 1 && res !=2);


}

void Menu::pruebaArbol(){
    cout << "Hola!, te guiare en la prueba del modelo arbol" <<endl
    cout << "------ Instrucciones ------" <<endl
}

void Menu::pruebaCola(){
    cout << "Hola!, te guiare en la prueba del modelo cola" <<endl
    cout << "------ Instrucciones ------" <<endl
}
