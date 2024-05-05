#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, d, x, cow;
    while (test--){
        cin >> n >> d;
        cin >> cow;
        for (int i = 2; i <= n; i++){
            cin >> x;
            cow += min(d/(i-1), x);
            d -= min(d/(i-1), x)*(i-1);
        }
        cout << cow << '\n';
    }
    return 0;
}