#include "iteradorlist.h"

template<typename T>
void Iteradorlist<T>::Iteradorlist(Node<T> *nodo)
{
    pNodo = nodo;
} 

template<typename T>
void Iteradorlist<T>::operator++()
{
    pNodo = pNodo->next;
} 

template<typename T>
bool Iteradorlist<T>::existe_elementos()
{
    return (pNodo != NULL);
}

T Iteradorlist<T>::operator*()
{
    return nNodo->dato;
}

bool Iteradorlist<T>::operator == (Node* nodo)
{
    return nNodo == nodo;
}
bool Iteradorlist<T>::operator != (Node* node)
{
    return nNodo != nodo;
}

template<typename T>
Iteradorlist<T>::~Iteradorlist{}