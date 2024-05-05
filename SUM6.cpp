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
        double sum = 0;
        for (int i = 0; i < n; i++) sum = sqrt(2.0 + sum);
        cout << fixed << setprecision(5) << sum << endl;
    }
    return 0;
}