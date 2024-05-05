#include <bits/stdc++.h>

using namespace std;
int32_t power[32];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t l ,r;
    int32_t tmp = 1;
    for (int i = 0; i < 30; i++)
    { power[i] = tmp; tmp *= 2; }
    int32_t len; int64_t cnt;
    int32_t n, limit;
    while (test--)
    {
        cin >> l >> r;
        if (l == r) cout << "1 1\n";
        else
        {
            n = lower_bound(power, power+30, r/l+1) - power; 
            limit = r/power[n-1]; cnt = limit;
            cout << n << " " << cnt << '\n';
        }
    }
    return 0;
}