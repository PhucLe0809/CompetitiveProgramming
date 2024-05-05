#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double a, b, c; cin >> a >> b >> c;
    if (a == 0){
        if (b == 0 && c != 0){
            cout << "NO"; return 0;
        }
        if (b == 0 && c == 0){
            cout << "WOW"; return 0;
        }
        cout << fixed << setprecision(2) << -c / b;
    }else{
        double delta = b*b - 4*a*c;
        if (delta < 0){
            cout << "NO"; return 0;
        }
        if (delta == 0){
            double x = -b / (2*a);
            cout << fixed<< setprecision(2) << x; return 0;
        }
        double x1 = (-b + sqrt(delta)) / (2*a);
        double x2 = (-b - sqrt(delta)) / (2*a);
        cout << fixed << setprecision(2) << min(x1, x2) << " " << max(x1, x2);
    }
    return 0;
}