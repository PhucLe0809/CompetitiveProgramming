#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long double x; cin >> x;
    int a, b;
    if (x >= 0.0) a = (int)x, b = (int)x + 1;
    else a = (x == (int)x)?((int)x):((int)x - 1), b = (x == (int)x)?((int)x + 1):((int)x);
    cout << min(a, b) << " " << max(a, b);
    return 0;
}