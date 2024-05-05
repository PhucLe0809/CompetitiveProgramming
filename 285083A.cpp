#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_good(vector <pair<double, double>> &inp, double &t){
    double a = -2e18;
    double b = 2e18;
    for (auto &it:inp){
        a = max(a, it.first - t * it.second);
        b = min(b, it.first + t * it.second);
    }
    return a <= b;
}
void GOTOHANOI(){
    int n; cin >> n;
    vector <pair<double, double>> inp(n);
    for (auto &it:inp) cin >> it.first >> it.second;
    double l = 0.0, r = 1e9 + 5;
    for (int i = 0; i < 100; i++){
        double mid = (l + r) / 2;
        if (!is_good(inp, mid)) l = mid;
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