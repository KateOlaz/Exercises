#include "list.h"

template<typename T>
Node<T>* Pila<T>::CrearPila()
{
    return head=NULL;
}

template<typename T>
bool Pila<T>::pilaVacia()
{
    if(head==NULL);
}

//TOP
template<typename T>
T Pila<T>::TopePila()
{
    return head->dato;
}

// PUSH
template<typename T>
Node<T>* Pila<T>::InsertarPila(T valor)
{
    Node<T> *newNode = new Node<T>(valor);
    if(newNode!=NULL)
    {
        newNode->dato=valor;
        newNode->next=head;
        head=newNode;
    }
    return head;
}
// POP
template<typename T>
Node<T>* Pila<T>::EliminarPila()
{
    Node<T> *NodeAux;
    if(!pilaVacia())
    {
        NodeAux=head;
        head=head->next;
        delete(NodeAux);
    }
    return head;
}

// Imprimir Pila
template<typename T>
void Pila<T>::imprimirPila()
{
    Node<T> *NodeAux;
    NodeAux=head;
    cout<<endl<<"Contenido de la pila"<<endl;
    while(NodeAux!=NULL)
    {
        cout<<NodeAux->dato;
        NodeAux=NodeAux->next;
    }
    cout<<" " <<endl;
}

template<typename T>
Node<T>* Pila<T>::EliminarTodo()
{
    while(head!=NULL)
    {
        Node<T> *NodeAux;
        NodeAux=head;
        head=head->next;
        delete(NodeAux);
    }
    cout<<"Eliminación exitosa"<<endl;
}

template<typename T>
Pila<T>::~Pila() {}
