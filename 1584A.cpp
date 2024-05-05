#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t u, v;
    while (test--){
        cin >> u >> v;
        cout << u*u << " " << -v*v << '\n';
    }
    return 0;
}