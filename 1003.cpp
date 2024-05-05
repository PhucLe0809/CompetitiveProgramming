#include <bits/stdc++.h>

using namespace std;
map <int32_t, int32_t> mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp; mp[tmp]++;
    }
    int32_t result = 0;
    for (auto &it : mp)
        result = max(result, it.second);
    cout << result << '\n';
    return 0;
}