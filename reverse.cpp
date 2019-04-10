#include <iostream>
using namespace std;
// Array Operations 6.5

void reverse(int numbers[],const int numbersLen){
      for(int i=0;i<numbersLen/2;++i){
         int tmp=*( numbers + i);
         int indexFromEnd = numbersLen- i- 1;
         *( numbers + i)= *( numbers + indexFromEnd);
         *( numbers + indexFromEnd)=tmp;
      }
	for(int i=0;i<numbersLen;++i){
        cout<<numbers[i];
        if(i < numbersLen-1){
          cout<<",";
        }
    }
}
int main(){
    int numbers[]={1,2,3,4};
    reverse(numbers,4);
    return 0;
}
