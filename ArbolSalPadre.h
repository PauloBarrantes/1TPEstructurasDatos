/*!
   \file "Arbol con senalador al padre"
   \brief "Arbol con un arreglo con senalador al padre"
   \author "Paulo Barrantes"
   \date "18"/"Septiembre"/"2017"
*/
#ifndef ArbolSalPadre2017
#define ArbolSalPadre2017
#define M 101000
#include <iostream>
class Arbol {
    class Caja; //Forward declaration
    private:
        class Caja{
            public:
                int etiqueta;
                int padre;
                Caja();
                Caja(int, int);
                void setEtiqueta(int);
        };
        Caja* arreglo;
        int ultima;
        int nNodos;
        int tamano;

    public:
        typedef int Nodo;
        Nodo nodoNulo;
        Arbol(); //Constructor
        ~Arbol(); //Destructor
        /*!
           \brief "Vacía el arreglo, dejando el numero de elementos en 0"
           \param "No recibe"
           \return "No retorna"
        */
        void vaciar();
        /*!
           \brief "Determina si el árbol está vacio o no"
           \param "No recibe nada"
           \return "Retorna un 1 si está vacio, un 0 si no"
        */
        int vacia();
        /*!
           \brief "Para ver la raiz de un árbol"
           \param "No recibe"
           \return "El nodo que está como raíz "
        */
        Nodo raiz();
        /*!
           \brief "Para determinar el hijo más izquierdo de un nodo"
           \param "Recibe un nodo, a quien le vamos a buscar el hijoMasIzq"
           \return "Retorna un nodo (el hijo más izquierdo)"
        */
        Nodo hijoMasIzq(Nodo);
        /*!
           \brief "Para buscar el hermano derecho de un nodo"
           \param "Entra un nodo, al que le vamos a buscar su hermano derecho"
           \return "Retorna un nodo (el hermano derecho)"
        */
        Nodo hermanoDer(Nodo);
        /*!
           \brief "Devolvemos el padre del nodoarbol que entro como parametro"
           \param "Entra un nodo arbol"
           \return "Retorna el nodo padre"
        */
        Nodo padre(Nodo);
        /*!
           \brief "Para determinar si un nodo es hoja o no"
           \param "Entra como parametro un nodo "
           \return "Retorna un entero 1-Si es Hoja 0-Si no es hoja"
        */
        int esHoja(Nodo);
        /*!
           \brief "Ver la etiqueta de un nodo"
           \param "Recibe un nodo"
           \return "La etiqueta del nodo"
        */
        int etiqueta(Nodo);
        /*!
           \brief "Ver la cantidad de nodos que tiene el árbol "
           \param "No recibe"
           \return "Retorna el número nodos"
        */
        int numNodos();
        /*!
           \brief "Averigua el número de hijos que tiene un nodo"
           \param "Recibe un nodo"
           \return "Retorna el número de hijos que tiene un nodo"
        */
        int numHijos(Nodo);
        /*!
           \brief "Modifica la etiqueta de un nodo ya creado"
           \param "Recibe un nodo y un entero etiqueta"
           \return "No retorna nada"
        */
        void modificarEtiq(Nodo, int);
        /*!
           \brief "Le agrega un hijo a un nodo en la iesima posición "
           \param "Recibe un nodo, una etiqueta y un entero posición"
           \return "Retorna el nodo del hijo que se creo"
        */
        Nodo agregarHijoIesimo(Nodo, int, int);
        /*!
           \brief "Borra la hoja de un árbol"
           \param "Recibe un nodo"
           \return "No retorna nada"
        */
        void borrarHoja(Nodo);
        /*!
           \brief "Crea la raiz del árbol"
           \param "Recibe una etiqueta"
           \return "No retorna nada"
        */
        void ponerRaiz(int);
        /*!
           \brief "Imprime las etiquetas y el padre del árbol"
           \param "No recibe"
           \return "No retorna nada"
        */
        std::ostream& imprimir(std::ostream&);
        /*!
           \brief "Busca el nodo que contiene esa etiqueta"
           \param "Recibe una etiqueta "
           \return "Un nodo que le corresponde esa etiqueta"
        */
        Nodo buscarNodo(int);
};

#endif
