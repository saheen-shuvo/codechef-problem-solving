#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int W, P, K;
        cin >> W >> P >> K;
        int ans;
        if (W > K)
        {
            cout << K * 2 << '\n';
            continue;
        }
        ans = W * 2;
        ans = ans + (K - W) * 1;
        cout << ans << '\n';
    }
    return 0;
}