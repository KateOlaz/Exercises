#include<iostream>
using namespace std;

int main(){
	int numeros[] = {3,4,2,1,5};
	int i, pos, aux;
	for( i = 0 ; i < 5 ; i++) { //Recorrer el arreglo
		pos = i;
		aux = numeros[i];
		while((pos>0) && (numeros[pos-1] > aux)){
			numeros[pos] = numeros[pos-1];
			pos--;
		}
	numeros[pos] = aux;
	}
	cout<<"Orden Ascendente: ";
	for( i = 0 ; i < 5 ; i++) {
		cout<<numeros[i]<<" ";
	}
	cout<<"\nOrden Descendente: ";
	for( i = 4 ; i >= 0 ; i--) {
		cout<<numeros[i]<<" ";
	}
	return 0;
}
