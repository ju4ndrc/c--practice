#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);;
    cin.tie(nullptr);

    int n,k,count=0,totalTime=0,exercises=0;

    cin>>n>>k;

    for(int i=5;i<((n+1)*5);i = i + 5) {

        totalTime = totalTime + i;

        count = totalTime + k;

        if (count <= 240) {

            exercises++;

        }

    }
    cout<<exercises<<"\n";

    return 0;
}
