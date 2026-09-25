#include <iostream>

using namespace std;




int main(int argc, char** argv) {
	
	int nums[10], *memDir;
	
	for(int i = 0 ; i < 10 ; i++){
		cin>>nums[i];
	}
	memDir=nums;
	for(int i = 0 ; i < 10 ; i++){
		if(*memDir % 2 == 0){
			cout<<" \t NUMERO PAR \n"<<*memDir<<"\t"<<memDir<<"\n";
		}
		memDir++;
	}
	

    return 0;
}
