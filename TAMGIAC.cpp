#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b, c; cin >> a >> b >> c;
    if (!(a + b > c && a + c > b && b + c > a)) cout << "NO";
    else{
        int cv = a + b + c;
        double p = cv / 2.0;
        double dt = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << cv << " ";
        cout << fixed << setprecision(2) << dt;
    }
    return 0;
}