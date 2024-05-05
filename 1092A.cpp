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
        for (int i = 1; i <= n/k; i++){
            for (int j = 0; j < k; j++) cout << char('a'+j);
        }
        for (int i = 0; i < n%k; i++){
            cout << char('a'+i);
        }
        cout << '\n';
    }
    return 0;
}