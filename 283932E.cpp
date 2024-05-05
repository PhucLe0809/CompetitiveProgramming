#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    double c; cin >> c;
    double l = 0.0, r = 1e5;
    for (int i = 0; i < 100; i++){
        double mid = (l + r) / 2;
        if (mid * mid + sqrt(mid) < c) l = mid;
        else r = mid;
    }
    cout << fixed << setprecision(9) << l << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}