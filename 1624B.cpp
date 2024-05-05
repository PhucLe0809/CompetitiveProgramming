#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t a, b, c;
    while (test--)
    {
        cin >> a >> b >> c;
        if (((a+c) % 2 == 0 && (a+c)/2 % b == 0)
        || (2*b - a > 0 && (2*b - a) % c == 0)
        || (2*b - c > 0 && (2*b - c) % a == 0))
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}