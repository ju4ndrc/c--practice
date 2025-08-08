#include <iostream>
using namespace std;

void print(const string name, const int age);


int main(){

    string nombre = "Jaun";
    int age = 24;
    
    print(nombre,age);

    return 0;
}

void print(const string name, const int age){

    cout<<"\nName:"<<name<<endl;
    cout<<"\nAge:"<<age<<endl;

}