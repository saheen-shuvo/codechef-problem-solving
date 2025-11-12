#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        string S;
        cin >> S;
        int ans=0;
        int flag = 0;
        for(int i=0; i<S.size(); i++){
            char c = S[i];
            if(c == '0'){
                flag = 1;
            }
            if(flag == 1 && c == '1'){
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}