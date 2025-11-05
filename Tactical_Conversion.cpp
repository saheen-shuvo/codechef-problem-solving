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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int one = 0;
        int length = 0, maxLength = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one++;
                length++;
                maxLength = max(length, maxLength);
            }
            else
            {
                length = 0;
            }
        }
        if (one == 2 && maxLength == 2)
        {
            cout << "No" << endl;
        }
        else if (one == 3 && maxLength == 3)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}