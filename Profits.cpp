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
        int N, X;
        cin >> N >> X;
        int served = 0, sold = 0;
        for (int i = X; i <= N; i++)
        {
            served++;
            sold += i;
        }
        int cost = served * X;
        cout << sold - cost << "\n";
    }
    return 0;
}