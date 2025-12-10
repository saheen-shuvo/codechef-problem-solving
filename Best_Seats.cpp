#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int minCost = INT_MAX;
        int l=0, r=0;
        while(r<n){
            if(r-l+1 == 2){
                int ans = v[l]+v[r];
                minCost = min(minCost, ans);
                l++;
            }
            r++;
        }
        cout << minCost << '\n';
    }
    return 0;
}