#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> cnt(100);
    int maxx = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        cnt[x]++; maxx = max(maxx, x);
    }
    bool check = cnt[0] > 0;
    for (int i = 1; i < 100; i++){
        check = check && (cnt[i] <= cnt[i-1]);
    }
    if (check) cout << "YES\n"; else cout << "NO\n";
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