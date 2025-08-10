#include <iostream>
using namespace std;

int main(){

    int *pNum = NULL;

    pNum = new int;

    *pNum = 25;

    cout<<"Dir "<<pNum<<'\n';
    cout<<"Value "<<*pNum<<'\n';

    
    delete pNum;

     
    return 0;
}