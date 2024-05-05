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
        if (n==1){
            cout << 9 << '\n'; continue;
        }
        if (n==2){
            cout << 98 << '\n'; continue;
        }
        cout << 989;
        for (int i = 0; i <= n-4; i++) cout << i%10; 
        cout << '\n';
    }
    return 0;
}