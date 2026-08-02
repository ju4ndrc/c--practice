#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int orange;

    double orangeRate = 0,totalOrange=0 , orangeQuant = 0;

    cin>>orange;
    for(int i = 0 ; i < orange;i++ ) {
        cin>>orangeQuant;

        totalOrange = totalOrange + orangeQuant;
        // cout<<orange<<" "<<totalOrange<<endl;
    }
    orangeRate = totalOrange / orange;
    // cout<<"Total orange Juice:"<<orangeRate<<"\n";
    cout<<orangeRate<<"\n";



    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}
