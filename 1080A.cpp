#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n, k; cin >> n >> k;
    cout << (2*n)/k+((2*n)%k!=0)+(5*n)/k+((5*n)%k!=0)+(8*n)/k+((8*n)%k!=0);
    return 0;
}