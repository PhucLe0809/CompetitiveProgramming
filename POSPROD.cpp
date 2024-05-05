#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> inp(n);
    int pos = 0, neg = 0, zero = 0;
    for (auto &it:inp){
        cin >> it;
        if (it > 0) pos++;
        if (it < 0) neg++;
        if (it == 0) zero++;
    }
    if (zero != 0) cout << -1;
    else{
        cout << min(pos, neg);
    }
    return 0;
}