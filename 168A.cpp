#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, x, y; cin >> n >> x >> y;
    int puppet = ceil(y*n*1.0/100);
    cout << max(puppet-x, 0);
    return 0;
}