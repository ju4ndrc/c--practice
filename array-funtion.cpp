#include <iostream>
using namespace std;

double sum (double prices[], int size);

int main(){

    double getResult, prices [] = {5.2,5.66,5.99,5.88,5.22};

    int size = sizeof(prices)/sizeof(prices[0]);

    getResult = sum(prices,size);

    cout<<"The sum price is:"<<getResult;


    

    
    return 0;
}

double sum (double prices[],int size){


    double  sum = 0;

    // cout<<"iter content"<<iter;

    for(int i = 0 ; i < size ; i++){
        sum = sum + prices[i];
    }

    return sum;

}