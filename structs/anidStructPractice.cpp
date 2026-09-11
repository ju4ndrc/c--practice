#include <iostream>

using namespace std;


struct Runner{
	
	string name;
	
	int age;
	
	string club;
	
	string categ;	
	
};


int main(int argc, char** argv) {
	Runner ruijerd;
	
	string young = "young";
	string senior = "senior";
	string exp = "experimented";
	int age;
	
	cout<<"Introduce runners name:\n";
	getline(cin, ruijerd.name);
	cout<<"\nIntroduce runners age\n";
	cin>>age;
	cin.clear();
	cin.ignore(10,'\n');
	ruijerd.age = age;
	if(age> 40){
		ruijerd.categ=exp;
	}else if(age <= 40){
		ruijerd.categ=senior;
	}else if(age >= 18){
		ruijerd.categ=young;		
	}
	
	cout<<"\nIntroduce runners club\n";
	getline(cin, ruijerd.club);

	cout<<"\n RUNNERS DATA \n";
	cout<<ruijerd.name<<"\n";
	cout<<ruijerd.categ<<"\n";	
	cout<<ruijerd.age<<"\n";
	cout<<ruijerd.club<<"\n";
    return 0;
}
