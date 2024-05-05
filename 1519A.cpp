#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t r, b, d;
    while (test--)
    {
        cin >> r >> b >> d;
        if (max(r, b) <= min(r, b)*(d+1))
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}