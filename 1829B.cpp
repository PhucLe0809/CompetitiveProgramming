#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt, len;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        inp[n] = 1-inp[n-1];
        len = cnt = 0;
        for (int i = 1; i <= n; i++){
            if (inp[i]==inp[i-1]) cnt++;
            else{
                if (inp[i-1]==0){
                    len = max(len, cnt+1);
                }
                cnt = 0;
            }
        }
        cout << len << '\n';
    }
    return 0;
}