#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    double h, l; cin >> h >> l;
    //x^2 + l^2 = (h+x)^2
    //x^2 + l^2 = h^2 + 2hx + x^2
    //(l^2-h^2) = 2hx
    cout << fixed << setprecision(9) << (l*l-h*h)/(2*h);
    return 0;
}