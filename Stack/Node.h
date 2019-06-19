#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

template <class T>
class Node
{
    public:
        T dato;
        Node<T>*next;

        Node();
        Node(T);  
        void imprimir();
        void borrar_todo();    
        ~Node();
};

#endif