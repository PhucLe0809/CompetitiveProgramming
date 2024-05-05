#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    double l, r;
    while (test--){
        cin >> l >> r;
        if (l >= (r+1)/2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}