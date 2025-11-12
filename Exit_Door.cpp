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
        vector<int> v(N);
        for(int i=0; i<N; i++){
            cin >> v[i];
        }
        int totalTime = 0;
        for(int i=N; i>=1; i--){
            int position = find(v.begin(), v.end(), i) - v.begin();
            int left=0, right=0;
            for(int j=0; j<position; j++){
                if(v[j] != -1){
                    left++;
                }
            }
            for(int k=position+1; k<N; k++){
                if(v[k] != -1){
                    right++;
                }
            }
            totalTime = totalTime + min(left, right);
            v[position] = -1;
        }
        cout << totalTime << '\n';
    }
    return 0;
}