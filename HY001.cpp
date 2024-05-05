#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> prefix(n+1);
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        prefix[i] = prefix[i-1] + x;
    }
    double x = LONG_MAX, y = LONG_MIN;
    for (int i = 2; i <= n; i++){
        for (int j = 1; j < i; j++){
            x = min(x, (prefix[i] - prefix[j-1]) * 1.0 / (i - j + 1));
            y = max(y, (prefix[i] - prefix[j-1]) * 1.0 / (i - j + 1));
        }
    }
    cout << fixed << setprecision(3) << x << " " << y;
    return 0;
}