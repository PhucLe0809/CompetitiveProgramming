#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <pair<int, int>> inp(n);
    for (int i = 0; i < n; i++){
        cin >> inp[i].first >> inp[i].second;
    }
    sort(inp.begin(), inp.end());
    int answer = inp[0].second;
    for (int i = 1; i < n; i++){
        if (inp[i].second >= answer) answer = inp[i].second;
        else answer = inp[i].first;
    }
    // for (auto &it:inp) cout << it.first << " " << it.second << endl;
    cout << answer;
    return 0;
}