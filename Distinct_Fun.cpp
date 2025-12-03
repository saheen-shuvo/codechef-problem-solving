#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        unordered_map<int, int> freq;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            freq[A[i]]++;
        }
        int operations = 0;
        for (auto &p : freq) {
            if (p.second > 1) {
                operations += (p.second - 1);
            }
        }
        cout << operations << '\n';
    }

    return 0;
}
