#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, b, c, n; cin >> a >> b >> c >> n;
    int x = a-c;
    int y = b-c;
    int z = n-(c+x+y);
    if (x>=0 && y>=0 && z>0) cout << z;
    else cout << -1;
    return 0;
}