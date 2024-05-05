#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b, c, d; cin >> a >> b >> c >> d;
    cout << abs(a - c) * abs(b - d);
    return 0;
}