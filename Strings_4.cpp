#include <iostream>
using namespace std;
// Pointers and Strings 7.4

void swap(int **x,int **y){
	int *tmp=*x;
	*x=*y;
	*y=tmp;
}
int main(){
	int x=4;
	int y=7;	
	swap(x,y);
	cout<<x;
    return 0;
}
