#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--){
        cin >> n;
        for (int i = 1; i <= n/2; i++) 
            cout << 2*i-1 << " ";
        if (n%2!=0) cout << n << " ";
        for (int i = n/2; i >= 1; i--)
            cout << 2*i << " ";
        cout << '\n';
    }
    return 0;
}