#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n, m;
    while (test--)
    {
        cin >> n >> m;
        if (n == 1 && m == 1) n = 0;
        else n = min((n-1)*2 + m, (m-1)*2 + n);
        cout << n << '\n';
    }
    return 0;
}