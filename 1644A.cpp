#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str; bool check;
    while (test--)
    {
        cin >> str; check = true;
        map <int32_t, int32_t> mp;
        for (int i = 0; i < 6 && check; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                mp[(str[i])]++;
            else mp[tolower(str[i])]--;
            if (mp[tolower(str[i])] == -1) check = false;
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}