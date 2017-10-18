/*!
   \file "Menu.h"
   \brief "Menu con el que el usuario va poder utilizar las estructuras de datos y sus operadores básicos"
   \author "Paulo Barrantes"
   \date "05"/"Oct"/"2017"
*/
#ifndef Menu_Usuario2017
#define Menu_Usuario2017
//#include "ArbolSalPadre.h"
//#include "ArbolHMI_HD_puntHIzq_Padre.h"
//#include "ArbolHMI_HD.h"
#include "ArbolHMI_HD_utimoPadre.h"
//#include "ArbolLDL.h"
#include "Cola.h"
#include "Algoritmos.h"
class Menu {
    private:
        Arbol* arbol1 = 0;
        Arbol* arbol2 = 0;

        Cola* cola1 = 0;
        Algoritmos* algoritmos = 0;
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
        /*!
           \brief "Description"
           \param "Param description"s
           \return "Return of the function"
        */
        void pruebaAlgoritmos();
        /*!
           \brief "Description"
           \param "Param description"s
           \return "Return of the function"
        */
        void instruccionesAlgoritmos();

        void hermanoIzquierdo(); // 1
        void hayRepetidos(); // 2
        void averiguarNivelesEnRecorridoPorNiveles(); //3
        void averiguarNivelsPreOrden(); //4
        void profundidadNodo(); //5
        void listarEtiquetas_iesimoNivel(); //6
        void listarEtiquetasDeNodo(); //7
        void borrarSubArbol(); //8
        void copiarArbol();//9
        void iguales();//10
        void listarArbolPreorden(); //11
        void listarArbolPostOrden(); //12
        void listarArbolNiveles(); //13
        void Menu::buscarEtiquetaRetNodo();//14
};
// g++ main.cpp cola.cpp arbolsalpadre.cpp menu.cpp -o ejecutable

#endif
