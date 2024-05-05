#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, even, odd, x;
    while (test--){
        cin >> n;
        even = odd = 0;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (x%2 == 0) even += x;
            else odd += x;
        }
        if (even > odd) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}