#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t x, even, odd;
    even = odd = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x%2==0) even++;
        else odd++;
    }
    if (even > odd) cout << odd;
    else cout << even;
    return 0;
}