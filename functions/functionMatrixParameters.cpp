#include <iostream>

using namespace std;



void showMatrix(int matrix[][3],int r,int c){
	
	cout<<"\n Original matrix \n";
	
	for(int i = 0 ; i < r ;i ++){
		for(int j = 0 ; j < c ;j ++){
			cout<<matrix[i][j]*matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main(int argc, char** argv) {

	const int rows = 2,  colums = 3;
 	
	int m[rows][colums]={
	{1,2,3},
	{4,5,6}
	}; 
 	
	showMatrix(m,rows, colums);
 	
    return 0;
}
