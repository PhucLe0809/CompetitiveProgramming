#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        int n, k; cin >> n >> k;
        int cnt = 0;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            cnt += (int)(x <= 0);
        }
        if (cnt < k) cout << "YES\n"; else cout << "NO\n";
    }
    return 0;
}