#include <iostream>
#include <vector>
using namespace std;

template <typename T>
/*
void sig_change(vector <T>& nums){
	for(size_t i = 0 ; i < nums.size() ; i++){
		
		nums[i] = nums[i] * -1;
	}
	for(const auto& p : nums){
		cout<<p<<"\n";
	}
}
*/

void show_elements(vector <T>& nums){
	
	for(const auto& p : nums){
		if( p % 2 != 0)
			cout<<p<<"\n";
	}
}

int main(int argc, char** argv) {

	vector <int> numbers  {4 ,-4,4,8,7};
	show_elements(numbers);
    return 0;
}
