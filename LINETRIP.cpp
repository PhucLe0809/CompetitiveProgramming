#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int a = LONG_MAX, b = LONG_MIN;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a = min(a, x); b = max(b, x);
    }
    b = max(b, 0LL);
    a = min(a, 0LL);
    cout << 2 * (b - a);
    return 0;
}