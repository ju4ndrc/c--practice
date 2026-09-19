#include <iostream>

using namespace std;

int recursiveSum(int sum){
	if(sum == 1){
		return 1;
	}else{
		return (sum + recursiveSum( sum - 1));
	}
}

int main(int argc, char** argv) {
	
	int sum = 5;
	cout<<recursiveSum(sum);

    return 0;
}
