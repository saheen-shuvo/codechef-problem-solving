#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    if(n - m < 0){
        cout << 0;
    }
    else{
        cout << abs(m-n);
    }
    return 0;
}