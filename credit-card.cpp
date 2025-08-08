#include <iostream>
using namespace std;

int getDigit(const int num);
int imparDigitsSum(const string cardNumber);
int parDigitsSum(const string cardNumber);

int main(){

    string number;
    int result = 0;

    cout<<"\n introduce your card number:";
    cin>>number;

    // 371449635398431

    result = parDigitsSum(number) + imparDigitsSum(number);
    
    if(result % 10 == 0){

        cout<<number<<"Is valid";


    }else{
        cout<<number<<"Is invalid";

    }

    return 0;
}

int parDigitsSum(const string cardNumber){

    int suma = 0;
    for(int i = cardNumber.size() -2; i >= 0;i-=2){

        suma =  suma + getDigit((cardNumber[i] - '0' )* 2);

    }
    return suma;
}

int imparDigitsSum(const string cardNumber){

    int sum = 0;
    for(int i = cardNumber.size()-1;i >= 0; i-=2) {

        sum = sum - cardNumber[i] - '0';
    }
    return sum;
}

int getDigit(const int num){

    return num % 10 + (num / 10 % 10);

}