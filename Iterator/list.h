#ifndef LIST_H
#define LIST_H

#include <fstream>
#include <iostream>

#include "Node.h"
#include "Node.cpp"
#include "iteradorlist.h"

using namespace std;

template <class T>
class LinkedList
{
    private:
        Node<T> *head;
        int size; //Numero de nodos 
    public:

        Iteradorlist<T> inicio();
        Iteradorlist<T> end();
        LinkedList();
        void lista(int);
        void insertar_inicio(T);
        void insertar_final(T);
        void buscar(T);
        void imprimir();
        void eliminar(T);
        void eliminar_todo();
        ~LinkedList();

};
#endif