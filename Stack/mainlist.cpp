#include <iostream>
 
#include "list.h"
#include "list.cpp"

using namespace std;
 
int main()
{
    Pila<int> Pila1;
    Pila1.CrearPila();
    Pila1.InsertarPila(1);
    Pila1.InsertarPila(2);
    Pila1.InsertarPila(3);
    //cout<<Pila1.TopePila()->dato<<endl;
    cout<<Pila1.TopePila()<<endl;
    Pila1.imprimirPila();
    
    //Pila1.EliminarPila();
    //Pila1.imprimirPila();
    //Pila1.EliminarTodo();
    //Pila1.imprimirPila();
    return 0;
}
