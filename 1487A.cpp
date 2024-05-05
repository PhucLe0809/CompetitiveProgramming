#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, tmp; 
    while (test--)
    {
        cin >> n;
        map <int32_t, int32_t> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp; mp[tmp]++;
        }
        cout << n - mp.begin()->second << '\n';
    }
    return 0;
}