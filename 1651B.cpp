#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, infront;
    while (test--){
        cin >> n;
        if (n>19) cout << "NO\n";
        else {
            cout << "YES\n";
            infront = 1;
            for (int i = 0; i < n; i++){
                cout << infront << " ";
                infront *= 3;
            }
            cout << '\n';
        }
    }
    return 0;
}