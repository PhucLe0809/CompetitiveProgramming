#include <bits/stdc++.h>
#define maxarray 10005

using namespace std;
int32_t tick[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, tmp, answer;
    while (test--)
    {
        cin >> n >> m;
        fill(tick, tick + maxarray, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            if (!tick[tmp]) tick[tmp]++;
        }
        answer = -1;
        for (int i = 0; i < m; i++)
        {
            cin >> tmp;
            if (tick[tmp]) answer = tmp;
        }
        if (answer != -1)
        {
            cout << "YES\n";
            cout << 1 << " " << answer << '\n';
        } else cout << "NO\n";
    }
    return 0;
}