#include <bits/stdc++.h>

using namespace std; 
int32_t inp[35];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, cnt;
    bool check;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        cnt = 0;
        for (int i = n-2; i >= 0; i--){
            while (inp[i] && inp[i]>=inp[i+1]){
                inp[i] /= 2; cnt++;
            }
        }
        check = true;
        for (int i = 0; i<n-1 && check; i++){
            if (inp[i] >= inp[i+1]) check = false;
        }
        if (check) cout << cnt << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}