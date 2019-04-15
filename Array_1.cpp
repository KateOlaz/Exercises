#include <iostream>
using namespace std;
// Array Operations 6.1

void printArray(const int arr[],const int len){
     for(int i=0;i<len;++i){
         cout<<arr[i];
         if(i<len-1){
           cout<<",";
         }
     }
}

int main(){
	int arr[]={1,2,3,4};
	printArray(arr,4);
	return 0;
}
