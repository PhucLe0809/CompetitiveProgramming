#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, x, y, z, t;
    int a, b;
    while (test--){
        cin >> n >> x >> y >> z >> t;
        x = min(x, n-x+1); y = min(y, n-y+1);
        z = min(z, n-z+1); t = min(t, n-t+1);
        (x>=y)?(a=y):(a=x);
        (z>=t)?(b=t):(b=z);
        cout << abs(a-b) << '\n';
    }
    return 0;
}