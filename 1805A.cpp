#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, answer;
    while (test--){
        cin >> n; answer = 0;
        for (int i = 0; i < n; i++){
            cin >> x; answer ^= x;
        }
        if (answer==0 && n%2==0){
            cout << answer << '\n'; continue;
        } else if (n&1){
                cout << answer << '\n'; continue;   
            }
        cout << -1 << '\n';
    }
    return 0;
}