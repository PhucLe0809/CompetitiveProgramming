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
        cout << 1 << '\n';
        for (int i = 2; i <= n; i++){
            cout << 1 << " ";
            if (i%2!=0){
                for (int j = 2; j < i; j++) cout << 0 << " ";
            }else{
                for (int j = 2; j < i; j++) cout << 0 << " ";
            }
            cout << 1 << '\n';
        }
    }
    return 0;
}