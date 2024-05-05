#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    double n; cin >> n;
    n = (-1+sqrt(1+8*n))/2;
    if (n==int64_t(n)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}