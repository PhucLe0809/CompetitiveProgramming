#include <bits/stdc++.h>
#define inf 1e9
#define maxarray 50005

using namespace std;
int32_t a[maxarray], b[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, mx; bool check;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        if (a[0]-b[0] < 0) cout << "NO\n";
        else
        {
            mx = a[0]-b[0]; check = true;
            for (int i = 0; i < n && check; i++)
                if (a[i]-b[i] < 0) check = false;
                else mx = max(mx, a[i]-b[i]);
            if (!check) cout << "NO\n";
            else
            {
                check = true;
                for (int i = 0; i < n && check; i++)
                {
                    a[i] -= min(mx, a[i]);
                    if (a[i] != b[i]) check = false;
                }
                if (check) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }
    return 0;
}