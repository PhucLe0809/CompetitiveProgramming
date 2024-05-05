#include <bits/stdc++.h>

using namespace std;
int32_t door[5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t x, key, open;
    while (test--)
    {
        cin >> x >> door[0] >> door[1] >> door[2];
        if (!x) cout << "NO\n";
        else
        {
            key = door[--x];
            if (!key) cout << "NO\n";
            else
            {
                open = door[--key];
                if (!open) cout << "NO\n";
                else cout << "YES\n";
            }
        }
    }
    return 0;
}