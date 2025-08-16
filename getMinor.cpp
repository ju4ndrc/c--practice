#include <iostream>
using namespace std;

int main(){

    int elemnt;

    cout<<"\nelements?\n";

    cin>>elemnt;
    if(elemnt < 0){

        cout<<"Mayor";

    }
    int numbers[elemnt], *dirNum,menor=999999;

    for(int i = 0 ; i < elemnt; i++){

        cout<<"Nmber"<<i+1<<":";
        cin>>numbers[i];
    }
    dirNum = numbers;
    for (int i = 0; i < elemnt; i++){
        if(*dirNum < menor){

            menor = *dirNum;
        }
        dirNum++;
    }
    cout<<"Menor number es: "<<menor;
    
    return 0;
}