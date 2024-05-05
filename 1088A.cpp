#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t x; cin >> x;
    if (x==1) cout << -1;
    else cout << x-(x%2!=0) << " " << 2;
    return 0;
}