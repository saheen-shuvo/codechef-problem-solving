#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int Aus = X + Z;

    if (Aus > Y) {
        cout << Aus - Y + 1 << "\n";
    }
    else if (Aus < Y) {
        cout << 0 << "\n";
    }
    else {
        cout << 1 << "\n";
    }
    return 0;
}
