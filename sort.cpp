#include <iostream>
using namespace std;

void clasify(int arr[],int size);

int main()
{

    int arr[]={10,1,9,2,8,3,7,4,6,5};

    int size = sizeof(arr)/sizeof(int);

    clasify(arr,size);

    for(int i : arr){
        cout<<i<<" ";  
    }
    
    return 0;
}

void clasify(int arr[],int size){

    int temp;
    for(int i = 0 ; i < size - 1 ; i++){
        for(int j = 0; j< size-i-1;j++){
            if(arr[j] < arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[ j + 1];
                arr[j+1] = temp;
            }
        }
    }


}