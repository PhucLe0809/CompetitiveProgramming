#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    int negx = 0, negy = 0, posx = 0, posy = 0;
    for (int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        negx += (x <= 0);
        negy += (y <= 0);
        posx += (x >= 0);
        posy += (y >= 0);
    }
    if (negx == n || negy == n || posx == n || posy == n){
        cout << "YES\n";
    }else cout << "NO\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}