#include <bits/stdc++.h>
#define maxarray 105

using namespace std;
int32_t inp[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, plus;
    while (test--)
    {
        cin >> n >> m; plus = 0;
        for (int i = 0; i < n; i++) 
        {
            cin >> inp[i]; plus += inp[i];
        }
        if (plus == m) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}