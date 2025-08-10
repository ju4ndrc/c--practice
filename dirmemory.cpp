#include <iostream>
using namespace std;

int main(){

    char *pNotes = NULL;
    int size;

    cout<<"Notes";
    cin>>size;
    pNotes = new char [size];

    for (int i = 0; i < size; i++)
    {
        cout<<"introduce a note"<<i + 1 <<":";
        cin >> pNotes[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<< pNotes[i]<<" ";
    }
    delete [] pNotes;

    return 0;
}