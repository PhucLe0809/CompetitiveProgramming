#include <bits/stdc++.h>

using namespace std;

int main(){
    long long l, r, a, b; cin >> l >> r >> a >> b;
    long long lcm = (a * b) / __gcd(a, b);
    long long x = (r/a - l/a) + (int)(l % a == 0);
    long long y = (r/b - l/b) + (int)(l % b == 0);
    long long z = (r/lcm - l/lcm) + (int)(l % lcm == 0);
    cout << x + y - z; 
    return 0;
}