#include <iostream>
#include <string>
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
        int i = 0;
        while (i < N && S[i] != 'z')
        {
            i++;
        }
        while (i < N && S[i] == 'z')
        {
            S[i] = 'a';
            i++;
        }
        cout << S << "\n";
    }

    return 0;
}
