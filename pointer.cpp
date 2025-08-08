#include <iostream>
using namespace std;

int main(){

    string freePizzas [5] = {"PIZZA_1","PIZZA_2","PIZZA_2.5","PIZZA_3","PIZZA_4",};
    
    string *fPizza = freePizzas;

    string name = "Juan";

    int age = 5;

    int *pAge = &age;

    cout<<"\n Edad\n"<<*pAge;

    string *pName = &name;
    
    cout<<"\n"<<*pName <<endl;
    
    for (int i = 0; i < 5; i++){

        cout<< *(fPizza + i)<< " ";
    
    }
    

    return 0;
}