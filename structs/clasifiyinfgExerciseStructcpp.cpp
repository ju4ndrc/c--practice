#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Person{
	string name;
	bool matrix;
	
};

int main(int argc, char** argv) {

	vector <Person> simulation;
	vector <Person> predatorsTeam;
	
	int op = 0;
	cout<<"\n Press 1 to new person \t Press 0 to exit \n";
	cin>>op;
	cin.clear();
	cin.ignore(50,'\n');
	
	while(op != 0){
		Person person;
		cout<<"Introduce the person name:\n";
		getline(cin,person.name);
		cout<<"Is this person in the matrix?:\n";
		cin>>boolalpha>>person.matrix;
		cin.clear();
		cin.ignore(50,'\n');
		if(person.matrix){
			predatorsTeam.push_back(person);
		}else{
			simulation.push_back(person);
		}
			cout<<"\n Press 1 to new person \t Press 0 to exit \n";
		cin>>op;
		cin.clear();
		cin.ignore(50,'\n');
	}
	
	cout<<"\nPredators\n";
	for(const auto& p : predatorsTeam){
		cout<<p.name<<"\n";
		
	}
	cout<<"\nSimulation\n";
	for(const auto& p : simulation){
		cout<<p.name<<"\n";
		
	}

    return 0;
}
