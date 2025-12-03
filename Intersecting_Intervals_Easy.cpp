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
        cin >> N;
        vector<long long> A(N);
        vector<long long> B(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
        }

        vector<long long> A1(N), A2(N);
        long long cur = 0;
        for (int i = 0; i < N; i++)
        {
            cur = max(A[i], cur + A[i]);
            A1[i] = cur;
        }
        cur = 0;
        for (int i = N - 1; i >= 0; i--)
        {
            cur = max(A[i], cur + A[i]);
            A2[i] = cur;
        }

        vector<long long> B1(N), B2(N);
        cur = 0;
        for (int i = 0; i < N; i++)
        {
            cur = max(B[i], cur + B[i]);
            B1[i] = cur;
        }
        cur = 0;
        for (int i = N - 1; i >= 0; i--)
        {
            cur = max(B[i], cur + B[i]);
            B2[i] = cur;
        }
        long long ans = LLONG_MIN;
        for (int i = 0; i < N; i++)
        {
            long long isA = A1[i] + A2[i] - A[i];
            long long isB = B1[i] + B2[i] - B[i];
            ans = max(ans, isA + isB);
        }
        cout << ans << "\n";
    }
    return 0;
}
