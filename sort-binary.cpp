#include <iostream>
using namespace std;

void clasify(int arr[],int siz);
void find(int arr[],int number,int size);

int main(){

    int array[]={10,1,9,2,8,3,7,4,6,5};
    // aqui esta deshordenado

    int size = sizeof(array)/sizeof(int);

    
    clasify(array,size);

    cout<<"Ordered";

    for(int i  : array){
        cout<<" "<<i<<"";
    }

    int value;

    cout<<"Which number?";
    cin>>value;
    find(array,value,size);
    
    return 0;
}

void find(int arr[],int number,int size){

    int start = 0;
    int midle = 0;
    bool band = false;

    while (start <= size && band == false){
        midle = (start + size)/2;
        if( number == arr[midle]){
            band = true;
            cout<<"finded";
            break;
        }if(number < arr[midle]){
            size = midle - 1;

        }if(number > arr[midle]){
            start = midle + 1;
        }
         
    }

    if(band == true){
        cout<<endl<<"This is the index of this number "<<midle<<endl;

    }else{
        cout<<"We cant find it ";
    }
    
}

void clasify(int arr[], int siz){

    int temp;

    for (int i = 0; i < siz -1; i++){
        for (int j = 0; j < siz -i -1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp; 

            }
        }
        
    }
    



}
