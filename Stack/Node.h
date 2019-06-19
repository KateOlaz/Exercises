#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

template <class T>
class Pila;

template <class T>
class Node{

    private:
        T dato;
        Node<T>*next;  
        friend class Pila<T>;
    public:

    
        Node();
        Node(T);  
        void imprimir();
        void borrar_todo();    
        ~Node();
};

#endif
