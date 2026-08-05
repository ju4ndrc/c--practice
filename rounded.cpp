#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);;
    cin.tie(nullptr);

    int t,k=0, number=0,  j=0;
    int roun[4];

    cin >> t;

    for (int i = 1 ; i <= t ; i++) {
        cin>>number;
        int position = 1 ;


        while (number > 0) {

            int digit =( number % 10);
            int result = 0;
            if (digit != 0) {
                k++;
                result = digit*position;
                roun[j] = result;
                j++;
            }

            number = number / 10;

            position = position*10;

        }



        cout<<k<<"\n";

        for (int l = 0 ; l < k ; l++) {
            cout<<roun[l]<<" ";
        }
        cout<<"\n";
        j=0;
        k=0;
    }





    return 0;
}
