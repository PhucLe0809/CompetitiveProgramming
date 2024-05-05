#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    int64_t k, x, minn, maxx;
    while (test--){
        cin >> n >> k;
        minn = maxx = 0;
        for (int i = 0; i < n; i++){
            cin >> x;
            minn += x;
            maxx += ceil(x*1.0/k);
        }
        cout << int64_t(ceil(minn*1.0/k)) << " " << maxx << '\n'; 
    }
    return 0;
}