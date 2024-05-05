#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n; cin >> n;
    if (n==0){ cout << 0; return 0; }
    if ((n+1)&1) cout << n+1;
    else cout << (n+1)/2;
    return 0;
}