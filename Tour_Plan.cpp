#include <iostream>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;
    int res;
    if (Z <= 50) {
        res = X;
    } else {
        res = X + (Z - 50) * Y;
    }
    cout << res << endl;
    return 0;
}
