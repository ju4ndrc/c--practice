#include <iostream>

using namespace std;

int elevated(int x, int y){
	if(y == 1){
		return x;
	}
	return (x * elevated(x,y-1));
}

int main(int argc, char** argv) {

	int x = 5, y = 2;
	
	cout<<elevated(x,y);

    return 0;
}
