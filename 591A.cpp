#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    double l, p, q; cin >> l >> p >> q;
    // q*sp + q*sq = q*l
    // q*sp - p*sq = 0
    // (p+q)*sq = q*l
    // sp = l - sq;
    double sp = l - (q*l)/(p+q);
    cout << fixed << setprecision(9) << sp;
    return 0;
}