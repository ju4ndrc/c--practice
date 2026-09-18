#include <iostream>

using namespace std;


struct Complex{
	float real, imag;
		
};

Complex z1,z2;

void getData(){
	cout<<"Real y imaginario\n";
	cin>>z1.real;
	cin>>z1.imag;
	cout<<"2 - > Real y imaginario\n";
	cin>>z2.real;
	cin>>z2.imag;
	
}

Complex sum(Complex z1, Complex z2){
	
	z1.real  += z2.real;
	z1.imag += z2.imag;
	return z1;
}
void showResult(Complex result){
	cout<<"\nresult\n";
	cout<<result.imag<<"i"<<"\n";
	cout<<result.real<<"\n";
}
int main(int argc, char** argv) {
	getData();
	
	Complex result  = sum(z1,z2);
	
	showResult(result);
	
    return 0;
}
