#include <bits/stdc++.h>

using namespace std;
double x[105], y[105];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    double d = 0.0;
    for (int i = 1; i < n; i++){
        d += sqrt(pow(x[i]-x[i-1], 2)+pow(y[i]-y[i-1], 2));
    }
    cout << fixed << setprecision(9) << (d/50)*k;
    return 0;
}