#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m, k; cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    int32_t l, r;
    l = 1e9;
    for (int i = m-1; i > 0; i--){
        if (inp[i]!=0 && inp[i]<=k){
            l = (m-i)*10; break;
        }
    }
    r = 1e9;
    for (int i = m+1; i <= n; i++){
        if (inp[i]!=0 && inp[i]<=k){
            r = (i-m)*10; break;
        }
    }
    cout << min(l, r);
    return 0;
}