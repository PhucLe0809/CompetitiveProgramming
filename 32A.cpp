#include <bits/stdc++.h>

using namespace std; 
int32_t inp[1005];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, d; cin >> n >> d;
    for (int i = 0; i < n; i++) cin >> inp[i];
    sort(inp, inp+n);
    int64_t cnt = 0;
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (inp[j]-inp[i]<=d) cnt++;
            else break;
        }
    }
    cout << 2*cnt;
    return 0;
}