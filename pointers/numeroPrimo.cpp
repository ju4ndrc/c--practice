#include <iostream>

using namespace std;

int main(int argc, char** argv) {


	int number,*number_dir;
	cin>>number;
	number_dir = &number;
	bool is_cousin = true;
	for(int i = 2 ; i < *number_dir ; i++){	
		if(*number_dir % i == 0 ){
			is_cousin = false;
			break;
		}
	}
	if(is_cousin){
		
		cout<<"Primo "<<*number_dir<<"\n";
		cout<<number_dir;
		
	}
    return 0;
}
