#include <iostream>
using namespace std;

struct Fan_shop{
    string brand;
    int levels;
    float price;

    Fan_shop *nextn;
};

void addFan(Fan_shop *&stack, string brand, int levels, float price);

void showFans(Fan_shop *stack);
    
int main(){

    Fan_shop *stack = NULL;

    string brand;

    int levels, yes_no;

    float price;

    while(yes_no != 1){
        cout<<"\n==========\n";
        cout<<"\nintroduce brand\n";
        cin>>brand;
        cout<<"\n==========\n";
        cout<<"\nintroduce levels\n";
        cin>>levels;
        cout<<"\n==========\n";
        cout<<"\nintroduce price\n";
        cin>>price;
        cout<<"\n==========\n";
        addFan(stack,brand,levels,price);
        cout<<"\n continue??\n";
        cin>>yes_no;
    }


    showFans(stack);

    return 0;
}
void addFan(Fan_shop *&stack, string brand, int levels, float price){

    Fan_shop *newF = new Fan_shop;

    newF -> brand = brand;
    newF -> levels = levels;
    newF -> price = price;
    newF -> nextn = stack;
    stack = newF;
    cout<<"new fan added"<<newF;
    cout<<"\nBrand\n"<<newF<<"\n";
    cout<<"\nLevels\n"<<newF<<"\n";
    cout<<"\nprice\n"<<newF<<"\n";

}
void showFans(Fan_shop *stack){

    // codigo de clase
    // Ventilador*temp = Cab;
    // es necesario definir el puntero?
    // Fan_shop *aux = stack;
    cout<<endl<<"FANS INVENTORY"<<endl;
    while (stack != NULL){
        cout<<"\n==========\n";

        cout<<stack->brand<<"\n";
        cout<<"\n------------------\n";
        cout<<stack->levels<<"\n";
        cout<<"\n------------------\n";
        cout<<stack->price<<"\n";
        stack = stack -> nextn;

    }


}