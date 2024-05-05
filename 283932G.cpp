#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_good(vector <int> &inp, int &k, int &mid){
    int slots = k * mid;
    for (auto &it:inp) slots -= min(it, mid);
    return slots <= 0;
}
void GOTOHANOI(){
    int k, n; cin >> k >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    int l = 0, r = 50 * 1e9;
    while (l < r){
        int mid = (l + r + 1) / 2;
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