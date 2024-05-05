#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int minn = LONG_MAX, maxx = LONG_MIN;
    int a = -1, b = -1;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        if (x < minn) minn = x, a = i;
        if (x > maxx) maxx = x, b = i;
    }
    cout << minn << " " << a << " " << maxx << " " << b;
    return 0;
}