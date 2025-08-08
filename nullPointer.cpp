#include <iostream>
using namespace std;

int main(){

    int *pointer = nullptr;
    
    int x = 123;
    
    // pointer = &x;

    if(pointer == nullptr){
        cout<<"The pointer dic isnt asigment";
        cout<<*pointer;
    }else{
        cout<<"Pointer was asigment: "<<*pointer;
    }

    return 0;
}