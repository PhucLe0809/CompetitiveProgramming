#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp, inp+n);
        cnt = 0;
        for (int i = 1; i < n; i++){
            if (inp[i]-inp[i-1]==1) cnt++;
        }
        if (cnt > 0) cout << 2;
        else cout << 1;
        cout << '\n';
    }
    return 0;
}