#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int32_t inp[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        if (n == 1)
        {
            if (inp[0] == 1) cout << "YES\n";
            else cout << "NO\n";
        } else
        {
            sort(inp, inp + n);
            if (inp[n-1] - inp[n-2] > 1)
                cout << "NO\n";
            else cout << "YES\n";
        }
    }
    return 0;
}