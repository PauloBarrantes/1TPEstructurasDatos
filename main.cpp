#include <iostream>
#include "Cola.h"
using namespace std;

int main(){

    Cola instancia(10);
    for (int i = 0; i < 5; i++) {
        instancia.encolar(i);
    }
    std::cout << "Desencolamos al: " << instancia.desencolar() << endl;
    std::cout << "Desencolamos al: " << instancia.desencolar() << endl;
    std::cout << "Desencolamos al: " << instancia.desencolar() << endl;
    instancia.encolar(21241);
    std::cout << "Desencolamos al: " << instancia.desencolar() << endl;
    std::cout << "Desencolamos al: " << instancia.desencolar() << endl;
    std::cout << "Desencolamos al: " << instancia.desencolar() << endl;
    std::cout << "Desencolamos al: " << instancia.desencolar() << endl;
    std::cout << "Desencolamos al: " << instancia.desencolar() << endl;

}