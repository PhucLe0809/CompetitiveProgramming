#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, minn, odd, even;
    while (test--){
        cin >> n >> minn;
        even = odd = 0;
        if (minn%2==0) even++;
        else odd++;
        for (int i = 1; i < n; i++){
            cin >> x;
            minn = min(minn, x);
            if (x%2==0) even++;
            else odd++;
        }
        if (minn%2!=0) cout << "YES\n";
        else{
            if (odd==0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}