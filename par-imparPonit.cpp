#include <iostream>
using namespace std;

int main(){

    int par, *number = NULL;

    number = new int;

    cout<<endl<<"Introduce a number:\n";
    
    cin>>par;

    number = &par;

    cout<<"\n New asigment \n"<<*number;
    if(*number % 2 == 0){

        cout<<"\nEs par \n";
        cout<<*number;
    }else{
        cout<<"\nNo es par \n";
        cout<<*number;
    }

    delete number;

    cout<<"The memory is free:"<<*number;

    return 0;
}
