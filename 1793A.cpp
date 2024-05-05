#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t a, b, n, m, x, y, z;
    while (test--){
        cin >> a >> b >> n >> m;
        if (n > m) x = m*a+(n-m-1)*a;
        else x = n*a;
        y = n*b;
        if (n > m){
            z = (n/(m+1))*m*a; n -= ((n/(m+1))*m+n/(m+1));
            if (a<b) z += n*a;
            else z += n*b;
        } else z = 1e18;
        cout << min({x, y, z}) << '\n';
    }
    return 0;
}