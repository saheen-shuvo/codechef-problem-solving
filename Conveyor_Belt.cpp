#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, P;
        cin >> N >> P;
        string S;
        cin >> S;
        int lc = 0;
        for (int i = 0; i < P; i++)
        {
            if (S[i] == 'R')
            {
                lc++;
            }
        }
        int rc = 0;
        for (int i = P - 1; i < N; i++)
        {
            if (S[i] == 'L')
            {
                rc++;
            }
        }
        cout << min(lc, rc) << endl;
    }

    return 0;
}
