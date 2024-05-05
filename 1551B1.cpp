#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    string str; int32_t cnt;
    while (test--)
    {
        cin >> str;
        map <int32_t, int32_t> mp;
        for (int i = 0; i < str.size(); i++)
            mp[int(str[i])]++;
        cnt = 0;
        for (auto &it : mp) 
            if (it.second > 1) cnt++;
        cout << (mp.size() + cnt)/2 << '\n';
    }
    return 0;
}