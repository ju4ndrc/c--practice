#include <iostream>

using namespace std;
struct Dates{
	int days;
	int months;
	int year;	
};

void mostRecentDate(Dates d1,Dates d2){

	int date1 = d1.year*365 + d1.months*30 + d1.days;
	int date2 = d2.year*365 + d2.months*30 + d2.days;
	if(date1 == date2){
		cout<<"Fechas iguales";
		
	}else if(date1> date2){
		cout<<d1.days<<"/"<<d1.months<<"/"<<d1.year<<"\n";
	}else{
		cout<<d2.days<<"/"<<d2.months<<"/"<<d2.year<<"\n";
	}
}
 
int main(int argc, char** argv) {

	Dates date1 , date2;
	cin>>date1.days>>date1.months>>date1.year;
	cin>>date2.days>>date2.months>>date2.year;
	mostRecentDate(date1,date2);


    return 0;
}
