#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n, k, res;
    while (test--)
    {
        cin >> n >> k;
        res = -1;
        for (int i = 2; i <= round(sqrt(n)) && res == -1; i++)
            if (n%i == 0) res = i;
        if (res == -1) res = n;
        if (n%2 == 0)
            cout << int64_t(n + res*k) << '\n';
        else cout << int64_t(n + res + 2*(k-1)) << '\n';
    }
    return 0;
}