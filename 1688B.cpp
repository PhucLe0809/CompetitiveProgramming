#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, even, minn, cnt;
    while (test--){
        cin >> n; 
        even = 0; minn = 1e9;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (x%2==0){
                even++;
                cnt = 0;
                while (x%2==0){
                    cnt++; x /= 2;
                }
                minn = min(minn, cnt);
            }
        }
        if (even==n)
            cout << minn+(n-1) << '\n';
        else cout << even << '\n';
    }
    return 0;
}