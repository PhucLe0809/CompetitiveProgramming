#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <pair<int, int>> inp(n);
    for (auto &it:inp) cin >> it.first >> it.second;
    sort(inp.begin(), inp.end());
    int64_t answer = 0, pre = 0;
    for (auto &it:inp){
        pre += it.first;
        answer += it.second - pre;
    }
    cout << answer;
    return 0;
}