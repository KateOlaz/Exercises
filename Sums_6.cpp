#include <iostream>
using namespace std;

//Sums 4.6
int sum(const int numbers[], const int numbersLen){
	return numbersLen == 0 ? 0 : numbers[0] + sum(numbers + 1, numbersLen-1);
}

int main(){
int x;
int numbers[]={1,2,3,4,5};
int numbersLen= x;
cin>>x;
cout<<sum(numbers,x);

return 0;
}


