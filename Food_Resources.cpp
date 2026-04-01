#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int>& a, int n, int m, int d) {
    int people = 0;
    for (int i = 0; i < n; i++) {
        people += a[i] / d;
    }
    return people >= m;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    int maximum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        maximum = max(maximum, v[i]);
    }
    int low = 1, high = maximum, ans = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (isPossible(v, n, m, mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
