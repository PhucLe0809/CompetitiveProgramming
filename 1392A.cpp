#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, pivot, x, cnt;
    while (test--){
        cin >> n; 
        cin >> pivot; cnt = 1;
        for (int i = 1; i < n; i++){
            cin >> x;
            if (x==pivot) cnt++;
            else pivot = -1;
        }
        if (cnt!=n) cout << 1 << '\n';
        else cout << cnt << '\n'; 
    }
    return 0;
}