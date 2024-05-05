#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x;
    bool check;
    while (test--){
        cin >> n; check = true;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (x<0) check = false;
        }
        if (!check) cout << "No\n";
        else {
            cout << "Yes\n";
            cout << 300 << '\n';
            for (int i = 0; i < 300; i++) cout << i << " ";
            cout << '\n';
        }
    }
    return 0;
}