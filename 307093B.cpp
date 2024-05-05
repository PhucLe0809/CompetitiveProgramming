#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, s; cin >> n >> s;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    int sum = 0, res = 2*n;
    for (int i = 0, j = 0; i < n; i++){
        while (j < n && sum < s) sum += inp[j++];
        if (sum < s) break;
        res = min(res, j - i);
        sum -= inp[i];
    }
    if (res == 2*n) cout << -1 << endl; else cout << res << endl;
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