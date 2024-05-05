#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, m, x, y, tmp; 
    int a[105], b[105];
    while (test--){
        cin >> n; 
        x = tmp = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            tmp += a[i];
            x = max(x, tmp);
        }
        cin >> m; 
        y = tmp = 0;
        for (int i = 0; i < m; i++){
            cin >> b[i];
            tmp += b[i];
            y = max(y, tmp);
        }
        cout << x+y << '\n';
    }
    return 0;
}