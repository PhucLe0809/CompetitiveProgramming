#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        vector <int> inp(n);
        for (auto &it:inp) cin >> it;
        if (n == 1){
            cout << "No\n"; continue;
        }
        int res = 0, cnt = 0; inp.push_back(inp.back() + 3);
        for (int i = 1; i <= n; i++){
            if (abs(inp[i] - inp[i-1]) == 1) cnt++;
            else{
                res = max(res, cnt); cnt = 1;
            }
        }
        (res != 0)?(res++):(res);
        if (res > n/2) cout << "Yes\n"; else cout << "No\n";
    }
    return 0;
}