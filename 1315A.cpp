#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int64_t a, b, x, y;
    int64_t c, d, e, f;
    while (n--){
        cin >> a >> b >> x >> y;
        c = a*y; 
        d = a*(b-y-1);
        e = b*x;
        f = b*(a-x-1);
        cout << max({c, d, e, f}) << '\n';
    }
    return 0;
}