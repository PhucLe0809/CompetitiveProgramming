#include <bits/stdc++.h>
#define m 998244353

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    int64_t calc;
    while (test--){
        cin >> n;
        if (n%2!=0){
            cout << 0 << '\n'; continue;
        }
        calc = 1;
        for (int64_t i = 2; i <= n/2; i++){
            calc = ((calc%m)*(i%m))%m;
        }
        calc = ((calc%m)*(calc%m))%m;
        cout << calc << '\n';
    }
    return 0;
}