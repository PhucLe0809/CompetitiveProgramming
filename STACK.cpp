#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    stack <int> sta;
    while (test--){
        int t; cin >> t;
        if (t == 1){
            int n; cin >> n;
            sta.push(n); continue;
        }
        if (t == 2){
            if (!sta.empty()) sta.pop();
            continue;
        }
        if (t == 3){
            if (!sta.empty()) cout << sta.top() << endl;
            else cout << "Empty!\n";
            continue;
        }
    }
    return 0;
}