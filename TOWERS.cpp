#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, r, b;
    string str, ansi;
    string x, y;
    int32_t one, two;
    while (test--)
    {
        cin >> n >> m;
        cin >> str >> ansi;
        x = str;
        for (int i = m-1; i >= 0; i--) x += ansi[i];
        y = ansi;
        for (int i = n-1; i >= 0; i--) y += str[i];
        one = two = 0;
        for (int i = 0; i < n+m-1; i++)
        {
            if (x[i] == x[i+1]) one++;
            if (y[i] == y[i+1]) two++;
        }
        if (one < 2 || two < 2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}