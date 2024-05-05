#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n, m, a, b; cin >> n >> m >> a >> b;
    if (n%m==0) cout << 0;
    else{
        int64_t x = n - (n/m)*m;
        int64_t y = (n/m+1)*m - n;
        cout << min(b*x, a*y);
    }
    return 0;
}