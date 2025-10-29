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
        vector<pair<int, int>> v;
        for (int i = 1; i <= N; i++) {
            v.push_back({i, N});
        }
        if (N == 1) {
            cout << "1\n";
            continue;
        }
        vector<pair<int, int>> res; 
        for (auto x : v) {
            int g = __gcd(x.first, x.second);
            res.push_back({g, x.first});
        }
        sort(res.begin(), res.end(), [](auto &a, auto &b) {
            if (a.first != b.first) return a.first > b.first;
            return a.second < b.second;
        });
        for (auto &x : res) cout << x.second << " ";
        cout << "\n";
    }
    return 0;//done
}
