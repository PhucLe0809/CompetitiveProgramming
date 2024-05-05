#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str, ansi;
    while (test--)
    {
        cin >> str;
        map <int32_t, int32_t> mp;
        for (int i = 0; i < str.size(); i++)
            mp[int(str[i])]++;
        ansi = "";
        for (auto &it : mp)
            if (it.second == 2) 
                cout << char(it.first) << char(it.first);
            else ansi += char(it.first);
        cout << ansi << '\n';
    }
    return 0;
}