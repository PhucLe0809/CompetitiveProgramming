#include <bits/stdc++.h>
#define maxarray 55

using namespace std;
int32_t inp[maxarray];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; string str; bool check;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        cin >> str;
        map <int32_t, char> mp; check = true;
        for (int i = 0; i < n && check; i++)
            if (mp[inp[i]] == 0)
                mp[inp[i]] = str[i];
            else if (mp[inp[i]] != str[i]) check = false;
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}