#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_good(vector <int> &inp, int &k, int &s){
    int cnt = 0, calc = 0;
    for (auto &it:inp){
        if (calc + it > s) cnt++, calc = it;
        else calc += it;
    }
    return cnt <= k;
}
void GOTOHANOI(){
    int n, k; cin >> n >> k;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    int l = 0, r = 1e15; inp.push_back(1e15);
    while (l < r){
        int mid = (l + r) / 2;
        if (!is_good(inp, k, mid)) l = mid + 1;
        else r = mid;
    }
    // cout << l << endl;
    int answer = 0, calc = 0;
    for (auto &it:inp){
        if (calc + it > l) answer = max(answer, calc), calc = it;
        else calc += it;
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