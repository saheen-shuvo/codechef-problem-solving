#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < N; i++)
        {
            int leftCost = i;
            int rightCost = (N - 1 - i);
            for (int j = 0; j < N; j++)
            {
                if (i != j && A[i] == A[j])
                {
                    int cost1 = i + (N - 1 - j);
                    int cost2 = j + (N - 1 - i);
                    ans = min(ans, min(cost1, cost2));
                }
            }
        }
        if (ans == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}
