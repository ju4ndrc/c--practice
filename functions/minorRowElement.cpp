#include <iostream>

using namespace std;


void minusElement(int matrix[][3],int row){
		int minor = matrix[row][0];
		
		for(int i = 0 ; i < 3 ; i ++){
			
			if(minor > matrix[row][i]){
				minor = matrix[row][i];
			}
		
		}
		
		
		cout<<"\nMinor value:"<<minor;
}


int main(int argc, char** argv) {
	int matrix [3][3] = {
		{5,1,4},
		{1,2,-3},
		{4,-3,8}
	};
	
	minusElement(matrix,2);
    return 0;
}
