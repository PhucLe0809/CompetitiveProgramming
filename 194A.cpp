#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    if (k>=3*n) cout << 0;
    else cout << n-k%n;
    return 0;
}