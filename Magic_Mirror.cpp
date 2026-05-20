#include <iostream>
#include <vector>
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
        bool flag = true;
        int targetSum = A[0] + A[N - 1];
        for (int i = 0; i < N / 2; i++)
        {
            if (A[i] + A[N - 1 - i] != targetSum)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
