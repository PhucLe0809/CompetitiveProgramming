#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, x, gcd;
    while (test--){
        cin >> n;
        gcd = 0;
        for (int i = 0; i < n; i++){
            cin >> x; 
            gcd = __gcd(gcd, x);
        }
        cout << x/gcd << '\n';
    }
    return 0;
}