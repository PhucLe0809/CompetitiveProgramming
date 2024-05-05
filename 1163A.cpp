#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    if (m==0){
        cout << 1; return 0;
    }
    if (m<=n/2) cout << m;
    else{
        m -= n/2; 
        if (n%2!=0) m--;
        cout << n/2-m << '\n';
    }
    return 0;
}