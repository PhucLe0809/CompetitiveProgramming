#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, v; cin >> n >> v;
    if (v < n) cout << v+(n-v)*(n-v+1)/2-1;
    else cout << n-1;
    return 0;
}