#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n, k, cnt;
    while (test--){
        cin >> n >> k;
        cnt = n-(n/k)*k;
        n -= cnt;
        while (n!=0){
            if (n%k==0){
                n /= k; cnt++;
            } else{
                cnt += (n-(n/k)*k);
                n -= (n-(n/k)*k);
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}