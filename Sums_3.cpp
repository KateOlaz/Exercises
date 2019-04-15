#include <iostream>
using namespace std;

//Sums 4.3

int sum(const int p, const int q){
	return p + q;
}

int sum(const int x, const int y, const int z){
	return x + y + z;
}

int main(){
	cout<< sum(2,6,3);
	return 0;
}
