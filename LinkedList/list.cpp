#include "list.h"

template<typename T>
LinkedList<T>::LinkedList()
{
    size = 0;
    head = NULL;
}
//insertar al inicio
template<typename T>
void LinkedList<T>::insertar_inicio(T valor)
{
    Node<T> *newNode = new Node<T>(valor);
    Node<T> *temp = head;
 
    if (!head) 
    {
        head = newNode;
    } 
    else 
    {
        newNode->next = head;
        head = newNode;
        while (temp) 
        {
            temp = temp->next;
        }
    }
    size++;
}

// Insertar al final
template<typename T>
void LinkedList<T>::insertar_final(T valor)
{
    Node<T> *newNode = new Node<T> (valor);
    Node<T> *temp = head;
 
    if (!head) {
        head = newNode;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    size++;
}
// Llenar la Lista por teclado
template<typename T>
void LinkedList<T>::lista(int dim)
{
    T ele;
    for (int i = 0; i < dim; i++) {
        cout << "Ingresa el elemento " << i + 1 << endl;
        cin >> ele;
        insertar_final(ele);
    }
}

// Buscar el dato de un nodo
template<typename T>
void LinkedList<T>::buscar(T valor)
{
    Node<T> *temp = head;
    int cont = 1;
    int cont2 = 0;
 
    while (temp) {
        if (temp->dato == valor) {
            cout << "El dato se encuentra en la posición: " << cont << endl;
            cont2++;
        }
        temp = temp->next;
        cont++;
    }
 
    if (cont2 == 0) {
        cout << "No existe el dato " << endl;
    }
    cout << endl << endl;
}
// Imprimir la Lista
template<typename T>
void LinkedList<T>::imprimir()
{
    Node<T> *temp = head;
    if (!head) {
        cout << "La Lista está vacía " << endl;
    } else {
        while (temp) {
            temp->imprimir();
            if (!temp->next) cout << "NULL";
                temp = temp->next;
        }
  }
  cout << endl << endl;
}

// Eliminar por data del nodo
template<typename T>
void LinkedList<T>::eliminar(T valor)
{
    Node<T> *temp = head;
    Node<T> *temp1 = head->next;
 
    int cont = 0;
 
    if (head->data == valor) 
    {
        head = temp->next;
    } 
    else {
        while (temp1) {
            if (temp1->data == valor) {
                Node<T> *aux_node = temp1;
                temp->next = temp1->next;
                delete aux_node;
                cont++;
                size--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
 
    if (cont == 0) {
        cout << "No existe el dato " << endl;
    }
}

// Eliminar todos los nodos
template<typename T>
void LinkedList<T>::eliminar_todo()
{
    head->borrar_todo();
    head = 0;
}

template<typename T>
LinkedList<T>::~LinkedList() {}