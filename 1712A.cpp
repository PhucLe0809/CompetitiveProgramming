#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
int32_t inp[maxarray], tick[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k, cnt;
    while (test--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> inp[i]; tick[inp[i]] = i;
        }
        if (n == k) cout << "0\n";
        else
        {
            cnt = 0;
            for (int i = 1; i <= k; i++)
                if (inp[i] > k) cnt++;
            cout << cnt << '\n';
        }
    }
    return 0;
}