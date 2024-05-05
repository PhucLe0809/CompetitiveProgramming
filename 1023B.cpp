#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n, k; cin >> n >> k;
    cout << max(max(min(n+1, k) - (k-k/2), 0LL)-!(k&1), 0LL);
    return 0;
}