#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
int32_t inp[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k, run, pre;
    while (test--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> inp[i];
        run = 0;
        while (k > 0 && run < n-1)
        {
            pre = inp[run];
            inp[run] -= min(k, pre);
            inp[n-1] += min(k, pre);
            k -= pre; run++;
        }
        for (int i = 0; i < n; i++) cout << inp[i] << " ";
        cout << '\n';
    }
    return 0;
}