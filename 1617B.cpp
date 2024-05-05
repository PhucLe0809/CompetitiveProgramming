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
        if (n%2==0) cout << (n-1)/2 << " " << (n-1)/2+1 << " " << 1 << '\n';
        else{
            for (int i = 2; i < n-1; i++){
                if (__gcd(n-(i+1), i) == 1){
                    cout << n-(i+1) << " " << i << " " << 1 << '\n';
                    break; 
                }
            }
        }
    }
    return 0;
}