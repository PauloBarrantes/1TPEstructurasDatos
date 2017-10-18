/*!
   \file "Menu.h"
   \brief "Menu con el que el usuario va poder utilizar las estructuras de datos y sus operadores básicos"
   \author "Paulo Barrantes"
   \date "05"/"Oct"/"2017"
*/
#ifndef Menu_Usuario2017
#define Menu_Usuario2017
//#include "ArbolSalPadre.h"
#include "ArbolHMI_HD_puntHIzq_Padre.h"
//#include "ArbolHMI_HD.h"
//#include "ArbolHMI_HD_utimoPadre.h"
//#include "ArbolLDL.h"
#include "Cola.h"
#include "Algoritmos.h"
class Menu {
    private:
        Arbol* arbol1;
        Arbol* arbol2;

        Cola<int>* cola1;
        Algoritmos* algoritmos;
    public:
        Menu();
        ~Menu();
		
        /*!
           \brief "Se encarga de controladar el menú, despliega las opciones iniciales"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void controlador();
		
        /*!
           \brief "Despliega el menú para probar los operadores básicos de las estructuras de datos del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void pruebaArbol();
		
        /*!
           \brief "Despliega el menú del modelo cola para así probar los operadores básicos"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void pruebaCola();
		
        /*!
           \brief "Muestra al usuario las instrucciones para poder utilizar los operadores básicos del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void instruccionesArbol();
		
        /*!
           \brief "Despliega la lista de instrucciones para usar los operadores básicos del modelo cola"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void instruccionesCola();

        // ----------------------Arbol---------------------
        /*!
           \brief "Método correspondiente al operador básico iniciar del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void iniciar();
		
        /*!
           \brief "Método correspondiente al operador básico destruir del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void destruir();
		
        /*!
           \brief "Método correspondiente al operador básico vaciar del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void vaciar();
		
        /*!
           \brief "Método correspondiente al operador básico vacia del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void vacia();
		
        /*!
           \brief "Método correspondiente al operador básico raiz del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void raiz();
		
        /*!
           \brief "Método correspondiente al operador básico hijoMasIzq del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void hijoMasIzq();
		
        /*!
           \brief "Método correspondiente al operador básico hermanoDer del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void hermanoDer();
		
        /*!
           \brief "Método correspondiente al operador básico padre del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void padre();
		
        /*!
           \brief "Método correspondiente al operador básico esHoja del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void esHoja();
		
        /*!
           \brief "Método correspondiente al operador básico numNodos del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void numNodos();
		
        /*!
           \brief "Método correspondiente al operador básico numHijos del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void numHijos();
		
        /*!
           \brief "Método correspondiente al operador básico modificarEtiq del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void modificarEtiq();
		
        /*!
           \brief "Método correspondiente al operador básico agregarHijoIesimo del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void agregarHijoIesimo();
		
        /*!
           \brief "Método correspondiente al operador básico borrarhoja del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void borrarHoja();
		
        /*!
           \brief "Método correspondiente al operador básico ponerRaiz del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void ponerRaiz();
		
        /*!
           \brief "Método correspondiente al operador básico imprimir del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void imprimir();

        //---------------Cola-------------------
        /*!
           \brief "Método correspondiente al operador básico iniciar del modelo cola"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void iniciarC();
		
        /*!
           \brief "Método correspondiente al operador básico destruir del modelo cola"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void destruirC();
		
        /*!
           \brief "Método correspondiente al operador básico vaciar del modelo cola"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void vaciarC();
		
        /*!
           \brief "Método correspondiente al operador básico vacia del modelo cola"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void vaciaC();
		
        /*!
           \brief "Método correspondiente al operador básico encolar del modelo cola"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void encolarC();
		
        /*!
           \brief "Método correspondiente al operador básico desencolar del modelo cola"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void desencolarC();
		
        /*!
           \brief "Método correspondiente al operador básico numElementos del modelo cola"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void numElementosC();
		
        /*!
           \brief "Método correspondiente al operador básico frente del modelo cola"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void frenteC();
		
        /*!
           \brief "Método correspondiente al operador básico ultimo del modelo cola"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void ultimoC();
		
		//---------------Algoritmos-------------------
		
		void llenarArbol1();
		
		void llenarArbol2();
		
        /*!
           \brief "Despliega el menú para probar los algoritmos del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void pruebaAlgoritmos();
		
        /*!
           \brief "Muestra al usuario las instrucciones para poder utilizar los algoritmos del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void instruccionesAlgoritmos();
		
		 /*!
           \brief "Metodo correspondiente al algoritmo hermano izquierdo del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void hermanoIzquierdo(); // 1
		
		 /*!
           \brief "Metodo correspondiente al algoritmo hay repetidos del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void hayRepetidos(); // 2
		
		 /*!
           \brief "Metodo correspondiente al algoritmo averiguar niveles en recorrido por niveles del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void averiguarNivelesEnRecorridoPorNiveles(); //3
		
		 /*!
           \brief "Metodo correspondiente al algoritmo averiguar nieveles en per orden del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void averiguarNivelsPreOrden(); //4
		
		 /*!
           \brief "Metodo correspondiente al algoritmo profundidad del nodo del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void profundidadNodo(); //5
		
		 /*!
           \brief "Metodo correspondiente al algoritmo listar etiquetas del iesimo nivel del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void listarEtiquetas_iesimoNivel(); //6
		
		 /*!
           \brief "Metodo correspondiente al algoritmo listar etiquetas de un nodo seleccionado del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void listarEtiquetasDeNodo(); //7
		
		 /*!
           \brief "Metodo correspondiente al algoritmo borrar sub árbol del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void borrarSubArbol(); //8
		
		 /*!
           \brief "Metodo correspondiente al algoritmo copiar árbol del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void copiarArbol();//9
		
		 /*!
           \brief "Metodo correspondiente al algoritmo iguales del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        void iguales();//10
		 /*!
           \brief "Metodo correspondiente al algoritmo listar Arbol en pre orden del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
         */
        //void listarArbolPreorden(); //11
		
		 /*!
           \brief "Metodo correspondiente al algoritmo lista árbol en post orden del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        //void listarArbolPostOrden(); //12
		
		 /*!
           \brief "Metodo correspondiente al algoritmo listar árbol por niveles del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        //void listarArbolNiveles(); //13
		
		 /*!
           \brief "Metodo correspondiente al algoritmo buscar etiqueta y retorna su nodo del modelo árbol"
           \param "No recibe nada"
           \return "No retorna nada"
        */
        //void buscarEtiquetaRetNodo();//14
};
// g++ main.cpp cola.cpp arbolsalpadre.cpp menu.cpp -o ejecutable

#endif
