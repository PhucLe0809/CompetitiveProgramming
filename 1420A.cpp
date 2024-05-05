#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, infront; 
    bool check;
    while (test--){
        cin >> n;
        check = false;
        infront = 1e9+9;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (x>=infront) check = true;
            infront = x;
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}