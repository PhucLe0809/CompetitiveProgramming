#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n, m; cin >> n >> m;
    if (m==1) cout << n-1;
    else cout << n*(m-1);
    return 0;
}