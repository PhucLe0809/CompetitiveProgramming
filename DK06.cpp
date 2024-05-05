#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double a, b; cin >> a >> b;
    if (a == 0 && b != 0){
        cout << "NO"; return 0;
    }
    if (a == 0 && b == 0){
        cout << "WOW"; return 0;
    }
    cout << fixed << setprecision(2) << -b / a;
    return 0;
}