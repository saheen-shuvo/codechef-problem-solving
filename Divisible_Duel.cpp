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
        int X, Y;
        cin >> X >> Y;
        int sEven = 0, sOdd = 0;
        for (int i = X; i <= Y; i++)
        {
            if (i % X == 0)
            {
                if (i % 2 == 0)
                {
                    sEven += i;
                }
                else
                {
                    sOdd += i;
                }
            }
        }
        if (sEven >= sOdd)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}