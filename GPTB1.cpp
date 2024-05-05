#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a1, b1, c1, a2, b2, c2; cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    int d = a1*b2 - a2*b1;
    int dx = c1*b2 - c2*b1;
    int dy = a1*c2 - a2*c1;
    if (d == dx && d == dy && d == 0) cout << "VOSONGHIEM";
    else{
        if (d == 0 && dx != 0 && dy != 0) cout << "VONGHIEM";
        else{
            double x = dx * 1.0 / d;
            double y = dy * 1.0 / d;
            cout << fixed << setprecision(2) << x << " " << y;
        }
    } 
    return 0;
}