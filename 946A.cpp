#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; test = 1;
    int32_t n, x, pos, neg, minn, maxx;
    while (test--){
        cin >> n;
        pos = neg = 0;
        minn = 105; maxx = -105;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (x<0) neg += x;
            else pos += x;
            minn = min(minn, x);
            maxx = max(maxx, x);
        }
        if (neg==0) cout << pos << '\n';
        else if (pos==0) cout << -neg << '\n';
            else cout << pos - neg << '\n';
    }
    return 0;
}