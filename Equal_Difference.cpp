#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        unordered_map<int, long long> freq;
        long long ans = 0;
        for (int i = 1; i <= N; i++) {
            int x;
            cin >> x;
            int val = x - i;
            ans += freq[val];
            freq[val]++;
        }
        cout << ans << '\n';
    }
    return 0;
}
