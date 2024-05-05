#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_good(int &n, int &k, int &x){
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        cnt += max(min(n + 1, x / i + (x%i != 0)) - 1, 0LL);
    }
    return cnt < k;
}
void GOTOHANOI(){
    int n, k; cin >> n >> k;
    int l = 0, r = 1e10;
    while (l < r){
        int mid = (l + r + 1) / 2;
        // cout << mid << endl;
        if (!is_good(n, k, mid)) r = mid - 1;
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