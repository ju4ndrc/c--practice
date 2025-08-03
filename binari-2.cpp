#include <iostream>
using namespace std;

void binarySearch(int arr[], int n);

int main()
{

    int binariS, arraySize, number, arr [] = {221,223,225,227,336};
    
    cout<<endl<<"Introduce number:"<<endl;

    cin>>number;

    cout<<endl;

    binarySearch(arr,number);


    return 0;
}

void binarySearch(int arr[], int n){

    int midle, size ,first;
    
    first = 0;

    size = sizeof(arr)/sizeof(int);

    bool finded = false;

    while(first <= size && finded == false ){
        midle = (first + size)/2;

        if(n == arr[midle]){
            finded = true;
            cout<<endl<<"The number was finded"<<endl;
            break;

        }if(n < arr[midle])
        {
            size = midle - 1;

        }if(n > arr[midle]){
        
            first = midle +1;

        }
        
        

    }

    if(finded == true){
        cout<<endl<<"index:"<<midle;
    }else{
        cout<<"not finded";
    }
     

}