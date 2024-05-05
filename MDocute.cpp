#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, mx_idx, m, l, r;
    while (test--){
        cin >> n;
        vector <pair<int, int>> inp(n);
        for (int i = 0; i < n; i++){
            cin >> inp[i].first; inp[i].second = i;
        }
        sort(inp.begin(), inp.end(), greater<>());
        set <int> unused, used;
        for (int i = 0; i <= n; i++) unused.insert(i);
        used.insert(-1); used.insert(n);
        int64_t answer = (1ll*n*(n-1)*(n+1))/6;
        for (int i = 0; i < n; i++){
            mx_idx = inp[i].second;
            auto it = lower_bound(used.begin(), used.end(), mx_idx);
            m = *it;
            l = *--it+1;
            unused.erase(mx_idx);
            used.insert(mx_idx);
            if(m == n) continue;
            r = *lower_bound(unused.begin(), unused.end(), m);
            answer -= 1ll*(mx_idx-l+1)*(r-m);
        }
        cout << answer << '\n';
    }
    return 0;
}