#include "Node.h"

//Constructor por defecto
template<typename T>
Node<T>::Node()
{
    dato = NULL;
    next = NULL;
}
 
// Constructor por parámetro
template<typename T>
Node<T>::Node(T valor)
{
    dato = valor;
    next = NULL;
}

// Imprimir un Nodo
template<typename T>
void Node<T>::imprimir()
{
    //cout << "Node-> " << "Dato: " << dato << " Direcion: " << this << " Siguiente: " << next << endl;
    cout << dato << "-> ";
}
 
// Eliminar todos los Nodos
template<typename T>
void Node<T>::borrar_todo()
{
    if(next)
        next->borrar_todo();
    delete this;
}
 //Destructor
template<typename T>
Node<T>::~Node() {}