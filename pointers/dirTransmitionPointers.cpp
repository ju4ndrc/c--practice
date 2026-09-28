#include <iostream>

using namespace std;


void swap_number(float *n1,float *n2){
	
	float aux ;
	
	aux = *n1;
	*n1 = *n2;
	*n2 = aux;
	
}

int main(int argc, char** argv) {
	float num = 20.8 , num1 = 6.78;
	
	cout<<"Primer numero:"<<num<<"\n";
	cout<<"Segundo numero:"<<num1<<"\n";
	swap_number(&num,&num1);
	cout<<"Primer numero:"<<num<<"\n";
	cout<<"Segundo numero:"<<num1<<"\n";
	
    return 0;
}
