#include <iostream>
using namespace std;
// Pointers and Strings 7.1

int stringLength(char *a){
    int tam=0;
    while(*(a+tam)!='\0'){
         ++tam;
    }
    return tam;
}
int main(){
    char a[]="hola";
    cout<< stringLength(a)<<endl;
    return 0;
}
