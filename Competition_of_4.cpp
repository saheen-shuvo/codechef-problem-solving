#include <iostream>
using namespace std;
int main() {
    int X;
    cin >> X;
    int ans = 1000 * (1 << (4 - X)); 
    cout << ans;
    return 0;
}
