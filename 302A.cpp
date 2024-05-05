#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    int32_t a, b, x;
    a = b = 0;
    for (int i = 1; i <= n; i++){
        cin >> x;
        if (x>0) a++; else b++;
    }
    int32_t l, r;
    while (m--){
        cin >> l >> r;
        if ((r-l+1)%2==0 && (r-l+1)/2<=min(a, b)) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
    return 0;
}