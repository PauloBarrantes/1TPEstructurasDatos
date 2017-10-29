//g++ main.cpp GeneradorArbol.cpp ArbolHMI_HD.cpp Algoritmos.cpp Test.cpp

#include "Test.h"
#include <iostream>
#include <time.h>
#include "Cola.h"
#define TIME_THIS(X,Y)                                         \
  {                                                          \
    struct timespec ts1, ts2;                                \
    clock_gettime( CLOCK_REALTIME, &ts1 );                   \
    X;                                                       \
    clock_gettime( CLOCK_REALTIME, &ts2 );                   \
                                                            \
     Y = (float) ( 1.0*(1.0*ts2.tv_nsec - ts1.tv_nsec*1.0)*1e-9 \
      + 1.0*ts2.tv_sec - 1.0*ts1.tv_sec ) ;                 \
  }

#define N1 1000
#define N2 10000
#define N3 40000
#define N4 100000
using namespace std;

        Test::Test(){
			algoritmo = new Algoritmos();
			genArbol = new GeneradorArbol();

            //árbolPino
            arbolN1A1 = 0;
            arbolN2A1 = 0;
            arbolN3A1 = 0;
            arbolN4A1 = 0;
            //árbolArbusto
            arbolN1A2 = 0;
            arbolN2A2 = 0;
            arbolN3A2 = 0;
            arbolN4A2 = 0;
            //árbolPromedio
            arbolN1A3 = 0;
            arbolN2A3 = 0;
            arbolN3A3 = 0;
            arbolN4A3 = 0;
            //árbolBinario
            arbolN1A4 = 0;
            arbolN2A4 = 0;
            arbolN3A4 = 0;
            arbolN4A4 = 0;
        }

        Test::~Test(){
			delete algoritmo;
			delete genArbol;
        }
        //Debería enviar a probar el árbol con sus 4 tamaños, y cada uno de sus OB y algoritmos.
        void Test::testGeneral(){
			GeneradorArbol generador;
			arbolN1A1 = generador.arbolPromedio(N1);
			testOpBasico1(arbolN1A1);
			//arbolN1A1->imprimir(cout);
          //this->testPino();
          //this->testArbusto();
          //this->testPromedio();
          //this->testBinario();
        }
        //Hermano Derecho
        void Test::testOpBasico1(Arbol* arbol){
            double tiempoGlobal;
            double tiempoPromedio;
            double segundos;
            if(!arbol->vacia()){
                Cola<Arbol::Nodo> cola;
                TIME_THIS(arbol->hermanoDer(arbol->raiz()), segundos);
                tiempoGlobal += segundos;
                cout << "Segundos Raíz:  " << tiempoGlobal <<endl;

                cola.encolar(arbol->raiz());
                while(!cola.vacia()){
                    Arbol::Nodo nodo = cola.desencolar();
                    Arbol::Nodo nh = arbol->hijoMasIzq(nodo);
                    while(nh != arbol->nodoNulo){
                        TIME_THIS(arbol->hermanoDer(nh), segundos);
                        tiempoGlobal += segundos;
                        cola.encolar(nh);
                        nh = arbol->hermanoDer(nh);
                    }
                }
            }
            cout << "Tiempo Global " << tiempoGlobal <<endl;

            tiempoPromedio = tiempoGlobal/arbol->numNodos();

            cout << "Tiempo Promedio " << tiempoPromedio <<endl;
		}

        //Padre
        void Test::testOpBasico2(Arbol* arbol){
            double tiempoGlobal;
            double tiempoPromedio;
            double segundos;
            if(!arbol->vacia()){
                Cola<Arbol::Nodo> cola;
                TIME_THIS(arbol->padre(arbol->raiz()), segundos);
                tiempoGlobal += segundos;
                cout << "Segundos Raíz:  " << tiempoGlobal <<endl;

                cola.encolar(arbol->raiz());
                while(!cola.vacia()){
                    Arbol::Nodo nodo = cola.desencolar();
                    Arbol::Nodo nh = arbol->hijoMasIzq(nodo);
                    while(nh != arbol->nodoNulo){
                        TIME_THIS(arbol->padre(nh), segundos);
                        tiempoGlobal += segundos;
                        cola.encolar(nh);
                        nh = arbol->hermanoDer(nh);
                    }
                }
            }
            cout << "Tiempo Global " << tiempoGlobal <<endl;

            tiempoPromedio = tiempoGlobal/arbol->numNodos();


            cout << tiempoTotal << endl;

                cola.encolar(arbol->raiz());
                while(!cola.vacia()){
                    Arbol::Nodo nodo = cola.desencolar();
                    Arbol::Nodo nh = arbol->hijoMasIzq(nodo);
                    while(nh != arbol->nodoNulo){
                        TIME_THIS(arbol->padre(nh), segundos);
                        tiempoGlobal += segundos;
                        cola.encolar(nh);
                        nh = arbol->hermanoDer(nh);
                    }
                }
            }
            cout << "Tiempo Global " << tiempoGlobal <<endl;

            tiempoPromedio = tiempoGlobal/arbol->numNodos();

            cout << "Tiempo Promedio " << tiempoPromedio <<endl;
        }
        //
        void Test::testOpBasico3(Arbol* arbol){
            double tiempoGlobal;
            double tiempoPromedio;
            double segundos;
            Arbol::Nodo nodo = arbol->raiz();


			cout << tiempoTotal << endl;
        }
        //Algoritmos//

        //listarArbolPreOrden
        void Test::testAlgoritmo1(Arbol* arbol){
            double segundos;
            TIME_THIS(algoritmo->listarArbolPreOrden(arbol), segundos);
            cout << segundos << endl;
        }
        //listarArbolNiveles
        void Test::testAlgoritmo2(Arbol* arbol){
            double segundos = 0.0;
            TIME_THIS(algoritmo->listarArbolNiveles(arbol), segundos);
            cout << segundos << endl;

        }
        //averiguarNivelesPreOrden
        void Test::testAlgoritmo3(Arbol* arbol){
            double segundos = 0.0;
            TIME_THIS(algoritmo->averiguarNivelsPreOrden(arbol), segundos);
            cout << segundos << endl;
        }
        void Test::testAlgoritmo4(Arbol* arbol){
            double segundos = 0.0;
            TIME_THIS(algoritmo->averiguarNivelsPreOrden(arbol), segundos);
            cout << segundos << endl;
        }

        void Test::testPino(){
          // INICIO ARBOL PINO //
          //árbolPino
          arbolN1A1 = genArbol->arbolPino(N1);
          arbolN2A1 = genArbol->arbolPino(N2);
          arbolN3A1 = genArbol->arbolPino(N3);
          arbolN4A1 = genArbol->arbolPino(N4);
          //Pruebas de los operadores básicos
          cout << "Prueba de los árboles pino con el operador básico 1 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testOpBasico1(arbolN1A1); //Tiempo de ejecución del operadorBásico1 con n1
          cout << "N2" <<endl;
          testOpBasico1(arbolN2A1);//Tiempo de ejecución del operadorBásico1 con n2
          cout << "N3"<<endl;
          testOpBasico1(arbolN3A1);//Tiempo de ejecución del operadorBásico1 con n3
          cout << "N4" <<endl;
          testOpBasico1(arbolN4A1);//Tiempo de ejecución del operadorBásico1 con n4

          // ----- OperadorBásico 2 -- ArbolPino //

          cout << "Prueba de los árboles pino con el operador básico 2 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testOpBasico2(arbolN1A1); //Tiempo de ejecución del operadorBásico2 con n1
          cout << "N2" <<endl;
          testOpBasico2(arbolN2A1);//Tiempo de ejecución del operadorBásico2 con n2
          cout << "N3"<<endl;
          testOpBasico2(arbolN3A1);//Tiempo de ejecución del operadorBásico2 con n3
          cout << "N4" <<endl;
          testOpBasico2(arbolN4A1);//Tiempo de ejecución del operadorBásico2 con n4

          // ----- OperadorBásico 3 -- ArbolPino //

          cout << "Prueba de los árboles pino con el operador básico 3 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
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
          cout << "N1" << endl;
          testAlgoritmo1(arbolN1A1); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo1(arbolN2A1);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo1(arbolN3A1);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo1(arbolN4A1);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 2 --- ArbolPino //
          cout << "Prueba de los árboles pino con el algoritmo 2 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testAlgoritmo2(arbolN1A1); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo2(arbolN2A1);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo2(arbolN3A1);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo2(arbolN4A1);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 3 --- ArbolPino //
          cout << "Prueba de los árboles pino con el algoritmo 3 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testAlgoritmo3(arbolN1A1); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo3(arbolN2A1);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo3(arbolN3A1);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo3(arbolN4A1);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 4 --- ArbolPino //
          cout << "Prueba de los árboles pino con el algoritmo 4 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testAlgoritmo4(arbolN1A1); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo4(arbolN2A1);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo4(arbolN3A1);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo4(arbolN4A1);//Tiempo de ejecución del operadorBásico3 con n4

          //liberamos la memoria
          delete arbolN1A1;
          delete arbolN2A1;
          delete arbolN3A1;
          delete arbolN4A1;

        }
        void Test::testArbusto(){
          /// INICIO DEL ÁRBOL ARBUSTO

          arbolN1A2 = genArbol->arbolArbusto(N1);
          arbolN2A2 = genArbol->arbolArbusto(N2);
          arbolN3A2 = genArbol->arbolArbusto(N3);
          arbolN4A2 = genArbol->arbolArbusto(N4);

          //Pruebas de los operadores básicos
          cout << "Prueba de los árboles arbusto con el operador básico 1 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testOpBasico1(arbolN1A2); //Tiempo de ejecución del operadorBásico1 con n1
          cout << "N2" <<endl;
          testOpBasico1(arbolN2A2);//Tiempo de ejecución del operadorBásico1 con n2
          cout << "N3"<<endl;
          testOpBasico1(arbolN3A2);//Tiempo de ejecución del operadorBásico1 con n3
          cout << "N4" <<endl;
          testOpBasico1(arbolN4A2);//Tiempo de ejecución del operadorBásico1 con n4

          // ----- OperadorBásico 2 -- ArbolArbusto //
          cout << "Prueba de los árboles arbusto con el operador básico 2 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testOpBasico2(arbolN1A2); //Tiempo de ejecución del operadorBásico2 con n1
          cout << "N2" <<endl;
          testOpBasico2(arbolN2A2);//Tiempo de ejecución del operadorBásico2 con n2
          cout << "N3"<<endl;
          testOpBasico2(arbolN3A2);//Tiempo de ejecución del operadorBásico2 con n3
          cout << "N4" <<endl;
          testOpBasico2(arbolN4A2);//Tiempo de ejecución del operadorBásico2 con n4
          // ----- OperadorBásico 3 -- ArbolPino //
          cout << "Prueba de los árboles arbusto con el operador básico 3 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
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
          cout << "N1" << endl;
          testAlgoritmo1(arbolN1A2); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo1(arbolN2A2);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo1(arbolN3A2);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo1(arbolN4A2);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 2 --- ArbolArbusto //
          cout << "Prueba de los árboles arbusto con el algoritmo 2 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testAlgoritmo2(arbolN1A2); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo2(arbolN2A2);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo2(arbolN3A2);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo2(arbolN4A2);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 3 --- ArbolArbusto //
          cout << "Prueba de los árboles arbusto con el algoritmo 3 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testAlgoritmo3(arbolN1A2); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo3(arbolN2A2);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo3(arbolN3A2);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo3(arbolN4A2);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 4 --- ArbolArbusto //
          cout << "Prueba de los árboles arbusto con el algoritmo 4 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testAlgoritmo4(arbolN1A2); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo4(arbolN2A2);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo4(arbolN3A2);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo4(arbolN4A2);//Tiempo de ejecución del operadorBásico3 con n4

          //liberamos la memoria
          delete arbolN1A2;
          delete arbolN2A2;
          delete arbolN3A2;
          delete arbolN4A2;
        }
        void Test::testPromedio(){
          /// INICIO DEL ÁRBOL ARBUSTO

          arbolN1A3 = genArbol->arbolPromedio(N1);
          arbolN2A3 = genArbol->arbolPromedio(N2);
          arbolN3A3 = genArbol->arbolPromedio(N3);
          arbolN4A3 = genArbol->arbolPromedio(N4);

          //Pruebas de los operadores básicos
          cout << "Prueba de los árboles promedio con el operador básico 1 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testOpBasico1(arbolN1A3); //Tiempo de ejecución del operadorBásico1 con n1
          cout << "N2" <<endl;
          testOpBasico1(arbolN2A3);//Tiempo de ejecución del operadorBásico1 con n2
          cout << "N3"<<endl;
          testOpBasico1(arbolN3A3);//Tiempo de ejecución del operadorBásico1 con n3
          cout << "N4" <<endl;
          testOpBasico1(arbolN4A3);//Tiempo de ejecución del operadorBásico1 con n4

          // ----- OperadorBásico 2 -- ArbolArbusto //
          cout << "Prueba de los árboles promedio con el operador básico 2 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testOpBasico2(arbolN1A3); //Tiempo de ejecución del operadorBásico2 con n1
          cout << "N2" <<endl;
          testOpBasico2(arbolN2A3);//Tiempo de ejecución del operadorBásico2 con n2
          cout << "N3"<<endl;
          testOpBasico2(arbolN3A3);//Tiempo de ejecución del operadorBásico2 con n3
          cout << "N4" <<endl;
          testOpBasico2(arbolN4A3);//Tiempo de ejecución del operadorBásico2 con n4
          // ----- OperadorBásico 3 -- ArbolPino //
          cout << "Prueba de los árboles promedio con el operador básico 3 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testOpBasico3(arbolN1A3); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testOpBasico3(arbolN2A3);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testOpBasico3(arbolN3A3);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testOpBasico3(arbolN4A3);//Tiempo de ejecución del operadorBásico3 con n4

          //Test de Algoritmos
          // ----- Algorithm 1 --- ArbolArbusto //
          cout << "Prueba de los árboles promedio con el algoritmo 1 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testAlgoritmo1(arbolN1A3); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo1(arbolN2A3);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo1(arbolN3A3);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo1(arbolN4A3);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 2 --- ArbolArbusto //
          cout << "Prueba de los árboles promedio con el algoritmo 2 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testAlgoritmo2(arbolN1A3); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo2(arbolN2A3);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo2(arbolN3A3);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo2(arbolN4A3);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 3 --- ArbolArbusto //
          cout << "Prueba de los árboles promedio con el algoritmo 3 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testAlgoritmo3(arbolN1A3); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo3(arbolN2A3);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo3(arbolN3A3);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo3(arbolN4A3);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 4 --- ArbolArbusto //
          cout << "Prueba de los árboles promedio con el algoritmo 4 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testAlgoritmo4(arbolN1A3); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo4(arbolN2A3);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo4(arbolN3A3);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo4(arbolN4A3);//Tiempo de ejecución del operadorBásico3 con n4

          //liberamos la memoria
          delete arbolN1A3;
          delete arbolN2A3;
          delete arbolN3A3;
          delete arbolN4A3;
        }
        void Test::testBinario(){
          /// INICIO DEL ÁRBOL BINARIO

          arbolN1A4 = genArbol->arbolBinario(N1);
          arbolN2A4 = genArbol->arbolBinario(N2);
          arbolN3A4 = genArbol->arbolBinario(N3);
          arbolN4A4 = genArbol->arbolBinario(N4);

          //Pruebas de los operadores básicos
          cout << "Prueba de los árboles binarios con el operador básico 1 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testOpBasico1(arbolN1A4); //Tiempo de ejecución del operadorBásico1 con n1
          cout << "N2" <<endl;
          testOpBasico1(arbolN2A4);//Tiempo de ejecución del operadorBásico1 con n2
          cout << "N3"<<endl;
          testOpBasico1(arbolN3A4);//Tiempo de ejecución del operadorBásico1 con n3
          cout << "N4" <<endl;
          testOpBasico1(arbolN4A4);//Tiempo de ejecución del operadorBásico1 con n4

          // ----- OperadorBásico 2 -- ArbolArbusto //
          cout << "Prueba de los árboles binarios con el operador básico 2 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testOpBasico2(arbolN1A4); //Tiempo de ejecución del operadorBásico2 con n1
          cout << "N2" <<endl;
          testOpBasico2(arbolN2A4);//Tiempo de ejecución del operadorBásico2 con n2
          cout << "N3"<<endl;
          testOpBasico2(arbolN3A4);//Tiempo de ejecución del operadorBásico2 con n3
          cout << "N4" <<endl;
          testOpBasico2(arbolN4A4);//Tiempo de ejecución del operadorBásico2 con n4
          // ----- OperadorBásico 3 -- ArbolPino //
          cout << "Prueba de los árboles binarios con el operador básico 3 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testOpBasico3(arbolN1A4); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testOpBasico3(arbolN2A4);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testOpBasico3(arbolN3A4);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testOpBasico3(arbolN4A4);//Tiempo de ejecución del operadorBásico3 con n4

          //Test de Algoritmos
          // ----- Algorithm 1 --- ArbolArbusto //
          cout << "Prueba de los árboles binarios con el algoritmo 1 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testAlgoritmo1(arbolN1A4); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo1(arbolN2A4);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo1(arbolN3A4);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo1(arbolN4A4);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 2 --- ArbolArbusto //
          cout << "Prueba de los árboles binarios con el algoritmo 2 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testAlgoritmo2(arbolN1A4); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo2(arbolN2A4);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo2(arbolN3A4);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo2(arbolN4A4);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 3 --- ArbolArbusto //
          cout << "Prueba de los árboles binarios con el algoritmo 3 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testAlgoritmo3(arbolN1A4); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo3(arbolN2A4);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo3(arbolN3A4);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo3(arbolN4A4);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 4 --- ArbolArbusto //
          cout << "Prueba de los árboles binarios con el algoritmo 4 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl;
          testAlgoritmo4(arbolN1A4); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo4(arbolN2A4);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo4(arbolN3A4);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo4(arbolN4A4);//Tiempo de ejecución del operadorBásico3 con n4

          //liberamos la memoria
          delete arbolN1A4;
          delete arbolN2A4;
          delete arbolN3A4;
          delete arbolN4A4;
        }
