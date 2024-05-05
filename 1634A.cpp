#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k;
    string str, ansi;
    while (test--)
    {
        cin >> n >> k; cin >> str;
        if (k == 0) cout << "1\n";
        else
        {
            ansi = str; reverse(str.begin(), str.end());
            if (ansi == str) cout << "1\n";
            else cout << "2\n";
        }
    }
    return 0;
}