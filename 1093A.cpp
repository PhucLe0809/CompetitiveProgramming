#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t x;
    while (test--){
        cin >> x;
        if (x<8) cout << 1 << '\n';
        else cout << (x/7)+(x%7!=0) << '\n';
    }
    return 0;
}