#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, k, zero, one, x;
    while (test--){
        cin >> n >> k;
        zero = one = 0;
        for (int i = 1; i <= n; i++){
            cin >> x;
            if (abs(i-x)%k==0) one++;
            else zero++;
        }
        if (zero==0) cout << "0\n";
        else if (zero==2) cout << "1\n"; 
            else cout << "-1\n";
    }
    return 0;
}