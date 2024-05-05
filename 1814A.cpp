#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n, k;
    while (test--){
        cin >> n >> k;
        if (n%2==0) cout << "YES\n";
        else {
            if ((n-k)%2==0 || (n-2*k)%2==0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}