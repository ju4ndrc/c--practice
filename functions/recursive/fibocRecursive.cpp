#include <iostream>

using namespace std;

	
int fibonc(int num ){
	if(num <= 1){
		return num;
	}
	
	return (fibonc(num-1) + fibonc(num-2))  ;
}

int main(int argc, char** argv) {

	int n = 5;
	for(int i = 0 ; i <= n ; i++){
		cout<<fibonc(i)<<" ";
	}
    return 0;
}
