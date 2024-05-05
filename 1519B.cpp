#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, k;
    while (test--)
    {
        cin >> n >> m >> k;
        if ((n-1)*1 + (m-1)*n == k)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}