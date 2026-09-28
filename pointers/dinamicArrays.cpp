#include <iostream>
#include <stdlib.h>


using namespace std;

int numCalif , * calif;

void for_key(){
	
	cout<<"Num de calificaciones\n";
	
	cin>>numCalif;
	
	calif = new int [numCalif];
	
	for(int i = 0 ; i < numCalif ; i++ ){
		cout<<"Ingrese una nota";
		cin>>calif[i];
	}
}

void show_notes(){
	cout<<"\t Mostras notas \n";
	for(int i = 0 ; i < numCalif;i++){
		cout<<calif[i]<<endl;
	}
}

int main(int argc, char** argv) {
	
	for_key();
	show_notes();

	delete[] calif; //free memory bytes

    return 0;
}
