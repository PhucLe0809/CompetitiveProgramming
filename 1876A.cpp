#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, p; cin >> n >> p;
    vector <pair<int, int>> inp(n);
    for (auto &it:inp) cin >> it.second;
    for (auto &it:inp) cin >> it.first;
    sort(inp.begin(), inp.end());
    int sum = p, cnt = 1;
    for (int i = 0; i < n && cnt < n; i++){
        if (inp[i].first > p) break;
        int amount = min(inp[i].second, n - cnt);
        cnt += amount;
        sum += amount * inp[i].first;
    }
    sum += (n - cnt) * p;
    cout << sum << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}