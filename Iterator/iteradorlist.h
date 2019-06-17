#ifndef ITERADOR_H
#define ITERADOR_H

#include "Node.h"

template <class T>
class Iteradorlist
{
    private:
        Node<T> *pNodo;
    public:
        Iteradorlist(Node<T> *up); //asignar un iterador a una lista
        void operator ++();
        bool existe_elementos();
        T operator *();
        bool operator == (Node<T> *);
        bool operator != (Node<T> *);

};



#endif