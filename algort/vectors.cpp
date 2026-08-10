#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);;

    cin.tie(nullptr);

    int n ,x,y,z,sumX=0,sumY=0,sumZ=0;


    cin>>n;
    vector<vector<int>> matrix(n);

    for (int i = 0 ; i < n ; i++) {
        // vector<int> idle(3);

        cin>>x>>y>>z;

        matrix[i].push_back(x);
        matrix[i].push_back(y);
        matrix[i].push_back(z);
        sumX+=matrix[i][0];
        sumY+=matrix[i][1];
        sumZ+=matrix[i][2];
        // cout << "X Component:" <<sumX << " - Y Component :" << sumY << " - Z Component:" << sumZ << endl;
    }


    if (sumX == 0 && sumY == 0 && sumZ == 0) {
        cout << "YES"<<"\n";
    }else {
        cout << "NO"<<"\n";
    }
    return 0;
}
// EX2
// 3
// 3 -1 7
// -5 2 -4
// 2 -1 -3
// EX1
// 3
// 4 1 7
// -2 4 -1
// 1 -5 -3
