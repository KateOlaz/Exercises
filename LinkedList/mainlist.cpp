#include <iostream>
 
#include "list.h"
#include "list.cpp"
 
using namespace std;
 
int main()
{
    LinkedList<int> list1;

    int ele;
    int dim;
    int pos;
    int n;
 
    cout << "Ingresa la dimensión de la lista: " << endl;
    cin >> dim;
 
    cout << "Agrega un elemento " << endl;
    cin >> ele;
    list1.insertar_inicio(ele);
    list1.lista(dim);
    list1.imprimir();

    cout<<"Nuevo elemento a insertar: "<<endl;
    cin>>n;
    list1.insertar_final(n);
    list1.imprimir();

    cout<< "que elemento desea buscar: "<< endl;
    cin>>pos;
    list1.buscar(pos);
    
    

    list1.eliminar_todo();

    return 0;
}




//Material de Guía: https://ronnyml.wordpress.com/2009/07/04/listas-enlazadas-clase-lista-en-c/
