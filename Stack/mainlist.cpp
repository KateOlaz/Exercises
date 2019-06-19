#include <iostream>

#include "list.h"
#include "list.cpp" 
#include "iteradorlist.h"
#include "iteradorlist.cpp"

using namespace std;
 
int main()
{
    LinkedList<int> list1;

    list1.insertar_inicio(1);
    list1.insertar_final(2);
    list1.insertar_final(3);
    list1.insertar_final(4);

    list1.imprimir();


    //cout << "mylist contains:";
    //Iteradorlist<int> it = list1.inicio();
    //while(it.existe_elementos())
    //{
    //    cout<< (*it) << " ";
    //    it++;
    //}

    cout<<"ITERADOR"<<endl;
	Iteradorlist<int> iterador;
    for(iterador = list1.inicio(); iterador != list1.end() ; iterador++)
    {
        cout<< (*iterador) << " ";
    }
    return 0;
}