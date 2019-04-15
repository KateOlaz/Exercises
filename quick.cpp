#include <iostream>
using namespace std;

#define T 100
//Funcion para ordenar lista de números
void quickSort(int A[T], int primero, int ultimo){
	int central, i, j, pivote;
	central=(primero+ultimo)/2;
	pivote=A[central];
	i=primero;
	j=ultimo;
	do{
		while(A[i] < pivote) i++;
		while(A[j] > pivote) j++;
		if(i<=j){
			int temp;
			//Intercambio de Valores
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
			i++;
			j--;

	}while(i<=j);

	if(primero<j)
		quickSort(A, primero, j);
	if(i<ultimo)
		quickSort(A, i, ultimo);
}

void mostrarOrden(int A[T], int n){
	cout<<"Elementos de array ordenados"<<endl;
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}



int main(){
	int n, A[T];
	cout<<"Tamaño del Arreglo: ";
	cin>>n;
	cout<<"Ingrese los elementos del arreglo"<<endl;
	for(int i=0;i<n;i++){
		cout<<"A["<<i<<"] = ";
		cin>>A[i];
	}
	cout<<"Elementos ingresados del arreglo"<<endl;
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	quickSort(A, 0, n-1);
	mostrarOrden(A, n);
	return 0;
}


