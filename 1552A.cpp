#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt; string str, ansi;
    while (test--)
    {
        cin >> n >> str;
        ansi = str;
        sort(ansi.begin(), ansi.end());
        cnt = 0;
        for (int i = 0; i < n; i++)
            if (str[i] != ansi[i]) cnt++;
        cout << cnt << '\n';
    }
    return 0;
}