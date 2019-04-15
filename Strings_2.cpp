#include <iostream>
using namespace std;
// Pointers and Strings 7.2

void swap(int &x,int &y){
	int tmp=x;
	x=y;
	y=tmp;
}
int main(){
	int a=4;
	int b=7;	
	swap(a,b);
	cout<<a;
    return 0;
}
