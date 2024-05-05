#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; string str;
    while (test--)
    {
        cin >> n >> str;
        if (n > 2) cout << "NO\n";
        else
        {
            if (n == 1) cout << "YES\n";
            else if (str[0] != str[1]) cout << "YES\n";
                else cout << "NO\n";
        }
    }
    return 0;
}