#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);;
    cin.tie(nullptr);
    int n ,m,days=1;

    cin>>n>>m;

    while (n!=0) {
        // cout<<"before if:"<<n<<endl;

        if(days % m == 0) {
            n = n + 1;

        }

        n = n - 1;
        if (n == 0) {break;}
        // cout<<"after if:"<<n<<endl;
        days++;

        // cout<<"days:"<<days<<endl;
    }
    cout<<days<<"\n";
    return 0;
}
