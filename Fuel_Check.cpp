#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int X, Y;
    cin >> X >> Y;
    if(X*Y >= 100){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}