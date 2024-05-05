#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t a, b, c, d, k;
    int32_t x, y;
    while (test--){
        cin >> a >> b >> c >> d >> k;
        x = (a/c)+(a%c!=0);
        y = (b/d)+(b%d!=0);
        if (x+y > k) cout << -1;
        else cout << x << " " << y;
        cout << '\n';
    }
    return 0;
}