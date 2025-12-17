#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long n, m;
        cin >> n >> m;
        long long minVal = n;
        long long maxVal = 3 * n;
        if(m < minVal){
            cout << "NO" << '\n';
        }
        else if(m > maxVal){
            cout << "NO" << '\n';
        }
        else if((m - minVal) % 2 != 0){
            cout << "NO" << '\n';
        }
        else{
            cout << "YES" << '\n';
        }
    }
    return 0;
}