#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k, p; cin >> n >> k >> p;
    int x = ceil(n * k * 1.0 / (k + 1));
    cout << x * p;
    return 0;
}