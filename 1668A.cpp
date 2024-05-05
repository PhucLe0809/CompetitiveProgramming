#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m, x;
    while (test--){
        cin >> n >> m;
        if (n > m) swap(n, m);
        if (n==1 && m>=3){
            cout << -1 << '\n'; continue;
        }
        if (n==1 && m < 3){ 
            cout << m-1 << '\n'; continue;
        }
        x = 2*m-2;
        x -= (n+m)%2;
        cout << x << '\n';
    }
    return 0;
}