#include <iostream>

using namespace std;

int main(int argc, char** argv) {

	int numbers [] = {1,2,3,4,5,6};
	
	int *elements = numbers;

	for(int i = 0; i < 6;i++){
		cout<<"posicion en memoria del vector\t"<<numbers[i]<<"\t"<<elements++<<"\n";
	}
	
	
	

    return 0;
}
