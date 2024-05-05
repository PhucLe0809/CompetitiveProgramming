#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    int scan[m+5];
    fill(scan, scan + m+5, 0);
    int x = 0, y = 0;
    for (int i = 1; i <= n; i++){
        int a, b; cin >> a >> b;
        x = max(x, b - a + 1);
        for (int j = a; j <= b; j++){
            if (scan[j] == 0) scan[j] = i;
        }
    }
    int cnt = 1;
    for (int i = 1; i <= m+1; i++){
        if (scan[i] == scan[i-1]) cnt++;
        else{
            if (scan[i-1] != 0) y = max(y, cnt);
            cnt = 1;
        }
    }
    cout << x << " " << y;
    return 0;
}