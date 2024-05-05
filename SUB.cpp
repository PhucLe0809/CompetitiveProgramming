#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        int a = 0, b = 0, sum = 0;
        int maxx = LONG_MIN;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            (x > 0)?(a += x):(a);
            sum = max(sum + x, x);
            b = max(b, sum);
            maxx = max(maxx, x);
        }
        if (a == 0) a = maxx;
        if (b == 0) b = maxx;
        cout << a << " " << b << endl;
    }
    return 0;
}