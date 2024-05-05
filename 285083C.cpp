#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_good(vector <int> &inp, int &k, int &d){
    int cnt = 0, pre = inp[0];
    for (auto &it:inp){
        if (it - pre > d) cnt++, pre = it;
    }
    return cnt >= k;
}
void GOTOHANOI(){
    int n, k; cin >> n >> k;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    // sort(inp.begin(), inp.end());
    int l = 0, r = 1e9; inp.push_back(2e9);
    while (l < r){
        int mid = (l + r + 1) / 2;
        if (!is_good(inp, k, mid)) r = mid - 1;
        else l = mid;
    }
    // cout << l << endl;
    int answer = LONG_MAX, pre = inp[0];
    for (auto &it:inp){
        if (it - pre > l) answer = min(answer, it - pre), pre = it;
    }
    cout << answer << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}