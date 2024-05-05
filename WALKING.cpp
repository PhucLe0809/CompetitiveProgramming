#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t x, y, z, t;
    while (test--)
    {
        cin >> x >> y >> z >> t;
        if (t >= y && z <= x+t-y)
        {
            cout << 2*(t-y) + (x-z) << '\n';
        } else cout << "-1\n";
    }
    return 0;
}