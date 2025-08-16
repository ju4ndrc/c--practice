#include <iostream>
#include <stdlib.h>


using namespace std;

int *calif, califCuantity;
void getCalify();
void showCalif();

int main(){

    getCalify();
    showCalif();
    
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    getCalify();
    showCalif();

    return 0;
}
void getCalify(){
 
    cout<<"\n How calificatons do you need \n";

    cin>>califCuantity;

    calif = new int[califCuantity];
    for (int i = 0; i < califCuantity; i++){

        cout<<"Calificatio-"<< i+1;
        cin>>calif[i];

    
    }
    
    
}
void showCalif(){
    for (int i = 0; i < califCuantity; i++){

        cout<<"Calif"<<i+1<<calif[i]<<"\n"<<"**"<<&calif<<"**"<<"\n";
        
    }

    delete calif;
    
}