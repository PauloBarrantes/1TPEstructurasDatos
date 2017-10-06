/*!
   \file "Cola.h"
   \brief "Description"
   \author "PauloBarrantes"
   \date "17"/"septiembre"/"2017"
*/

#ifndef _Cola2017
#define _Cola2017

#define M 1000
class Cola {
    private:
        int numElem;
        int tamano;
        int* arregloCircular;
        int primera;
        int ultima;
    public:
        Cola(); //Iniciar
        ~Cola(); // Destruir
        void vaciar();
        /*!
           \brief "Determinar si la cola está vacía o no"
           \param "No recibe"
           \return "Retorna verdadero si está vacía, sino retorna falso"
        */
        int vacia();
        /*!
           \brief "Coloca en la cola (al final) un elemento"
           \param "Un número entero"
           \return "No retorna nada"
        */
        void encolar(int);
        /*!
           \brief "Sacamos el elemento que está de primero en la cola"
           \param "No recibe"
           \return "Retorna al elemento que sacamos"
        */
        int desencolar();
        /*!
           \brief "Retorna el número de elementos"
           \param "No recibe"
           \return "Retorna un entero"
        */
        int numElementos();
        /*!
           \brief "Retorna al que esté al frente de la cola"
           \param "No recibe"
           \return "Retorna un entero"
        */
        int frente();
        /*!
           \brief "Retorna al que esté de último de la cola"
           \param "No recibe"
           \return "Retorna un entero"
        */
        int ultimo();
};


#endif
