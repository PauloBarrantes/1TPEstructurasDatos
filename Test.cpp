#include "Test.h"
#include <iostream>
#include <time.h>
#define N1 1000
#define N2 10000
#define N3 40000
#define N4 100000
using namespace std;

        Test::Test(){
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
            //árbolBinario
            arbolN1A3 = 0;
            arbolN2A3 = 0;
            arbolN3A3 = 0;
            arbolN4A3 = 0;
            //árbolPromedio
            arbolN1A4 = 0;
            arbolN2A4 = 0;
            arbolN3A4 = 0;
            arbolN4A4 = 0;
        }

        Test::~Test(){
        }
        //Debería enviar a probar el árbol con sus 4 tamaños, y cada uno de sus OB y algoritmos.
        Test::testGeneral(){
          this->testPino();
          this->testArbusto();
          this->testPromedio();
          this->testBinario();
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
                tiempoInicio = time(&timer);
                arbol->hermanoDerecho();
                tiempoFinal = time(&timer);

                tiempoTotal = tiempoFinal - tiempoInicio;
                ++contador;
            }

        }
        //
        Test::testOpBasico2(Arbol* arbol){
            double tiempoInicio = 0.0;
            double tiempoFinal = 0.0;
            double tiempoTotal = 0.0;

        }
        //agregarHijoIesimo
        Test::testOpBasico3(Arbol* arbol){
            double tiempoInicio = 0.0;
            double tiempoFinal = 0.0;
            double tiempoTotal = 0.0;

        }
        //Algoritmos//

        //listarArbolPreOrden
        double Test::testAlgoritmo1(Arbol* arbol){
            double tiempoInicio = 0.0;
            double tiempoFinal = 0.0;
            double tiempoTotal = 0.0;
            tiempoInicio = time(&timer);
            arbol->listarArbolPreOrden();
            tiempoFinal = time(&timer);
            tiempoTotal = tiempoFinal - tiempoInicio;
            return tiempoTotal;
        }
        //listarArbolNiveles
        double Test::testAlgoritmo2(Arbol* arbol){
            double tiempoInicio = 0.0;
            double tiempoFinal = 0.0;
            double tiempoTotal = 0.0;
            tiempoInicio = time(&timer);
            arbol->listarArbolNiveles();
            tiempoFinal = time(&timer);
            tiempoTotal = tiempoFinal - tiempoInicio;
            return tiempoTotal;

        }
        //averiguarNivelesPreOrden
        double Test::testAlgoritmo3(Arbol* arbol){
            double tiempoInicio = 0.0;
            double tiempoFinal = 0.0;
            double tiempoTotal = 0.0;
            tiempoInicio = time(&timer);
            arbol->averiguarNivelesPreOrden();
            tiempoFinal = time(&timer);
            tiempoTotal = tiempoFinal - tiempoInicio;
            return tiempoTotal;


            return tiempoTotal;
        }
        Test::testAlgoritmo4(Arbol* arbol){

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

          //liberamos la memoria
          delete arbolN1A2;
          delete arbolN2A2;
          delete arbolN3A2;
          delete arbolN4A2;
        }
        void Test::testPromedio(){
          /// INICIO DEL ÁRBOL ARBUSTO

          arbolN1A2 = genArbol->arbolPromedio(N1);
          arbolN2A2 = genArbol->arbolPromedio(N2);
          arbolN3A2 = genArbol->arbolPromedio(N3);
          arbolN4A2 = genArbol->arbolPromedio(N4);

          //Pruebas de los operadores básicos
          cout << "Prueba de los árboles promedio con el operador básico 1 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl
          testOpBasico1(arbolN1A3); //Tiempo de ejecución del operadorBásico1 con n1
          cout << "N2" <<endl;
          testOpBasico1(arbolN2A3);//Tiempo de ejecución del operadorBásico1 con n2
          cout << "N3"<<endl;
          testOpBasico1(arbolN3A3);//Tiempo de ejecución del operadorBásico1 con n3
          cout << "N4" <<endl;
          testOpBasico1(arbolN4A3);//Tiempo de ejecución del operadorBásico1 con n4

          // ----- OperadorBásico 2 -- ArbolArbusto //
          cout << "Prueba de los árboles promedio con el operador básico 2 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl
          testOpBasico2(arbolN1A3); //Tiempo de ejecución del operadorBásico2 con n1
          cout << "N2" <<endl;
          testOpBasico2(arbolN2A3);//Tiempo de ejecución del operadorBásico2 con n2
          cout << "N3"<<endl;
          testOpBasico2(arbolN3A3);//Tiempo de ejecución del operadorBásico2 con n3
          cout << "N4" <<endl;
          testOpBasico2(arbolN4A3);//Tiempo de ejecución del operadorBásico2 con n4
          // ----- OperadorBásico 3 -- ArbolPino //
          cout << "Prueba de los árboles promedio con el operador básico 3 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl
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
          cout << "N1" << endl
          testAlgoritmo1(arbolN1A3); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo1(arbolN2A3);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo1(arbolN3A3);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo1(arbolN4A3);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 2 --- ArbolArbusto //
          cout << "Prueba de los árboles promedio con el algoritmo 2 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl
          testAlgoritmo2(arbolN1A3); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo2(arbolN2A3);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo2(arbolN3A3);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo2(arbolN4A3);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 3 --- ArbolArbusto //
          cout << "Prueba de los árboles promedio con el algoritmo 3 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl
          testAlgoritmo3(arbolN1A3); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo3(arbolN2A3);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo3(arbolN3A3);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo3(arbolN4A3);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 4 --- ArbolArbusto //
          cout << "Prueba de los árboles promedio con el algoritmo 4 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl
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

          arbolN1A2 = genArbol->arbolBinario(N1);
          arbolN2A2 = genArbol->arbolBinario(N2);
          arbolN3A2 = genArbol->arbolBinario(N3);
          arbolN4A2 = genArbol->arbolBinario(N4);

          //Pruebas de los operadores básicos
          cout << "Prueba de los árboles binarios con el operador básico 1 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl
          testOpBasico1(arbolN1A4); //Tiempo de ejecución del operadorBásico1 con n1
          cout << "N2" <<endl;
          testOpBasico1(arbolN2A4);//Tiempo de ejecución del operadorBásico1 con n2
          cout << "N3"<<endl;
          testOpBasico1(arbolN3A4);//Tiempo de ejecución del operadorBásico1 con n3
          cout << "N4" <<endl;
          testOpBasico1(arbolN4A4);//Tiempo de ejecución del operadorBásico1 con n4

          // ----- OperadorBásico 2 -- ArbolArbusto //
          cout << "Prueba de los árboles binarios con el operador básico 2 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl
          testOpBasico2(arbolN1A4); //Tiempo de ejecución del operadorBásico2 con n1
          cout << "N2" <<endl;
          testOpBasico2(arbolN2A4);//Tiempo de ejecución del operadorBásico2 con n2
          cout << "N3"<<endl;
          testOpBasico2(arbolN3A4);//Tiempo de ejecución del operadorBásico2 con n3
          cout << "N4" <<endl;
          testOpBasico2(arbolN4A4);//Tiempo de ejecución del operadorBásico2 con n4
          // ----- OperadorBásico 3 -- ArbolPino //
          cout << "Prueba de los árboles binarios con el operador básico 3 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl
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
          cout << "N1" << endl
          testAlgoritmo1(arbolN1A4); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo1(arbolN2A4);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo1(arbolN3A4);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo1(arbolN4A4);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 2 --- ArbolArbusto //
          cout << "Prueba de los árboles binarios con el algoritmo 2 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl
          testAlgoritmo2(arbolN1A4); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo2(arbolN2A4);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo2(arbolN3A4);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo2(arbolN4A4);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 3 --- ArbolArbusto //
          cout << "Prueba de los árboles binarios con el algoritmo 3 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl
          testAlgoritmo3(arbolN1A4); //Tiempo de ejecución del operadorBásico3 con n1
          cout << "N2" <<endl;
          testAlgoritmo3(arbolN2A4);//Tiempo de ejecución del operadorBásico3 con n2
          cout << "N3"<<endl;
          testAlgoritmo3(arbolN3A4);//Tiempo de ejecución del operadorBásico3 con n3
          cout << "N4" <<endl;
          testAlgoritmo3(arbolN4A4);//Tiempo de ejecución del operadorBásico3 con n4
          // ----- Algorithm 4 --- ArbolArbusto //
          cout << "Prueba de los árboles binarios con el algoritmo 4 - ÁrbolSalPadre" <<endl;
          cout << "N1" << endl
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
