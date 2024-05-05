#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int restau[n+1][m+1];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> restau[i][j];
        }
    }
    vector <int> scan(n);
    for (int i = 0; i < n; i++){
        scan[i] = *min_element(restau[i], restau[i]+m);
    }
    sort(scan.begin(), scan.end());
    if (scan[0]==scan[n-1]) cout << scan[0];
    else cout << scan.back();
    return 0;
}