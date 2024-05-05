#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k, x, cnt;
    while (test--){
        cin >> n >> k; 
        cnt = 0;
        for (int i = 0; i<n; i++){
            cin >> x; 
            if (x) cnt++;
        }
        if (cnt) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}