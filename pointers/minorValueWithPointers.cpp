#include <iostream>

using namespace std;

int main(int argc, char** argv) {

	int nums[10], *memDir;
	
	for(int i = 0 ; i < 10 ; i++){
		cin>>nums[i];
	}
	int minorValue = nums[0];
	memDir = nums;
	for(int i = 0; i < 10 ; i++){
		if(minorValue > *memDir){
			minorValue = *memDir;
			
		}
		memDir++;
	}
	cout<<"\nMinor Value\t"<<minorValue<<" "<<&minorValue;

    return 0;
}
