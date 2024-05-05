#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--){
        cin >> n;
        if (n<4) cout << 4-n << '\n';
        else cout << (n%2 != 0) << '\n';
    }
    return 0;
}