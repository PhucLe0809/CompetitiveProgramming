#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x;
    int64_t one, zero;
    while (test--){
        cin >> n;
        one = zero = 0;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (x==1) one++;
            if (x==0) zero++;
        }
        cout << one*(int64_t(1)<<zero) << '\n';
    }
    return 0;
}