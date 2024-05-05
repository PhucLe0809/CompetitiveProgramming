#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 1; i <= min(2*n, m); i++){
        if (2*n+i <= m) cout << 2*n+i << " ";
        cout << i << " ";
    }
    return 0;
}