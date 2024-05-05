#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n; cin >> n;
    if ((n*(n+1)/2)%2 == 0) cout << 0;
    else cout << 1;
    return 0;
}