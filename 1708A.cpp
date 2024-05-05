#include <bits/stdc++.h>

using namespace std; 
int32_t inp[105];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    bool check;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> inp[i];
        check = true;
        for (int i = 1; i<n && check; i++){
            if (inp[i]%inp[0] != 0) check = false;
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}