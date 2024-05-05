#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t a, b;
    for (b = n/2+1; b <= n; b++){
        a = n-b;
        if (__gcd(a, b)==1){
            cout << a << " " << b;
            break;
        }
    }
    return 0;
}