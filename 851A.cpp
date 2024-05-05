#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, k, t; cin >> n >> k >> t;
    if (k<=t && t<=n) cout << k;
    else{
        if (t < k) cout << t;
        else cout << k-(t-n);
    }
    return 0;
}