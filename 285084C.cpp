#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
int n, k;
vector <int> a, b;

bool is_good(int x){
    int cnt = 0;
    for (auto &it:a){
        int pos = upper_bound(b.begin(), b.end(), x - it) - b.begin();
        cnt += pos;
    }
    return cnt >= k;
}
void GOTOHANOI(){
    cin >> n >> k;
    a.resize(n); b.resize(n);
    for (auto &it:a) cin >> it;
    for (auto &it:b) cin >> it;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int l = 0, r = a.back() + b.back();
    while (l < r){
        int mid = (l + r) / 2;
        // cout << mid << endl;
        if (!is_good(mid)) l = mid + 1;
        else r = mid;
    }
    cout << l << endl;
    // for (auto &it:a) cout << it << " "; cout << endl;
    // for (auto &it:b) cout << it << " "; cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; //cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}