#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int side = min(A, B);
    cout << side * side << endl;

    return 0;
}
