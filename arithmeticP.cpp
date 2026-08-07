#include <iostream>
using namespace std;

bool compareA(int a,int b,int c) {
    int newA=0;
    newA= (2 * b - c);

    if (newA > 0 && newA % a == 0) {
        return true;
    }
    return false;


}
bool compareB(int a,int b,int c) {
    if ((a+c)%2==0) {
        int newB = (a+c)/2;
        if (newB % b == 0 && newB >  0 ) {
            return true;
        }
    }
    return false;
}

bool compareC(int a,int b,int c) {
    int newC=0;
    newC= 2 * b - a;

    if (newC > 0 && newC % c == 0) {
        return true;
    }
    return false;

}

int main() {
    ios_base::sync_with_stdio(false);;
    cin.tie(nullptr);

    int t,a,b,c;
    cin>>t;
    for(int i=1;i<=t;i++) {
        cin>>a>>b>>c;
        if (compareA(a,b,c) || compareB(a,b,c) || compareC(a,b,c)) {
            cout<< "YES"<<"\n";
        }else {
            cout<< "NO"<<"\n";
        }

    }


    return 0;
}
