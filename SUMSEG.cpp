#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, q; cin >> n >> q;
    vector <int> prefix(n+1);
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        prefix[i] = prefix[i-1] + max(x, 0LL);
    }
    while (q--){
        int l, r; cin >> l >> r;
        cout << prefix[r] - prefix[l-1] << endl;    
    }
    return 0;
}