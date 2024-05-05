#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, plus, x, infront; 
    bool check, one;
    while (test--){
        cin >> n; 
        check = one = false; plus = infront = 0;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (x+infront == -2) check = true;
            if (x!=1) one = true;
            plus += x; infront = x;
        }
        if (check) cout << plus+4 << '\n';
        else if (!one) cout << plus-4 << '\n';
            else cout << plus << '\n';
    }
    return 0;
}