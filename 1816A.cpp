#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t a,b;
    while (test--){
        cin >> a >> b;
        if (__gcd(a, b)==1){
            cout << 1 << '\n';
            cout << a << " " << b << '\n';
        }else{
            cout << 2 << '\n';
            cout << 1 << " " << b-1 << '\n';
            cout << a << " " << b << '\n';
        }
    }
    return 0;
}