#include <iostream>

using namespace std;

void writeNumbers(int ini, int end){
	cout<< ini <<  " ";
	if(ini == end){
// hand break for funtions
		return ; 
	}
	writeNumbers(ini + 1 , end);
}

int main(int argc, char** argv) {
	
	
	int ini = 3 , end = 7;
	

	writeNumbers(ini,end);
	

    return 0;
}
