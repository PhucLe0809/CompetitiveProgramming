#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    for (int i = 0; i < n; i++){
        if (i % 2 != 0){
            if (i == n-1){
                inp[i] += inp[i-1]; continue;
            }
            inp[i] += abs(inp[i+1] - inp[i-1]);
        }
    }
    for (auto &it:inp) cout << it << " ";
    return 0;
}