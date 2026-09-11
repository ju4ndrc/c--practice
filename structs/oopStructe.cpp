#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Animal{
	string type;
	string name;
	int age;
}an1;

struct InfoDir{
	string address;
	string city;
	string state;
};
struct Employa{
	string name;
	double salary;
	InfoDir address; 
};

int main(int argc, char** argv) {
	cout<<"animal name";
	getline(cin, an1.name);
	getline(cin, an1.type);
	cout<<"Name:"<<an1.name<<" Type:"<<an1.type;
	
	vector <Employa> employees(2);
	
	for(size_t i = 0 ; i <= employees.size()-1 ; i++){
	
		cout<<"\nName\n";
		getline(cin,employees[i].name);
		cout<<"\n Salary \n";
		cin>>employees[i].salary;
		cin.clear();
		cin.ignore(80,'\n');
		cout<<"\nAddress\n";
		getline(cin,employees[i].address.address);
		cout<<"\n City\n";
		getline(cin,employees[i].address.city);
		cout<<"\n state\n";
		getline(cin,employees[i].address.state);
		
		
	}
	
	for(const auto& p : employees){
		cout<<p.name<<"\n";
		cout<<"\n Aqui se ve la anidacion \t"<<p.address.city<<"\n";
		cout<<"\n Aqui se ve la anidacion \t"<<p.address.state<<"\n";
		cout<<p.salary<<"\n";
	}
	
	
	
    return 0;
}
