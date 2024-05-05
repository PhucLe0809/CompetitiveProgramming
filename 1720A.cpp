#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t a, b, c, d, x, y;
    while (test--){
        cin >> a >> b >> c >> d;
        x = __gcd(a, b);
        y = __gcd(c, d);
        a /= x; b /= x;
        c /= y; d /= y;
        if ((a==c && b==d) || (a==c && a==0)) cout << 0 << '\n';
        else{
            if (a*c==0) cout << 1 << '\n';
            else{
                if ((__gcd(a,c)==a and __gcd(b,d)==d) || (__gcd(a,c)==c and __gcd(b,d)==b))
                    cout << 1 << '\n';
                else cout << 2 << '\n';
            }
        }
    }
    return 0;
}