#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, nums, sum = 0, secuencie = 0;

    cin>>n;


    for (int i = 0 ; i < n-1 ; i++) {

        cin>>nums;

        sum = sum + nums;
        // cout<<"In the cicle for"<<sum<<"\n";


    }
    for (int i = 1 ; i <= n ; i++) {
        secuencie = secuencie + i;
        // cout<<"-----------Iteration result"<<secuencie<<"\n";

    }
    // cout<<"secuencie"<<secuencie<<"\n";
    cout<<secuencie - sum;



    return 0;
}
