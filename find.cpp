#include <iostream>
using namespace std;

int findArray(string num[],int size,string number);

int main()
{

    int index,size;
    string userHunge , foods []= {"pizza", "burger", "empanada"};
    
    size = sizeof(foods)/sizeof(string);

    cout<<"Introduce a food, what do you want to eat"<<endl;

    cin>>userHunge;

    index = findArray(foods,size,userHunge);

    if(index == -1){

        cout<<endl<<"Wen cant find"<<userHunge<<endl;

    }else{
        cout<<endl<<"We find the food in index "<<index<<endl;
    }




    return 0;
}

int findArray(string num[],int size,string number){

    for(int i = 1 ; i < size;i++){

        if(num[i]==number){

            return i;

        }
        
        

    }
    return -1;

}