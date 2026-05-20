#include <iostream>
using namespace std;
bool isVowel(char ch) {
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        return true;
    }
    return false;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N;
        cin >> S;
        int count = 0;
        bool hard = false;
        for (char ch : S) {
            if (!isVowel(ch)) {
                count++;
                if (count >= 4) {
                    hard = true;
                    break;
                }
            } else {
                count = 0;
            }
        }
        if (hard)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
