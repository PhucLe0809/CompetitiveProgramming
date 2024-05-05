#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, tmp, cnt, address;
    pair <int32_t, int32_t> scan;
    map <int32_t, pair<int32_t, int32_t>> :: iterator it;
    while (test--)
    {
        cin >> n;
        map <int32_t, pair<int32_t, int32_t>> mp;
        for (int i = 0; i < n; i++) 
        {
            cin >> tmp;
            scan = mp[tmp]; cnt = scan.first;
            cnt++;
            mp[tmp] = {cnt, i+1};
        }
        address = -1;
        for (it = mp.begin(); it != mp.end() && address == -1; it++)
        {
            scan = it->second;
            if (scan.first == 1) address = scan.second;
        }
        cout << address << '\n';
    }
    return 0;
}