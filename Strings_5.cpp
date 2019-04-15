#include <iostream>
using namespace std;
// Pointers and Strings 7.5

void imprimir(char *oddOrEven){
	char *nthCharPtr= &oddOrEven[5];
	nthCharPtr = oddOrEven+3;
	cout<< *nthCharPtr<<endl;
	char **pointerPtr = &nthCharPtr;
	cout<< pointerPtr<<endl;
	cout<< **pointerPtr<<endl;
	nthCharPtr++; //to point to the next character in oddOrEven	(one character past the location it currently points to)
	cout<< nthCharPtr - oddOrEven<<endl;
}
int main(){
	char oddOrEven[]="Never odd or even";
	imprimir(oddOrEven);
	return 0;
}
