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
        double answer = (1.0 - 1.0 / (n+1)) * 2.0;
        cout << fixed << setprecision(8) << answer << endl;
    }
    return 0;
}