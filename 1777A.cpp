#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt, answer;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        cnt = answer = 0; inp[n] = inp[n-1]+1;
        for (int i = 1; i <= n; i++){
            if ((inp[i]-inp[i-1])%2==0) cnt++;
            else{
                answer += cnt; cnt = 0;
            }
        }
        cout << answer << '\n';
    }
    return 0;
}