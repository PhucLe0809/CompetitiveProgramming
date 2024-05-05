#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int l, r; cin >> l >> r;
    (l % 2 == 0)?(l++):(l);
    (r % 2 == 0)?(r--):(r);
    int n = r/2 - l/2 + 1;
    if (l >= r) cout << 0;
    else cout << (n * (l + r)) / 2;
    return 0;
}