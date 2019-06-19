#ifndef LIST_H
#define LIST_H

#include <fstream>
#include <iostream>

#include "Node.h"
#include "Node.cpp"

using namespace std;

template <class T>
class Pila
{
    private:
        Node<T> *head;
    public:
        Node<T> *CrearPila();
        bool pilaVacia();
        T TopePila();
        Node<T> *InsertarPila(T valor);
        Node<T> *EliminarPila();
        void imprimirPila();
        Node<T> *EliminarTodo();
        ~Pila();

};
#endif
