#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, m, x, y, d;
    while (test--){
        cin >> n >> m >> x >> y >> d;
        if ((x-d<=1 && y-d<=1) || (x-d<=1 && x+d>=n)
        || (y-d<=1 && y+d>=m) || (x+d>=n && y+d>=m)){
            cout << -1 << '\n';
        }else cout << n+m-2 << '\n';
    }
    return 0;
}