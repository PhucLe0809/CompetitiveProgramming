#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k;
    while (test--){
        cin >> n >> k;
        cout << (n-1)-(k-1)/2 << '\n';
        for (int i = (k-1)/2+1; i < k; i++)
            cout << i << " ";
        for (int i = k+1; i <= n; i++) cout << i << " ";
        cout << '\n';
    }
    return 0;
}