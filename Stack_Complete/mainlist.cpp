#include <iostream>
 
#include "list.h"
#include "list.cpp"
#include "cola.h"
#include "cola.cpp"

using namespace std;
 
int main()
{
    Pila<int> Pila1;
    Pila1.CrearPila();
    Pila1.InsertarPila(1);
    Pila1.InsertarPila(2);
    Pila1.InsertarPila(3);
    Pila1.InsertarPila(4);
    Pila1.InsertarPila(5);

   
    cout<<Pila1.TopePila()<<endl;
    Pila1.imprimirPila();
    
    Pila1.EliminarPila();
    Pila1.imprimirPila();

    Pila1.EliminarPila();
    Pila1.imprimirPila();

    Pila1.EliminarTodo();
    //Pila1.imprimirPila();

    Cola<int> cola1;
    cola1.insertar(1);
    cola1.insertar(2);
    cola1.insertar(3);
    cola1.insertar(4);
    cola1.imprimir();
    cout <<"Extraemos uno de la cola:" <<endl;
    cola1.extraer();
    cola1.imprimir();
    cola1.insertar(5);
    cola1.imprimir();
    
    return 0;

}

//Material de Guia: https://www.youtube.com/watch?v=b2BdjkVGn8A
//Material de Guia: https://www.tutorialesprogramacionya.com/cmasmasya/detalleconcepto.php?punto=38&codigo=169&inicio=30