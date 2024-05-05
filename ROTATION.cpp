#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k, q; cin >> n >> k >> q;
    deque <int> inp(n);
    for (auto &it:inp) cin >> it;
    for (int i = 1; i <= k % n; i++){
        inp.push_front(inp.back());
        inp.pop_back();
    }
    while (q--){
        int m; cin >> m;
        cout << inp[m] << endl;
    }
    return 0;
}