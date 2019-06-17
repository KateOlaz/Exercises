#include <iostream>
 
#include "list.h"
#include "list.cpp" 
#include "iteradorlist.h"

using namespace std;
 
int main()
{
    LinkedList<int> list1;

    list1.insertar_inicio(1);
    list1.insertar_final(2);
    list1.insertar_final(3);
    list1.insertar_final(4);

    list1.imprimir();

    cout<<"display the list with iterators"<<endl;
	Iteradorlist<int> start = list1.begin();
	Iteradorlist<int> end = list1.end();
	cout << "Displaying List with external iterators" << endl;
	while (start != end)
	{
		cout << *start << " ";
		++start;
	}
cout << endl << endl;

    return 0;
}





//Material de Guía: https://ronnyml.wordpress.com/2009/07/04/listas-enlazadas-clase-lista-en-c/
