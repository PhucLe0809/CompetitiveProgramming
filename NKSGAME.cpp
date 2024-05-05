#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> b(n), c(n);
    for (auto &it:b) cin >> it;
    for (auto &it:c) cin >> it;
    sort(b.begin(), b.end(), greater<>());
    sort(c.begin(), c.end());
    int res = LONG_MAX;
    int j = 0; c.push_back(LONG_MAX);
    for (int i = 0; i < n; i++){
        while (j+1 < n && c[j+1] <= -b[i]) j++;
        res = min(res, min(abs(b[i] + c[j]), abs(b[i] + c[j+1])));
    }
    cout << res << endl;
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