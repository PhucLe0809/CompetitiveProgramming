#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x, m; m = INT_MIN;
    while (n--){
        cin >> x;
        if (floor(sqrt(x))!=sqrt(x)) m = max(m, x);
    }
    cout << m;
    return 0;
}