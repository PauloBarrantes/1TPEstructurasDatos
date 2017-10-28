#include "Test.h"
#include <iostream>
#define N1 1000
#define N2 10000
#define N3 40000
#define N4 100000
using namespace std;

        Test::Test(){
            //árbolPino
            arbolN1A1 = genArbol->arbolPino(N1);
            arbolN2A1 = genArbol->arbolPino(N2);
            arbolN3A1 = genArbol->arbolPino(N3);
            arbolN4A1 = genArbol->arbolPino(N4);
            //árbolArbusto
            arbolN1A2 = genArbol->arbolArbusto(N1):
            arbolN2A2 = genArbol->arbolArbusto(N2):
            arbolN3A2 = genArbol->arbolArbusto(N3):
            arbolN4A2 = genArbol->arbolArbusto(N4):
            //árbolBinario
            arbolN1A3 = genArbol->arbolBinario(N1):
            arbolN2A3 = genArbol->arbolBinario(N2):
            arbolN3A3 = genArbol->arbolBinario(N3):
            arbolN4A3 = genArbol->arbolBinario(N4):
            //árbolPromedio
            arbolN1A4 = genArbol->arbolPromedio(N1):
            arbolN2A4 = genArbol->arbolPromedio(N2):
            arbolN3A4 = genArbol->arbolPromedio(N3):
            arbolN4A4 = genArbol->arbolPromedio(N4):

        }
        Test::~Test(){
            delete arbolN1;
            delete arbolN2;
            delete arbolN3;
            delete arbolN4;
        }
        //Debería enviar a probar el árbol con sus 4 tamaños, y cada uno de sus OB y algoritmos.
        Test::testGeneral(){
            // INICIO ARBOL PINO //
            //Pruebas de los operadores básicos
            cout << "Prueba de los árboles pino con el operador básico 1 - ÁrbolSalPadre" <<endl;
            cout << "N1" << endl
            testOpBasico1(arbolN1A1); //Tiempo de ejecución del operadorBásico1 con n1
            cout << "N2" <<endl;
            testOpBasico1(arbolN2A1);//Tiempo de ejecución del operadorBásico1 con n2
            cout << "N3"<<endl;
            testOpBasico1(arbolN3A1);//Tiempo de ejecución del operadorBásico1 con n3
            cout << "N4" <<endl;
            testOpBasico1(arbolN4A1);//Tiempo de ejecución del operadorBásico1 con n4

            // ----- OperadorBásico 2 -- ArbolPino //
            cout << "Prueba de los árboles pino con el operador básico 2 - ÁrbolSalPadre" <<endl;
            cout << "N1" << endl
            testOpBasico2(arbolN1A1); //Tiempo de ejecución del operadorBásico2 con n1
            cout << "N2" <<endl;
            testOpBasico2(arbolN2A1);//Tiempo de ejecución del operadorBásico2 con n2
            cout << "N3"<<endl;
            testOpBasico2(arbolN3A1);//Tiempo de ejecución del operadorBásico2 con n3
            cout << "N4" <<endl;
            testOpBasico2(arbolN4A1);//Tiempo de ejecución del operadorBásico2 con n4
            // ----- OperadorBásico 3 -- ArbolPino //
            cout << "Prueba de los árboles pino con el operador básico 3 - ÁrbolSalPadre" <<endl;
            cout << "N1" << endl
            testOpBasico3(arbolN1A1); //Tiempo de ejecución del operadorBásico3 con n1
            cout << "N2" <<endl;
            testOpBasico3(arbolN2A1);//Tiempo de ejecución del operadorBásico3 con n2
            cout << "N3"<<endl;
            testOpBasico3(arbolN3A1);//Tiempo de ejecución del operadorBásico3 con n3
            cout << "N4" <<endl;
            testOpBasico3(arbolN4A1);//Tiempo de ejecución del operadorBásico3 con n4

            //Test de Algoritmos
            // ----- Algorithm 1 --- ArbolPino //
            cout << "Prueba de los árboles pino con el algoritmo 1 - ÁrbolSalPadre" <<endl;
            cout << "N1" << endl
            testAlgoritmo1(arbolN1A1); //Tiempo de ejecución del operadorBásico3 con n1
            cout << "N2" <<endl;
            testAlgoritmo1(arbolN2A1);//Tiempo de ejecución del operadorBásico3 con n2
            cout << "N3"<<endl;
            testAlgoritmo1(arbolN3A1);//Tiempo de ejecución del operadorBásico3 con n3
            cout << "N4" <<endl;
            testAlgoritmo1(arbolN4A1);//Tiempo de ejecución del operadorBásico3 con n4
            // ----- Algorithm 2 --- ArbolPino //
            cout << "Prueba de los árboles pino con el algoritmo 2 - ÁrbolSalPadre" <<endl;
            cout << "N1" << endl
            testAlgoritmo2(arbolN1A1); //Tiempo de ejecución del operadorBásico3 con n1
            cout << "N2" <<endl;
            testAlgoritmo2(arbolN2A1);//Tiempo de ejecución del operadorBásico3 con n2
            cout << "N3"<<endl;
            testAlgoritmo2(arbolN3A1);//Tiempo de ejecución del operadorBásico3 con n3
            cout << "N4" <<endl;
            testAlgoritmo2(arbolN4A1);//Tiempo de ejecución del operadorBásico3 con n4
            // ----- Algorithm 3 --- ArbolPino //
            cout << "Prueba de los árboles pino con el algoritmo 3 - ÁrbolSalPadre" <<endl;
            cout << "N1" << endl
            testAlgoritmo3(arbolN1A1); //Tiempo de ejecución del operadorBásico3 con n1
            cout << "N2" <<endl;
            testAlgoritmo3(arbolN2A1);//Tiempo de ejecución del operadorBásico3 con n2
            cout << "N3"<<endl;
            testAlgoritmo3(arbolN3A1);//Tiempo de ejecución del operadorBásico3 con n3
            cout << "N4" <<endl;
            testAlgoritmo3(arbolN4A1);//Tiempo de ejecución del operadorBásico3 con n4
            // ----- Algorithm 4 --- ArbolPino //
            cout << "Prueba de los árboles pino con el algoritmo 4 - ÁrbolSalPadre" <<endl;
            cout << "N1" << endl
            testAlgoritmo4(arbolN1A1); //Tiempo de ejecución del operadorBásico3 con n1
            cout << "N2" <<endl;
            testAlgoritmo4(arbolN2A1);//Tiempo de ejecución del operadorBásico3 con n2
            cout << "N3"<<endl;
            testAlgoritmo4(arbolN3A1);//Tiempo de ejecución del operadorBásico3 con n3
            cout << "N4" <<endl;
            testAlgoritmo4(arbolN4A1);//Tiempo de ejecución del operadorBásico3 con n4

            /// INICIO DEL ÁRBOL ARBUSTO
            //Pruebas de los operadores básicos
            cout << "Prueba de los árboles arbusto con el operador básico 1 - ÁrbolSalPadre" <<endl;
            cout << "N1" << endl
            testOpBasico1(arbolN1A2); //Tiempo de ejecución del operadorBásico1 con n1
            cout << "N2" <<endl;
            testOpBasico1(arbolN2A2);//Tiempo de ejecución del operadorBásico1 con n2
            cout << "N3"<<endl;
            testOpBasico1(arbolN3A2);//Tiempo de ejecución del operadorBásico1 con n3
            cout << "N4" <<endl;
            testOpBasico1(arbolN4A2);//Tiempo de ejecución del operadorBásico1 con n4

            // ----- OperadorBásico 2 -- ArbolArbusto //
            cout << "Prueba de los árboles arbusto con el operador básico 2 - ÁrbolSalPadre" <<endl;
            cout << "N1" << endl
            testOpBasico2(arbolN1A2); //Tiempo de ejecución del operadorBásico2 con n1
            cout << "N2" <<endl;
            testOpBasico2(arbolN2A2);//Tiempo de ejecución del operadorBásico2 con n2
            cout << "N3"<<endl;
            testOpBasico2(arbolN3A2);//Tiempo de ejecución del operadorBásico2 con n3
            cout << "N4" <<endl;
            testOpBasico2(arbolN4A2);//Tiempo de ejecución del operadorBásico2 con n4
            // ----- OperadorBásico 3 -- ArbolPino //
            cout << "Prueba de los árboles arbusto con el operador básico 3 - ÁrbolSalPadre" <<endl;
            cout << "N1" << endl
            testOpBasico3(arbolN1A2); //Tiempo de ejecución del operadorBásico3 con n1
            cout << "N2" <<endl;
            testOpBasico3(arbolN2A2);//Tiempo de ejecución del operadorBásico3 con n2
            cout << "N3"<<endl;
            testOpBasico3(arbolN3A2);//Tiempo de ejecución del operadorBásico3 con n3
            cout << "N4" <<endl;
            testOpBasico3(arbolN4A2);//Tiempo de ejecución del operadorBásico3 con n4

            //Test de Algoritmos
            // ----- Algorithm 1 --- ArbolArbusto //
            cout << "Prueba de los árboles arbusto con el algoritmo 1 - ÁrbolSalPadre" <<endl;
            cout << "N1" << endl
            testAlgoritmo1(arbolN1A2); //Tiempo de ejecución del operadorBásico3 con n1
            cout << "N2" <<endl;
            testAlgoritmo1(arbolN2A2);//Tiempo de ejecución del operadorBásico3 con n2
            cout << "N3"<<endl;
            testAlgoritmo1(arbolN3A2);//Tiempo de ejecución del operadorBásico3 con n3
            cout << "N4" <<endl;
            testAlgoritmo1(arbolN4A2);//Tiempo de ejecución del operadorBásico3 con n4
            // ----- Algorithm 2 --- ArbolArbusto //
            cout << "Prueba de los árboles arbusto con el algoritmo 2 - ÁrbolSalPadre" <<endl;
            cout << "N1" << endl
            testAlgoritmo2(arbolN1A2); //Tiempo de ejecución del operadorBásico3 con n1
            cout << "N2" <<endl;
            testAlgoritmo2(arbolN2A2);//Tiempo de ejecución del operadorBásico3 con n2
            cout << "N3"<<endl;
            testAlgoritmo2(arbolN3A2);//Tiempo de ejecución del operadorBásico3 con n3
            cout << "N4" <<endl;
            testAlgoritmo2(arbolN4A2);//Tiempo de ejecución del operadorBásico3 con n4
            // ----- Algorithm 3 --- ArbolArbusto //
            cout << "Prueba de los árboles arbusto con el algoritmo 3 - ÁrbolSalPadre" <<endl;
            cout << "N1" << endl
            testAlgoritmo3(arbolN1A2); //Tiempo de ejecución del operadorBásico3 con n1
            cout << "N2" <<endl;
            testAlgoritmo3(arbolN2A2);//Tiempo de ejecución del operadorBásico3 con n2
            cout << "N3"<<endl;
            testAlgoritmo3(arbolN3A2);//Tiempo de ejecución del operadorBásico3 con n3
            cout << "N4" <<endl;
            testAlgoritmo3(arbolN4A2);//Tiempo de ejecución del operadorBásico3 con n4
            // ----- Algorithm 4 --- ArbolArbusto //
            cout << "Prueba de los árboles arbusto con el algoritmo 4 - ÁrbolSalPadre" <<endl;
            cout << "N1" << endl
            testAlgoritmo4(arbolN1A2); //Tiempo de ejecución del operadorBásico3 con n1
            cout << "N2" <<endl;
            testAlgoritmo4(arbolN2A2);//Tiempo de ejecución del operadorBásico3 con n2
            cout << "N3"<<endl;
            testAlgoritmo4(arbolN3A2);//Tiempo de ejecución del operadorBásico3 con n3
            cout << "N4" <<endl;
            testAlgoritmo4(arbolN4A2);//Tiempo de ejecución del operadorBásico3 con n4

        }
        //Hermano Derecho
        Test::testOpBasico1(Arbol* arbol){
            double tiempoInicio = 0.0;
            double tiempoFinal = 0.0;
            double tiempoTotal = 0.0;
            int tam = arbol->numNodos();
            int contador = 0;
            while(contador <= tam ){
                //Hay que hacer un recorrido en preOrden haciendo un llamado al OpBa
                tiempoInicio = //GetTime
                arbol->hermanoDerecho();
                tiempoFinal = //GetTime

                tiempoTotal = tiempoFinal - tiempoInicio;
                ++contador;
            }

        }
        //
        Test::testOpBasico2(Arbol* arbol){

        }
        //agregarHijoIesimo
        Test::testOpBasico3(Arbol* arbol){

        }
        //Algoritmos//
        
        //listarArbolPreOrden
        Test::testAlgoritmo1(Arbol* arbol){

        }
        //listarArbolNiveles
        Test::testAlgoritmo2(Arbol* arbol){

        }
        //
        Test::testAlgoritmo3(Arbol* arbol){

        }
        //
        Test::testAlgoritmo4(Arbol* arbol){

        }
