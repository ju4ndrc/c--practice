#include <iostream>
#include <stdlib.h>

using namespace std;

int elements, *numbers;

void get_numbers(){
	
	cout<<"\t Numbers quantity \n";
	
	cin>>elements;
	
	numbers = new int [elements];
	
	
	
}

void fill_array(){
	for(int i = 0 ; i < elements ; i ++){
		cout<<"\t Introduce numbers \n";
		cin>>*(numbers+i);
	}
	
}

void show_array(){
	
	for(int i = 0 ; i < elements;i++){
		cout<<"\t"<<numbers[i]<<"\t";
	}
	
}
void order_array(){
	int aux ;
	for (int i = 0 ; i < elements  ; i ++){
		for(int j = 0 ; j < elements - 1 ; j++){
			if(*(numbers+j) > *(numbers+j+1)){
				swap(*(numbers+j),*(numbers+j+1));
			}
			
		}
	}
}


int main(int argc, char** argv) {
	
	get_numbers();
	fill_array();
	show_array();
	order_array();
	cout<<"\n";
	show_array();
    return 0;
}
