#include <iostream>
using namespace std;

// int findArray (int nums[],int sup,int dato);

int main(){

    int inf,sup,mitad,dato, nums []= {1,2,3,4,5,6};

    char band = 'f';

    cout<<endl<<"Introduce a number"<<endl;

    cin>>dato;

    inf = 0;

    sup=sizeof(nums)/sizeof(int)-1;

    cout<<endl<<"Array size:"<<sup;

    while (inf <= sup){
        mitad = (inf+sup)/2;

        if(nums[mitad] == dato){
            band = 'v';
            cout<<endl<<"pimero condicional"<<endl;
            break;
        }
        if(nums[mitad]> dato){
            sup = mitad-1;
            mitad = (inf+sup)/2;
            cout<<endl<<"segundo condicional"<<endl;

        }
        if(nums[mitad]<dato){
            inf = mitad+1;
            mitad = (inf+sup)/2;
            cout<<endl<<"tercero condicional"<<endl;  
        }

    }
    if(band == 'v' ){
        cout<<endl<<"Number was finded "<<"index :"<<mitad<<endl;

    }else{
        cout<<endl<<"we cant finded"<<endl;
    }
    return 0;
} 

// int findArray (int nums[],int sup,int dato){


//     for(int i = 0; i < sup; i++){
//         if(nums[i] == dato){
//             return i;
//         }
//     }
//     return -1;

// }