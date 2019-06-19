#include "cola.h"


template<class T>
Cola<T>::Cola()
{
    raiz = NULL;
    fondo = NULL;
}
template<class T>
Cola<T>::~Cola()
{
    Node<T> *aux = raiz;
    Node<T> *bor;
    while (aux != NULL)
    {
        bor = aux;
        aux = aux->next;
        delete bor;
    }
}
template<class T>
void Cola<T>::insertar(T x)
{
    Node<T> *nuevo;
    nuevo = new Node<T>(x);
    nuevo->setDato(x);
    nuevo->setSiguiente(NULL);
    if (vacia())
    {
        raiz = nuevo;
        fondo = nuevo;
    }
    else {
        fondo->setSiguiente(nuevo);
        fondo = nuevo;
    }
}
template<class T>
int Cola<T>::extraer()
{
    if (!vacia())
    {
        T informacion = raiz->getDato();
        Node<T> *bor = raiz;
        if (raiz == fondo)
        {
            raiz = NULL;
            fondo = NULL;
        }
        else
        {
            raiz = raiz->getSiguiente();
        }
        delete bor;
        return informacion;
    }
    else
        return -1;
}
template<class T>
void Cola<T>::imprimir()
{
    Node<T> *aux = raiz;
    cout << "Listado de todos los elementos de la cola"<<endl;
    while (aux != NULL)
    {
        cout << aux->getDato() << " ";
        aux = aux->getSiguiente();
    }
    cout <<endl;
}
template<class T>
bool Cola<T>::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}