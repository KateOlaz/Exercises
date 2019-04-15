#include <iostream>
using namespace std;

//Sums 4.5
int sum(const int numbers[], const int numbersLen){
	int sum=0;
	for(int i=0; i<numbersLen; ++i){
		sum+=numbers[i];
	}
	return sum;
}

int main(){
int x;
int numbers[]={1,2,3,4,5};
int numbersLen= x;
cin>>x;
cout<<sum(numbers,x);

return 0;
}
