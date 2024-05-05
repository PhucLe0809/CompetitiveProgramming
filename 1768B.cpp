#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k, x, cnt;
    while (test--){
        cin >> n >> k; cnt = 1;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (cnt==x) cnt++;
        }
        cout << (n+k-cnt)/k << '\n';
    }
    return 0;
}