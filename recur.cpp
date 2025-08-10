#include <iostream>
using namespace std;

void walk(int steps);

void recursiveWalk(int steps);

int main(){


    cout<<endl<<"Iterative"<<endl;
    walk(100);

    cout<<endl<<"recursive walk"<<endl;
    recursiveWalk(100);

    return 0;
}
void recursiveWalk(int steps){
    if(steps > 0){
        cout<<endl
        <<"First step"<<endl;
        recursiveWalk(steps - 1);
    }
}

void walk(int steps){


    for(int i = 0 ; i < steps; i++){
        cout<<endl<<"first step"<<endl;
    }

}