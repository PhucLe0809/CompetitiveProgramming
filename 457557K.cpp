#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    priority_queue<pair<int, int>> q;
    for (auto x : mp) q.emplace(x.second, x.first);
    vector<vector<int>> ans;
    while (q.size() > 2)
    {
        auto a = q.top();
        q.pop();
        auto b = q.top();
        q.pop();
        auto c = q.top();
        q.pop();
        ans.push_back({a.second, b.second, c.second});
        a.first--, b.first--, c.first--;
        if (a.first) q.push(a);
        if (b.first) q.push(b);
        if (c.first) q.push(c);
    }
    cout << ans.size() << '\n';
    for (auto x : ans) 
    {
        sort(x.rbegin(), x.rend());
        for (int i : x) cout << i << ' ';
        cout << '\n';
    }
    return 0;
}