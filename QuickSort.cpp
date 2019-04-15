#include <iostream> 
#define T 100 

using namespace std; 

void mostrarOrden(int [T], int); 
void quicksort(int [T], int, int); 

int main(){ 
	int n, A[T]; 
	cout<<"Numero de elementos del array: ";
	cin>>n; cout<<"Ingrese elementos del array: "<<endl;
	for(int i = 0; i < n; i++){ 
		cout<<"A["<<i<<"] = ";
	 	cin>>A[i]; } 
	cout<<"Elementos ingresados del array: "<<endl;
	for(int i = 0; i < n; i++){  
		cout<<A[i]<<" "; 
		} 
	cout<<endl; 
	quicksort(A, 0, n - 1); 
	mostrarOrden(A, n); 
	return 0; 
} 

void mostrarOrden(int A[T], int n){
	cout<<"Elementos del array ordenados ascendentemente: "<<endl; 
	for(int i = 0; i < n; i++){ 
		cout<<A[i]<<" "; 
		} 
		cout<<endl; 
}  

void quicksort(int A[T], int primero, int ultimo){ 

	int central, i, j, pivote; 
	central = (primero + ultimo)/2;     			//posicion central del array 
	pivote = A[central];   					//capturar valor del medio del array
	i = primero; 
	j = ultimo; 
	do{  
		while(A[i] < pivote) i++;      			//separando valores menores del pivote
		while(A[j] > pivote) j--;      			//separando valores mayores del pivote 
		if(i <= j){ 
			int temporal; 
			temporal = A[i]; 
			A[i] = A[j]; 
			A[j] = temporal; 
			i++; 
			j--; 
		} 
	} while(i<=j); 
	if(primero < j) 
		quicksort(A, primero, j); 
	if(i < ultimo) 
		quicksort(A, i, ultimo); 
}
