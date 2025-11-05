#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        cin.ignore();
        string S;
        cin >> S;
        for(int i=0; i<S.size()-1; i++){
            if(S[i] == '0' && S[i+1] == '1'){
                continue;
            }
            else if(S[i] == '0' && S[i+1] == '0'){
                continue;
            }
            else if(S[i] == '1' && S[i+1] == '1'){
                continue;;
            }
            else if(S[i] == '1' && S[i+1] == '0'){
                S.erase(i+1, 1);
                i--;
            }
        }
        int ans = 0;
        for(char x : S){
            if(x == '0'){
                ans++;
            }
        }
        cout << ans << '\n';
    }
}
