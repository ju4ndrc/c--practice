#include <iostream>
#include <string>
using namespace std;

struct Persona{
	string name;
	int age;
};

Persona p1;
void data(){
	cout<<"Introduce your name\n";
	getline(cin,p1.name);
	cout<<"Introduce your age\n";
	cin>>p1.age;
}

void showData(Persona p){
	cout<<p.name<<"\n";
	cout<<p.age<<"\n";
}

int main(int argc, char** argv) {
	
	data();
	showData(p1);
	
    return 0;
}
