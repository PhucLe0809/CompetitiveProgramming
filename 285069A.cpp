#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_good(vector <double> &inp, int &n, int &d, double &x){
    vector <double> prefix(n+1), scan(n+1);
    prefix[0] = scan[0] = 0.0 - x;
    for (int i = 1; i <= n; i++){
        prefix[i] = prefix[i-1] + (inp[i] - x);
        scan[i] = min(scan[i-1], prefix[i]);
    }
    bool check = false;
    for (int i = d; i <= n && !check; i++){
        check = check || (scan[i - d] <= prefix[i]);
    }
    return check;
}
void GOTOHANOI(){
    int n, d; cin >> n >> d;
    vector <double> inp(n+1); inp[0] = 0;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    double l = 0.0;
    double r = 100.0;
    for (int i = 0; i < 100; i++){
        double mid = (l + r) / 2;
        if (!is_good(inp, n, d, mid)) r = mid;
        else l = mid;
    }
    // cout << fixed << setprecision(9) << l << endl;
    double x = l;
    vector <int> id(n+1);
    vector <double> prefix(n+1), scan(n+1);
    prefix[0] = scan[0] = 0.0 - x;
    for (int i = 1; i <= n; i++){
        prefix[i] = prefix[i-1] + (inp[i] - x);
        scan[i] = min(scan[i-1], prefix[i]);
        id[i] = (scan[i-1] <= scan[i])?(id[i-1]):(i);
    }
    for (int i = d; i <= n; i++){
        if (scan[i - d] <= prefix[i]){
            cout << id[i - d] + 1 << " " << i << endl;
            return;
        }
    }
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