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
    sort(inp.begin(), inp.end());
    if (n == 1) cout << inp[0];
    else{
        if (n == 2) cout << inp[1] << endl << inp[0];
        else cout << inp[n-1] << endl << inp[n-2] << endl <<inp[n-3];
    }
    return 0;
}