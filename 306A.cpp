#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    for (int i = 0; i < m-n%m; i++) cout << n/m << " ";
    for (int i = 0; i < n%m; i++) cout << n/m+1 << " ";
    return 0;
}