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
        string S;
        cin >> S;
        int cnt00 = 0, cnt11 = 0;
        for (int i = 0; i + 1 < N; i++)
        {
            if (S[i] == '0' && S[i + 1] == '0') cnt00++;
            if (S[i] == '1' && S[i + 1] == '1') cnt11++;
        }
        if (cnt11 >= cnt00) cout << 0 << '\n';
        else cout << 1 << '\n';
    }
    return 0;
}
