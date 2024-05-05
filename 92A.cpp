#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, m; cin >> n >> m;
    m -= (m/(n*(n+1)/2))*(n*(n+1)/2);
    for (int i = 1; i <= n; i++){
        if (m-i>=0) m -= i;
        else break;
    }
    cout << m;
    return 0;
}