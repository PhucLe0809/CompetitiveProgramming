#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    int x, m; m = 1;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (k%x==0) m = max(m, x);
    }
    cout << k/m;
    return 0;
}