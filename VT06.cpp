#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    double sum = 0.0; int cnt = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x; 
        (x % 2 != 0) ?(sum += x, cnt++):(sum);
    }
    cout << fixed << setprecision(4) << sum / cnt;
    return 0;
}