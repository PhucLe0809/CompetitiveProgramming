#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_good(vector <double> &inp, int &k, double &mid){
    int cnt = 0;
    for (auto &it:inp){
        cnt += (int)(it / mid);
    }
    return cnt >= k;
}
void GOTOHANOI(){
    int n, k; cin >> n >> k;
    vector <double> inp(n);
    for (auto &it:inp) cin >> it;
    double l = 0.0, r = 1e7;
    for (int i = 0; i < 100; i++){
        double mid = (l + r) / 2;
        if (!is_good(inp, k, mid)) r = mid;
        else l = mid;
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