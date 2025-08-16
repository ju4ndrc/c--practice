#include <iostream>
using namespace std;

void getData(float &number1, float &number2);
void showData(float x, float y);
void changeData(float *x,float *y);
int main(){


    float munber1;
    float number2;
    getData(munber1,number2);

    cout<<" \n Original numbers \n";
    
    showData(munber1,number2);

    changeData(&munber1 , &number2);
    
    cout<<" \n Changed numbers \n";
    showData(munber1,number2);

    return 0;
}
void changeData(float *x,float *y){
    float aux;
    aux = *x;
    *x = *y;
    *y = aux;
    // delete x,y;
    // cout<<"\n Memory was cleared \n";
}
void getData(float &number1, float &number2){

    cout<<"\n Number 1 \n";

    cin>>number1;

    cout<<"\n Number 2 \n";

    cin>>number2;
}
void showData(float x, float y){

    cout<<"number1 \n"<<x<<"*****/***"<<&x<<endl;
    cout<<endl<<"number2 \n"<<y<<"*****/***"<<&y;

}