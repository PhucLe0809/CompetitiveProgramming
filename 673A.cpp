#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    inp[0] = 0;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    inp[n+1] = 90;
    int32_t t;
    for (t = 1; t <= n+1; t++){
        if (inp[t]-inp[t-1]>15){
            cout << inp[t-1]+15; break;
        }
    }
    if (t>n+1) cout << 90;
    return 0;
}