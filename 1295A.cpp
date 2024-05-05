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
        if (n%2==0){
            for (int i = 0; i < n/2; i++) cout << 1;
        }else{
            cout << 7;
            for (int i = 1; i < n/2; i++) cout << 1;
        }
        cout << '\n';
    }
    return 0;
}