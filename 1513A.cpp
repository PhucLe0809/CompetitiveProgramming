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
        if (k > (n-1)/2) cout << -1 << '\n';
        else{
            cout << 1 << " ";
            for (int i = 1; i <= k; i++){
                cout << 2*i+1 << " " << 2*i << " ";
            }
            for (int i = 2*(k+1); i <= n; i++) cout << i << " ";
            cout << '\n';
        }
    }
    return 0;
}