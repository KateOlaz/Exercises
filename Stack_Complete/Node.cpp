#include "Node.h"

//constructor
template<class T>
Node<T>::Node(T _dato)
{
    next=NULL;
    dato = _dato;
}
//Establece el puntero al nodo siguiente
template<class T>
void Node<T>::setSiguiente(Node<T>* _siguiente)
{
    next = _siguiente;
}

template<class T>
void Node<T>::setDato(T _dato)
{
    dato = _dato;
}
//se obtiene el puntero al siguiente
template<class T>
Node<T>* Node<T>::getSiguiente()
{
    return next;
}
//se obtiene el contenido del nodo
template<class T>
T Node<T>::getDato()
{
    return dato;
}