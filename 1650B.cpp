#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t l, r, x, ans, m;
    while (test--)
    {
        cin >> l >> r >> x;
        ans = r/x + r%x;
        m = (r/x)*x - 1;
        if (m >= l) ans = max(ans, m/x + m%x);
        cout << ans << "\n";
    }
    return 0;
}