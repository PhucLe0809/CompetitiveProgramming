#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_good(vector <pair<int, int>> &inp, int &k, int &x){
    int cnt = 0;
    for (auto &it:inp){
        cnt += max(min(it.second + 1, x) - it.first, 0LL);
    }
    return cnt <= k;
}
void GOTOHANOI(){
    int n, k; cin >> n >> k;
    vector <pair<int, int>> inp(n);
    for (auto &it:inp) cin >> it.first >> it.second;
    int l = -2e9 - 5, r = 2e9 + 5;
    while (l < r){
        int mid = (l + r + 1) / 2;
        // cout << mid << endl;
        if (!is_good(inp, k, mid)) r = mid - 1;
        else l = mid;
    }
    cout << l << endl;
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