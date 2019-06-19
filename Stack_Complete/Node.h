#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

template <class T>
class Pila;
template <class T>
class Cola;

template <class T>
class Node{

    private:
        T dato;
        Node<T>*next;  
        friend class Pila<T>;
        friend class Cola<T>;
    public:
    public:
        Node(T);
        void setSiguiente(Node<T>*);
        void setDato(T);
        Node<T>* getSiguiente();
        T getDato();
};

#endif