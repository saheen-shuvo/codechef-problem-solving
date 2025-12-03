#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        long long C;
        cin >> N >> C;
        vector<long long> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        string S;
        cin >> S;
        long long sum0 = 0;
        long long sum1 = 0;
        for (int i = 0; i < N; ++i)
        {
            if (S[i] == '0')
            {
                sum0 += A[i];
            }
            else
            {
                sum1 += A[i];
            }
        }
        long long ans = sum0;
        if (sum0 >= C)
        {
            ans = max(ans, sum0 - C + sum1);
        }
        cout << ans << "\n";
    }
    return 0;
}
