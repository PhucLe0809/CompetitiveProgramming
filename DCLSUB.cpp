#include <bits/stdc++.h>

using namespace std; 
int32_t inp[3005], scan[3005];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    int32_t maxlen = 1;
    scan[1] = 1;
    for (int i = 2; i <= n; i++){
        scan[i]=1;
        for (int j = 1; j < i; j++){
            if (abs(inp[i]-inp[j])%2!=0 && scan[j]+1>scan[i]){
                scan[i]=scan[j]+1;
            }
        }
        maxlen = max(maxlen, scan[i]);
    }
    cout << maxlen;
    return 0;
}