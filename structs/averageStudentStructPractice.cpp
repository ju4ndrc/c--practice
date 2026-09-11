
#include <iostream>
#include <string>
#include <vector>

using namespace std;


struct Aveg{
	
	float n1;
	float n2;
	float n3;
	
};
struct Student{
	string name;
	int age;
	Aveg student;
};

int main(int argc, char** argv) {

	vector <Student> students;
	
	int op = 0;
	cout<<"\n Press 1 to new student \t Press 0 to exit \n";
	cin>>op;
	cin.clear();
	cin.ignore(50,'\n');
	while(op != 0){
		Student student;
		cout<<"\nIntroduce the student name\n";
		getline(cin,student.name);
		cout<<"\nIntroduce the student age\n";
		cin>>student.age;
		cin.clear();
		cin.ignore(50,'\n');
		cout<<"\nIntroduce the student not1,not2,not3\n";
		cin>>student.student.n1>>student.student.n2>>student.student.n3;
		cin.clear();
		cin.ignore(50,'\n');
		students.push_back(student);
		cout<<"\n Press 1 to new student \t Press 0 to exit \n";
		cin>>op;
		cin.clear();
		cin.ignore(50,'\n');
	}
	int studentIndex = 0;
	float aveg = 0 ,max= 0 ;
	cout<<"\n All students register \n";
	for(size_t i = 0 ; i < students.size() ; i++ ){
		cout<<students[i].name<<"\n";
		cout<<students[i].student.n1<<"\n";
		cout<<students[i].student.n2<<"\n";
		cout<<students[i].student.n3<<"\n";
		aveg = (students[i].student.n1 + students[i].student.n2 + students[i].student.n3) / 3;
		cout<<"Student Average:"<<aveg<<"\n";
		if(aveg > max){
			max = aveg;
			studentIndex=i;
		}
	}
	cout<<"\n";
	cout<<"\n----------------------------------------------------------Honor mension for----------------------------------------------------------\n";
	cout<<students[studentIndex].name<<"\n";
	cout<<students[studentIndex].age<<"\n";
	cout<<students[studentIndex].student.n1<<"\n";
	cout<<students[studentIndex].student.n2<<"\n";
	cout<<students[studentIndex].student.n3<<"\n";
	cout<<"Average \n"<<max<<"\n";
	

    return 0;
}
