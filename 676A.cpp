#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t mi, ma, x;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x == 1) mi = i+1;
        if (x == n) ma = i+1;
    }
    cout << max({abs(ma-1), abs(n-ma), abs(mi-1), abs(n-mi)});
    return 0;
}