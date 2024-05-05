#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k1, k2, w, b, x, y;
    while (test--){
        cin >> n >> k1 >> k2 >> w >> b;
        x = min(k1, k2);
        y = min(n-k1, n-k2);
        if ((x+(max(k1, k2)-x)/2)>=w && (y+(max(n-k1, n-k2)-y)/2)>=b)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}