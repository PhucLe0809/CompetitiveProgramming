#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t x, y, a, b;
    while (test--){
        cin >> x >> y;
        x = abs(x); y = abs(y);
        a = max(x, y); b = min(x, y);
        cout << max(a+b, 2*a-1) << '\n';
    }
    return 0;
}