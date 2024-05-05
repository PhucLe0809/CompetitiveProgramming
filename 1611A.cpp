#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; string str;
    int32_t pos;
    while (test--)
    {
        cin >> n;
        if (n % 2 == 0) cout << 0 << '\n';
        else
        {
            str = to_string(n);
            if ((int(str[0])-48) % 2 == 0) cout << 1 << '\n';
            else
            {
                pos = 0;
                while (pos < str.size())
                    if ((int(str[pos])-48) % 2 == 0) break;
                    else pos++;
                if (pos == str.size()) cout << -1 << '\n';
                else cout << 2 << '\n';
            }
        }
    }
    return 0;
}