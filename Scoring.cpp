#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int A = (x+y) / 2;
        cout << A << " " << A-x << "\n";
    }
    return 0;
}