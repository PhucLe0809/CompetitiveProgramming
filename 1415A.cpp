#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n, m, r, c;
    while (test--){
        cin >> n >> m >> r >> c;
        cout << max({r-1+c-1, r-1+m-c, n-r+c-1, n-r+m-c}) << '\n';
    }
    return 0;
}