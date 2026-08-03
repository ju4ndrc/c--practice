#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k,l,m,n,d,sufferedDragons = 0;
    cin>>k>>l>>m>>n>>d;
    for(int i = 1; i<=d ; i++) {
        if(i%k==0||i%l==0||i%m==0||i%n==0) {
            sufferedDragons++;
        }

    }
    cout<<sufferedDragons<<"\n";




    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}
