#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int64_t, pair<int64_t, int64_t>> a, pair<int64_t, pair<int64_t, int64_t>> b){
    if (a.first == b.first) return a.second.first < b.second.first;
    else return a.first > b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <pair<int64_t, pair<int64_t, int64_t>>> inp(n);
    int64_t a, b, h;
    for (int i = 0; i < n; i++){
        cin >> a >> b >> h;
        inp[i] = {b, {a, h}};
    }
    sort(inp.begin(), inp.end(), comp);
    vector <pair<int64_t, pair<int64_t, int64_t>>> scan;
    int t = 0;
    while (t < n){
        a = inp[t].second.first; b = inp[t].first;
        h = inp[t].second.second;
        while (inp[t+1].first == b && t+1<n){
            h += inp[t+1].second.second; t++;
        }
        t++;
        scan.push_back({b, {a, h}});
    }
    // for (auto &it:scan){
    //     cout << it.first << " " << it.second.first << " " << it.second.second << '\n';
    // }
    n = scan.size();
    vector <int64_t> dp(n);
    stack <int64_t> sta;
    int64_t answer = 0;
    for (int i = 0; i < n; i++){
        dp[i] = scan[i].second.second;
        b = scan[i].first;
        while (!sta.empty() && scan[sta.top()].second.first >= b) sta.pop();
        if (!sta.empty() && scan[sta.top()].second.first < b) dp[i] += dp[sta.top()];
        answer = max(answer, dp[i]); sta.push(i);
    }
    cout << answer;
    return 0;
}