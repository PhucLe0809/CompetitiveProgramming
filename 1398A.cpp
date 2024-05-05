#include <bits/stdc++.h>

using namespace std;
vector <pair<int32_t, int32_t>> inp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, tmp;
    while (test--)
    {
        cin >> n;
        inp.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            inp.push_back({tmp, i+1});
        }
        sort(inp.begin(), inp.end());
        if (inp[0].first + inp[1].first > inp.back().first)
            cout << -1 << '\n';
        else cout << inp[0].second << " " << inp[1].second << " " << inp.back().second << '\n';
    }
    return 0;
}