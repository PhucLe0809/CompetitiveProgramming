#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_good(string &t, int &n, string &p, int &m, vector <int> &inp, string &state, int &pre, int &mid){
    if (mid == 0) return true;
    if (mid <= pre){
        for (int i = mid + 1; i <= pre; i++) state[inp[i]] = '0';
    }else{
        for (int i = pre; i <= mid; i++) state[inp[i]] = '1';
    }
    int j = 0;
    for (int i = 0; i < n; i++){
        if (state[i+1] == '1') continue;
        if (t[i] == p[j]) j++;
    }
    return j == m;
}
void GOTOHANOI(){
    string t, p; cin >> t >> p;
    int n = t.size(), m = p.size();
    vector <int> inp(n + 1);
    for (int i = 1; i <= n; i++) cin >> inp[i];
    int l = 0, r = n, pre = n;
    string state = "1";
    for (int i = 0; i < n; i++) state += '1';
    while (l < r){
        int mid = (l + r + 1) / 2;
        // cout << l << " " << r << " " << mid << endl;
        if (!is_good(t, n, p, m, inp, state, pre, mid)) r = mid - 1;
        else l = mid;
        pre = mid;
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