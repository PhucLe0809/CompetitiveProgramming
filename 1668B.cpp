#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n, m, x, sum, minn, maxx;
    while (test--){
        cin >> n >> m;
        minn = m; maxx = 0;
        sum = 0;
        for (int i = 0; i < n; i++){
            cin >> x; sum += x;
            minn = min(minn, x);
            maxx = max(maxx, x);
        }
        if (n+sum-minn+maxx <= m) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}