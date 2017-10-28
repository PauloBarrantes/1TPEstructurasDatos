/*!
   \file "Cola.h"
   \brief "Description"
   \author "PauloBarrantes"
   \date "17"/"septiembre"/"2017"
*/

#ifndef _Cola2017
#define _Cola2017
#define M 100000
#include <iostream>
using namespace std;
template <class T>
class Cola {
    private:
        int numElem;
        int tamano;
        T* arregloCircular;
        int primera;
        int ultima;
    public:
        Cola(){ //Iniciar
            arregloCircular = new T [M];
            tamano = M;
            numElem = 0;
            primera = 1;
            ultima = 0;
        }
        ~Cola(){ // Destruir
            delete arregloCircular;
        }
        void vaciar(){
            numElem = 0;
            primera = 1;
            ultima=0;
        }
        /*!
           \brief "Determinar si la cola está vacía o no"
           \param "No recibe"
           \return "Retorna verdadero si está vacía, sino retorna falso"
        */
        int vacia(){
            return !numElem;
        }
        /*!
           \brief "Coloca en la cola (al final) un elemento"
           \param "Un número entero"
           \return "No retorna nada"
        */

        void encolar(T elemento){
            if (tamano != numElem){ // Si la cola no está llena hace el agregado
                if (ultima == tamano-1){
                    ultima = 0;
                }else{
                    ultima += 1;
                }
                arregloCircular[ultima] = elemento;
                numElem += 1;
            }  else{
                cerr << "La Cola está llena, no se pueden agregar más elementos" << endl;
            }
        }
        /*!
           \brief "Sacamos el elemento que está de primero en la cola"
           \param "No recibe"
           \return "Retorna al elemento que sacamos"
        */
        T desencolar(){
            T frente = 0;
            if(!vacia()){
                frente = arregloCircular[primera];
                if (primera == tamano-1){
                    primera = 0;
                }else{
                    primera += 1;
                }
                numElem -= 1;
            }else{
                cerr << "La Cola está vacía" << endl;
            }
            return frente;
        }
        /*!
           \brief "Retorna el número de elementos"
           \param "No recibe"
           \return "Retorna un entero"
        */
        int numElementos(){
            return this->numElem;

        }
        /*!
           \brief "Retorna al que esté al frente de la cola"
           \param "No recibe"
           \return "Retorna al elemento que este de primero"
        */
        T frente(){
            T elemento = 0;
            if(!vacia()){
                elemento = arregloCircular[primera];
            }else{
                std::cerr << "La cola está vacía" << '\n';
            }
            return elemento;
        }
        /*!
           \brief "Retorna al que esté de último de la cola"
           \param "No recibe"
           \return "Retorna al elemento que este de ultimo"
        */
        T ultimo(){
            T elemento = 0;
            if(!vacia()){
                elemento = arregloCircular[ultima];
            }else{
                std::cerr << "La cola está vacía" << '\n';
            }
            return elemento;
        }

};


#endif
