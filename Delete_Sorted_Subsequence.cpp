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
        string S;
        cin >> N >> S;
        if (N == 0)
        {
            cout << 0 << "\n";
            continue;
        }
        int group = 1;
        for (int i = 1; i < N; ++i)
        {
            if (S[i] != S[i - 1])
            {
                group++;
            }
        }
        cout << (group + 1) / 2 << "\n";
    }
    return 0;
}
