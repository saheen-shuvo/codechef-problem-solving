#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, cost;
        cin >> X;
        if (X <= 20) {
            cost = X * 10;
        } else {
            cost = 200; 
            int remaining = X - 20;
            cost = cost + (remaining / 2) * 5;
        }
        cout << cost << "\n";
    }
    return 0;
}
