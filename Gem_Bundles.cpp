#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int R, B, G;
        cin >> R >> B >> G;
        int BG = min(B, G);
        int bundle = min(R, BG);
        int coin = (R + B + G - (3 * bundle)) * 3;
        int ans = bundle * 10 + coin;
        cout << ans << "\n";
    }
    return 0;
}
