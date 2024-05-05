#include <bits/stdc++.h>

using namespace std; 
int32_t inp[1005];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, len, square;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        if (n==1){
            cout << 1 << '\n'; continue;
        }
        sort(inp, inp+n);
        if (inp[0]>=n){
            cout << n << '\n'; continue;
        }
        else{
            len = n-1;
            for (int i = 1; i < n; i++){
                if (inp[i]>=len) break;
                else len--;
            }
            cout << len << '\n';
        }
    }
    return 0;
}