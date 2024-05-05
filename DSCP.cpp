#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int l, r; cin >> l >> r;
    int a = ceil(sqrt(l));
    int b = floor(sqrt(r));
    cout << (b - a + 1);
    return 0;
}