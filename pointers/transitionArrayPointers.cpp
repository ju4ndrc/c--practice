#include <iostream>

using namespace std;

void show_max(int *dir_vec,const int  *nElements){
	int max = 0;
	
	for(int i = 0 ;  i < *nElements ; i ++){
		cout<<dir_vec+i<<"\n";
		if(*(dir_vec+i)>max){
			max = *(dir_vec+i);
					}
	}
	cout<<max<<&max;
}

int main(int argc, char** argv) {

	const int nElements = 5;
	int numbers[nElements] = {10,5,2,56,1};
	show_max(numbers, &nElements);
	
    return 0;
}
