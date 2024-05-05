#include <bits/stdc++.h>

using namespace std; 
vector <pair<int32_t, int32_t>> inp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    int32_t a, b;
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        inp.push_back({b, a});
    }
    sort(inp.begin(), inp.end(), greater<>());
    int64_t answer = 0;
    for (int i = 0; i<m && n; i++){
        answer += min(n, inp[i].second)*int64_t(inp[i].first);
        n -= min(n, inp[i].second);
    }
    cout << answer;
    return 0;
}