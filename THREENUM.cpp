#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b, c, k; cin >> a >> b >> c >> k;
    if (abs(a - b) <= k && abs(a - c) <= k && abs(b - c) <= k) cout << "Yes";
    else cout << "No";
    return 0;
}