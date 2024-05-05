#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    double n, m; cin >> n >> m;
    double cost, a, b;
    cost = 1e9*1.0;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        cost = min(cost, a/b);
    }
    cout << fixed << setprecision(9) << cost*m;
    return 0;
}