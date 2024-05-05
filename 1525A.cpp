#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t p;
    while (test--)
    {
        cin >> p;
        if (p == 100) cout << 1 << '\n';
        else cout << p/__gcd(p, 100-p) + (100-p)/__gcd(p, 100-p) << '\n';
    }
    return 0;
}